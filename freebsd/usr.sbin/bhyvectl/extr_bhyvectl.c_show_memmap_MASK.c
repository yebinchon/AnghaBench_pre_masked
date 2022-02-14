
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int vm_ooffset_t ;
struct vmctx {int dummy; } ;
typedef int numbuf ;
typedef int name ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,int,size_t,char*,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct vmctx*,int,size_t*,char*,int) ;
 int FUNC_3 (struct vmctx*,scalar_t__*,int*,int *,size_t*,int*,int*) ;

__attribute__((used)) static int
FUNC_4(struct vmctx *VAR_10)
{
 char VAR_11[VAR_6 + 1], VAR_12[8];
 vm_ooffset_t VAR_13;
 vm_paddr_t VAR_14;
 size_t VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 FUNC_1("Address     Length      Segment     Offset      ");
 FUNC_1("Prot  Flags\n");

 VAR_14 = 0;
 while (1) {
  VAR_17 = FUNC_3(VAR_10, &VAR_14, &VAR_20, &VAR_13, &VAR_15,
      &VAR_19, &VAR_18);
  if (VAR_17)
   return (VAR_9 == VAR_0 ? 0 : VAR_17);

  VAR_17 = FUNC_2(VAR_10, VAR_20, &VAR_16, VAR_11, sizeof(VAR_11));
  if (VAR_17)
   return (VAR_17);

  FUNC_1("%-12lX", VAR_14);
  FUNC_0(VAR_12, sizeof(VAR_12), VAR_15, "B",
      VAR_1, VAR_2);
  FUNC_1("%-12s", VAR_12);

  FUNC_1("%-12s", VAR_11[0] ? VAR_11 : "sysmem");
  FUNC_1("%-12lX", VAR_13);
  FUNC_1("%c%c%c   ", VAR_19 & VAR_4 ? 'R' : '-',
      VAR_19 & VAR_5 ? 'W' : '-',
      VAR_19 & VAR_3 ? 'X' : '-');

  VAR_21 = '\0';
  if (VAR_18 & VAR_8) {
   FUNC_1("%cwired", VAR_21);
   VAR_21 = '/';
  }
  if (VAR_18 & VAR_7) {
   FUNC_1("%ciommu", VAR_21);
   VAR_21 = '/';
  }
  FUNC_1("\n");

  VAR_14 += VAR_15;
 }
}
