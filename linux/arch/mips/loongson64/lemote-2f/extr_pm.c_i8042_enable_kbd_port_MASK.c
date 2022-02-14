
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(void)
{
 if (FUNC_0(&VAR_5, VAR_1)) {
  FUNC_1("i8042.c: Can't read CTR while enabling i8042 kbd port."
         "\n");
  return -VAR_0;
 }

 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_4;

 if (FUNC_0(&VAR_5, VAR_2)) {
  VAR_5 &= ~VAR_4;
  VAR_5 |= VAR_3;
  FUNC_1("i8042.c: Failed to enable KBD port.\n");

  return -VAR_0;
 }

 return 0;
}
