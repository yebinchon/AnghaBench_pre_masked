
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,char*,...) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct hfi1_devdata*,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct hfi1_devdata *VAR_3, u64 VAR_4,
         const char *VAR_5)
{
 unsigned long VAR_6;
 u64 VAR_7;

 VAR_6 = VAR_2 + FUNC_1(VAR_1);
 while (1) {
  VAR_7 = FUNC_2(VAR_3, VAR_0) & VAR_4;

  if (VAR_7 == 0)
   return;
  if (FUNC_3(VAR_2, VAR_6))
   break;
  FUNC_4(1);
 }

 FUNC_0(VAR_3,
     "%s credit change status not clearing after %dms, mask 0x%llx, not clear 0x%llx\n",
     VAR_5, VAR_1, VAR_4, VAR_7);




 FUNC_0(VAR_3,
     "Continuing anyway.  A credit loss may occur.  Suggest a link bounce\n");
}
