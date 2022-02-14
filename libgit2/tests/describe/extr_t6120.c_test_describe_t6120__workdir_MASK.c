
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_describe_options ;
struct TYPE_4__ {char* dirty_suffix; } ;
typedef TYPE_1__ git_describe_format_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int *,TYPE_1__*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_2 ;

void FUNC_2(void)
{
 git_describe_options VAR_3 = VAR_1;
 git_describe_format_options VAR_4 = VAR_0;

 FUNC_0("A-*[0-9a-f]", VAR_2, &VAR_3, &VAR_4);
 FUNC_1("describe/file", "something different");

 VAR_4.dirty_suffix = "-dirty";
 FUNC_0("A-*[0-9a-f]-dirty", VAR_2, &VAR_3, &VAR_4);
 VAR_4.dirty_suffix = ".mod";
 FUNC_0("A-*[0-9a-f].mod", VAR_2, &VAR_3, &VAR_4);
}
