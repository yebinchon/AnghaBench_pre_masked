
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct man_viewer_info_list {struct man_viewer_info_list* next; int info; } ;


 int FUNC_0 (struct man_viewer_info_list*,char const*,char const*,size_t) ;
 struct man_viewer_info_list* VAR_0 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_1,
       size_t VAR_2,
       const char *VAR_3)
{
 struct man_viewer_info_list *VAR_4;
 FUNC_0(VAR_4, VAR_1, VAR_1, VAR_2);
 VAR_4->info = FUNC_1(VAR_3);
 VAR_4->next = VAR_0;
 VAR_0 = VAR_4;
}
