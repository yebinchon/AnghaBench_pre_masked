
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int ) ;
 void* FUNC_3 (char*) ;

__attribute__((used)) static mode_t
FUNC_4(char *VAR_2)
{
 mode_t VAR_3;
 void *VAR_4;

 if ((VAR_4 = FUNC_3(VAR_2)) == ((void*)0))
  FUNC_0(VAR_0, "invalid directory creation mode '%s'", VAR_2);

 VAR_3 = FUNC_2(VAR_4, VAR_1);
 FUNC_1(VAR_4);
 return (VAR_3);
}
