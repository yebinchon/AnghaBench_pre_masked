
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int
FUNC_2(void)
{
 int VAR_1;

 VAR_1 = FUNC_1("/dev/kcov", VAR_0);
 if (VAR_1 == -1)
  FUNC_0("Failed to open /dev/kcov");

 return (VAR_1);
}
