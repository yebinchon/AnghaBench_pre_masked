
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct man_viewer_list {struct man_viewer_list* next; } ;


 int FUNC_0 (struct man_viewer_list*,char const*,char const*) ;
 struct man_viewer_list* VAR_0 ;

__attribute__((used)) static void FUNC_1(const char *VAR_1)
{
 struct man_viewer_list **VAR_2 = &VAR_0;

 while (*VAR_2)
  VAR_2 = &((*VAR_2)->next);
 FUNC_0(*VAR_2, VAR_1, VAR_1);
}
