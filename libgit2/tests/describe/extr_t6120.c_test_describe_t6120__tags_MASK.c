
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int describe_strategy; } ;
typedef TYPE_1__ git_describe_options ;
typedef int git_describe_format_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int ,TYPE_1__*,int *) ;
 int VAR_3 ;

void FUNC_1(void)
{
 git_describe_options VAR_4 = VAR_1;
 git_describe_format_options VAR_5 = VAR_0;
 VAR_4.describe_strategy = VAR_2;

 FUNC_0("c-*", "HEAD", VAR_3, &VAR_4, &VAR_5);
 FUNC_0("c-*", "HEAD^", VAR_3, &VAR_4, &VAR_5);
 FUNC_0("e-*", "HEAD^^", VAR_3, &VAR_4, &VAR_5);
 FUNC_0("c-*", "HEAD^^2", VAR_3, &VAR_4, &VAR_5);
 FUNC_0("B", "HEAD^^2^", VAR_3, &VAR_4, &VAR_5);
 FUNC_0("e", "HEAD^^^", VAR_3, &VAR_4, &VAR_5);
}
