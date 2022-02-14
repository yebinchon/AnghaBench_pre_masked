
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_describe_options ;
typedef int git_describe_format_options ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int ,int *,int *) ;
 int VAR_2 ;

void FUNC_1(void)
{
 git_describe_options VAR_3 = VAR_1;
 git_describe_format_options VAR_4 = VAR_0;

 FUNC_0("A-*", "HEAD", VAR_2, &VAR_3, &VAR_4);
 FUNC_0("A-*", "HEAD^", VAR_2, &VAR_3, &VAR_4);
 FUNC_0("R-*", "HEAD^^", VAR_2, &VAR_3, &VAR_4);
 FUNC_0("A-*", "HEAD^^2", VAR_2, &VAR_3, &VAR_4);
 FUNC_0("B", "HEAD^^2^", VAR_2, &VAR_3, &VAR_4);
 FUNC_0("R-*", "HEAD^^^", VAR_2, &VAR_3, &VAR_4);
}
