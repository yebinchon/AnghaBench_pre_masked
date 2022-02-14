
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 char const* VAR_1 ;
 char* FUNC_1 (int ) ;

const char *FUNC_2(void)
{
 static int VAR_2;
 if (!VAR_2) {
  VAR_1 = FUNC_1(FUNC_0(VAR_0));
  VAR_2 = 1;
 }
 return VAR_1;
}
