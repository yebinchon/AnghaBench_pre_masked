
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int max_sad; int (* sad_limit ) (scalar_t__) ;int interleave_pkg; int * interleave_list; int * dram_rule; } ;
struct TYPE_3__ {int * pci_cha; } ;
struct sbridge_pvt {TYPE_2__ info; int pci_sad0; TYPE_1__ knl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sbridge_pvt*,int,int,int*,int*,int*) ;
 int FUNC_8 (scalar_t__,char*) ;
 int FUNC_9 (scalar_t__,char*) ;
 int VAR_5 ;
 int FUNC_10 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,int) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct sbridge_pvt *VAR_6, u64 *VAR_7)
{
 u64 VAR_8, VAR_9, VAR_10 = 0;
 u64 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18, VAR_19;
 u32 VAR_20, VAR_21;
 int VAR_22;
 u64 VAR_23[2];
 u32 VAR_24, VAR_25;
 u32 VAR_26[VAR_2];
 u32 VAR_27[VAR_2];
 int VAR_28;
 char VAR_29[VAR_3*2];
 char VAR_30[VAR_1*2];
 int VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34[VAR_1];

 for (VAR_22 = 0; VAR_22 < VAR_1; VAR_22++)
  VAR_7[VAR_22] = 0;


 VAR_31 = 0;
 for (VAR_22 = 0; VAR_22 < VAR_2; VAR_22++) {
  FUNC_10(VAR_6->knl.pci_cha[VAR_22],
    VAR_0, &VAR_27[VAR_22]);

  if (VAR_22 > 0 && VAR_27[VAR_22] != VAR_27[VAR_22-1]) {
   FUNC_8(VAR_27[VAR_22-1],
     VAR_29);
   if (VAR_31 == VAR_22-1)
    FUNC_4(0, "edc route table for CHA %d: %s\n",
     VAR_31, VAR_29);
   else
    FUNC_4(0, "edc route table for CHA %d-%d: %s\n",
     VAR_31, VAR_22-1, VAR_29);
   VAR_31 = VAR_22;
  }
 }
 FUNC_8(VAR_27[VAR_22-1], VAR_29);
 if (VAR_31 == VAR_22-1)
  FUNC_4(0, "edc route table for CHA %d: %s\n",
   VAR_31, VAR_29);
 else
  FUNC_4(0, "edc route table for CHA %d-%d: %s\n",
   VAR_31, VAR_22-1, VAR_29);


 VAR_31 = 0;
 for (VAR_22 = 0; VAR_22 < VAR_2; VAR_22++) {
  FUNC_10(VAR_6->knl.pci_cha[VAR_22],
   VAR_4, &VAR_26[VAR_22]);

  if (VAR_22 > 0 && VAR_26[VAR_22] != VAR_26[VAR_22-1]) {
   FUNC_9(VAR_26[VAR_22-1], VAR_30);
   if (VAR_31 == VAR_22-1)
    FUNC_4(0, "mc route table for CHA %d: %s\n",
     VAR_31, VAR_30);
   else
    FUNC_4(0, "mc route table for CHA %d-%d: %s\n",
     VAR_31, VAR_22-1, VAR_30);
   VAR_31 = VAR_22;
  }
 }
 FUNC_9(VAR_26[VAR_22-1], VAR_30);
 if (VAR_31 == VAR_22-1)
  FUNC_4(0, "mc route table for CHA %d: %s\n",
   VAR_31, VAR_30);
 else
  FUNC_4(0, "mc route table for CHA %d-%d: %s\n",
   VAR_31, VAR_22-1, VAR_30);


 for (VAR_16 = 0; VAR_16 < VAR_6->info.max_sad; VAR_16++) {

  VAR_8 = VAR_10;

  FUNC_10(VAR_6->pci_sad0,
   VAR_6->info.dram_rule[VAR_16], &VAR_24);

  if (!FUNC_1(VAR_24))
   break;

  VAR_28 = FUNC_2(VAR_24);

  VAR_10 = VAR_6->info.sad_limit(VAR_24)+1;
  VAR_9 = VAR_10 - VAR_8;

  FUNC_10(VAR_6->pci_sad0,
   VAR_6->info.interleave_list[VAR_16], &VAR_25);





  VAR_20 = FUNC_11(VAR_6->info.interleave_pkg,
      VAR_25, 0);
  for (VAR_18 = 1; VAR_18 < 8; VAR_18++) {
   VAR_21 = FUNC_11(VAR_6->info.interleave_pkg,
      VAR_25, VAR_18);

   if ((VAR_21 & 0x8) == 0) {




    FUNC_4(0, "Unexpected interleave target %d\n",
     VAR_21);
    return -1;
   }

   if (VAR_21 == VAR_20)
    break;
  }
  if (FUNC_3(VAR_24))
   VAR_18 *= 3;

  FUNC_4(3, "dram rule %d (base 0x%llx, limit 0x%llx), %d way interleave%s\n",
   VAR_16,
   VAR_8,
   VAR_10,
   VAR_18,
   VAR_28 ? ", EDRAM" : "");
  for (VAR_32 = 0; VAR_32 < 2; VAR_32++) {
   VAR_23[VAR_32] = 0;
   VAR_15 = 0;
   for (VAR_17 = 0;
     VAR_17 < FUNC_0(
      VAR_5);
     VAR_17++) {
    if (FUNC_7(VAR_6,
      VAR_17,
      VAR_32,
      &VAR_14,
      &VAR_13,
      &VAR_19))
     break;

    VAR_12 = (VAR_13+1) -
     (VAR_15 + VAR_14);
    VAR_15 += VAR_12;
    VAR_11 = (VAR_13+1) - VAR_12;

    if (VAR_11 < VAR_8) {
     if (VAR_13 > VAR_8)
      FUNC_4(0, "TAD region overlaps lower SAD boundary -- TAD tables may be configured incorrectly.\n");
    } else if (VAR_11 < VAR_10) {
     if (VAR_13+1 > VAR_10) {
      FUNC_4(0, "TAD region overlaps upper SAD boundary -- TAD tables may be configured incorrectly.\n");
     } else {

      FUNC_4(3, "TAD region %d 0x%llx - 0x%llx (%lld bytes) table%d\n",
       VAR_17, VAR_11,
       VAR_13, VAR_12,
       VAR_32);
      VAR_23[VAR_32] += VAR_12;
     }
    }
   }
  }

  for (VAR_32 = 0; VAR_32 < 2; VAR_32++) {
   FUNC_4(3, " total TAD DRAM footprint in table%d : 0x%llx (%lld bytes)\n",
    VAR_32, VAR_23[VAR_32], VAR_23[VAR_32]);
  }


  if (VAR_28)
   continue;


  for (VAR_33 = 0; VAR_33 < VAR_1; VAR_33++)
   VAR_34[VAR_33] = 0;




  for (VAR_33 = 0; VAR_33 < VAR_1; VAR_33++) {
   int VAR_35;
   int VAR_36;

   for (VAR_35 = 0; VAR_35 < VAR_1; VAR_35++) {
    for (VAR_36 = 0; VAR_36 < VAR_2; VAR_36++) {
     if (FUNC_6(VAR_35,
      VAR_26[VAR_36]) == VAR_33
      && !VAR_34[VAR_33]) {
      VAR_34[VAR_33] = 1;
      break;
     }
    }
   }
  }

  for (VAR_33 = 0; VAR_33 < VAR_1; VAR_33++) {
   VAR_32 = FUNC_5(VAR_33);
   if (VAR_34[VAR_33]) {
    FUNC_4(4, "mc channel %d contributes %lld bytes via sad entry %d\n",
     VAR_33,
     VAR_23[VAR_32]/VAR_18,
     VAR_16);
    VAR_7[VAR_33] +=
     VAR_23[VAR_32]/VAR_18;
   }
  }
 }

 return 0;
}
