
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;

int FUNC_2(void)
{
 if (VAR_1 < 0) {
  FUNC_1("Failing to resume from hibernate on an unknown CPU.\n");
  return -VAR_0;
 }

 return FUNC_0(VAR_1);
}
