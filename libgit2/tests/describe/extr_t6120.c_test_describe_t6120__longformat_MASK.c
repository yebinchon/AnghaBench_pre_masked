
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_describe_options ;
struct TYPE_4__ {int always_use_long_format; } ;
typedef TYPE_1__ git_describe_format_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int ,int *,TYPE_1__*) ;
 int VAR_2 ;

void FUNC_1(void)
{
 git_describe_options VAR_3 = VAR_1;
 git_describe_format_options VAR_4 = VAR_0;

 VAR_4.always_use_long_format = 1;

 FUNC_0("B-0-*", "HEAD^^2^", VAR_2, &VAR_3, &VAR_4);
 FUNC_0("A-3-*", "HEAD^^2", VAR_2, &VAR_3, &VAR_4);
}
