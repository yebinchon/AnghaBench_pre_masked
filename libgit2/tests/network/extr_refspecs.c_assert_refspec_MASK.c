
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_refspec ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2, const char *VAR_3, bool VAR_4)
{
 git_refspec VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_5, VAR_3, VAR_2 == VAR_0);
 FUNC_1(&VAR_5);

 if (VAR_4)
  FUNC_0(0, VAR_6);
 else
  FUNC_0(VAR_1, VAR_6);
}
