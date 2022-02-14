
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned long FUNC_3(void)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 != 0)
  FUNC_0("Couldn't pack flat tree: %s\n\r",
        FUNC_2(VAR_1));
 return (unsigned long)VAR_0;
}
