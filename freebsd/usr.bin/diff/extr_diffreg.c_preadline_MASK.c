
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int off_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,size_t,int ) ;
 char* FUNC_2 (size_t) ;

__attribute__((used)) static char *
FUNC_3(int VAR_0, size_t VAR_1, off_t VAR_2)
{
 char *VAR_3;
 ssize_t VAR_4;

 VAR_3 = FUNC_2(VAR_1 + 1);
 if ((VAR_4 = FUNC_1(VAR_0, VAR_3, VAR_1, VAR_2)) < 0)
  FUNC_0(2, "preadline");
 if (VAR_4 > 0 && VAR_3[VAR_4-1] == '\n')
  VAR_4--;
 VAR_3[VAR_4] = '\0';
 return (VAR_3);
}
