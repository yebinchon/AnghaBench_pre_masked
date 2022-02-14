
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct range {int start; int end; } ;
struct TYPE_3__ {unsigned int bus; unsigned int slot; int vendor; int device; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int VAR_8 ;
 int FUNC_3 (int,unsigned long long) ;
 TYPE_1__* VAR_9 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (unsigned int,unsigned int,int,int) ;
 int FUNC_6 (struct range*,int,int,int ,int *) ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_10;
 unsigned VAR_11;
 unsigned VAR_12;
 int VAR_13;

 u64 VAR_14;
 u32 VAR_15;
 u64 VAR_16;
 u64 VAR_17 = VAR_0;

 int VAR_18;
 struct range VAR_19[8];


 if (VAR_8)
  return;

 if (!FUNC_2())
  return;

 VAR_13 = 0;
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_9); VAR_10++) {
  u32 VAR_20;
  u16 VAR_21;
  u16 VAR_22;

  VAR_11 = VAR_9[VAR_10].bus;
  VAR_12 = VAR_9[VAR_10].slot;
  VAR_20 = FUNC_5(VAR_11, VAR_12, 0, VAR_6);

  VAR_22 = VAR_20 & 0xffff;
  VAR_21 = (VAR_20>>16) & 0xffff;
  if (VAR_9[VAR_10].vendor == VAR_22 &&
      VAR_9[VAR_10].device == VAR_21) {
   VAR_13 = 1;
   break;
  }
 }

 if (!VAR_13)
  return;


 VAR_15 = VAR_4;
 FUNC_4(VAR_15, VAR_14);


 if (!(VAR_14 & (1<<21))) {
  VAR_16 = 1ULL << 32;
 } else {

  VAR_15 = VAR_5;
  FUNC_4(VAR_15, VAR_14);
  VAR_16 = FUNC_3(VAR_14 & 0xffffff800000ULL, 1ULL << 32);
 }

 if (VAR_17 <= VAR_16)
  VAR_17 = (VAR_16 + 2 * VAR_3 - 1) & VAR_1;





 VAR_18 = 0;
 for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
  u32 VAR_23;
  u64 VAR_24;
  u64 VAR_25;
  VAR_23 = FUNC_5(VAR_11, VAR_12, 1, 0x80 + (VAR_10 << 3));
  if (!(VAR_23 & 3))
   continue;

  VAR_24 = (u64)(VAR_23 & 0xffffff00) << 8;
  VAR_23 = FUNC_5(VAR_11, VAR_12, 1, 0x84 + (VAR_10 << 3));
  VAR_25 = ((u64)(VAR_23 & 0xffffff00) << 8) | 0xffff;

  if (VAR_25 < VAR_16)
   continue;

  VAR_19[VAR_18].start = VAR_24;
  VAR_19[VAR_18].end = VAR_25;
  VAR_18++;
 }

 if (!VAR_18)
  goto out;


 FUNC_6(VAR_19, VAR_18, sizeof(struct range), VAR_7, ((void*)0));

 if (VAR_19[VAR_18 - 1].end < VAR_17)
  goto out;
 if (VAR_19[0].start > VAR_17 + VAR_2)
  goto out;


 VAR_17 = (VAR_19[0].start & VAR_1) - VAR_3;
 if ((VAR_17 > VAR_16) && FUNC_1(VAR_17))
  goto out;
 VAR_17 = (VAR_19[VAR_18 - 1].end + VAR_3) & VAR_1;
 if (FUNC_1(VAR_17))
  goto out;

 for (VAR_10 = 1; VAR_10 < VAR_18; VAR_10++) {
  VAR_17 = (VAR_19[VAR_10 - 1].end + VAR_3) & VAR_1;
  VAR_14 = VAR_19[VAR_10].start & VAR_1;
  if (VAR_14 >= VAR_17 + VAR_2 && FUNC_1(VAR_17))
   goto out;
 }
 return;

out:
 VAR_8 = VAR_17;
}
