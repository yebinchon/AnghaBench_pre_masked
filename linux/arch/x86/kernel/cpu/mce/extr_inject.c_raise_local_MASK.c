
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {int inject_flags; int extcpu; scalar_t__ finished; scalar_t__ status; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct mce*,int *) ;
 int FUNC_4 (struct mce*) ;
 struct mce* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct mce *VAR_3 = FUNC_5(&VAR_2);
 int VAR_4 = FUNC_0(VAR_3->inject_flags);
 int VAR_5 = 0;
 int VAR_6 = VAR_3->extcpu;

 if (VAR_3->inject_flags & VAR_1) {
  FUNC_2("Triggering MCE exception on CPU %d\n", VAR_6);
  switch (VAR_4) {
  case 129:






  case 128:
   FUNC_3(VAR_3, ((void*)0));
   break;
  default:
   FUNC_2("Invalid MCE context\n");
   VAR_5 = -VAR_0;
  }
  FUNC_2("MCE exception done on CPU %d\n", VAR_6);
 } else if (VAR_3->status) {
  FUNC_2("Starting machine check poll CPU %d\n", VAR_6);
  FUNC_4(VAR_3);
  FUNC_1();
  FUNC_2("Machine check poll done on CPU %d\n", VAR_6);
 } else
  VAR_3->finished = 0;

 return VAR_5;
}
