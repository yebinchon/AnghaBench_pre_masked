
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alt_region {struct alt_instr* end; struct alt_instr* begin; } ;
struct alt_instr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct alt_region*,int,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_5 ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static int FUNC_9(void *VAR_6)
{
 struct alt_region VAR_7 = {
  .begin = (struct alt_instr *)VAR_1,
  .end = (struct alt_instr *)VAR_2,
 };


 if (FUNC_8()) {
  while (!FUNC_2(VAR_3))
   FUNC_6();
  FUNC_7();
 } else {
  FUNC_1(VAR_5, VAR_0);

  FUNC_5(VAR_5, VAR_4,
      VAR_0);

  FUNC_0(VAR_3);
  FUNC_4(&VAR_7, 0, VAR_5);

  FUNC_3(VAR_3, 1);
 }

 return 0;
}
