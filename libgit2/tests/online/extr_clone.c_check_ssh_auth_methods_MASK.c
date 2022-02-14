
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_cred ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(git_cred **VAR_2, const char *VAR_3, const char *VAR_4,
      unsigned int VAR_5, void *VAR_6)
{
 int *VAR_7 = (int *) VAR_6;
 FUNC_0(VAR_2); FUNC_0(VAR_3); FUNC_0(VAR_4); FUNC_0(VAR_6);

 if (!*VAR_7)
  FUNC_2(VAR_0, VAR_5);
 else
  FUNC_1(!(VAR_5 & VAR_0));

 return VAR_1;
}
