
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_3;

 if (VAR_2) {
  if ((VAR_3 = FUNC_3(VAR_0, VAR_1, 0)) < 0)
   FUNC_1(-1, "trigger_gc: socket");
  FUNC_0(VAR_3);
 }
 FUNC_2(1);
}
