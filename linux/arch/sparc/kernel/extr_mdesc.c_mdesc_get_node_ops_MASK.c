
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * mdesc_node_match_f ;
typedef int * mdesc_node_info_rel_f ;
typedef int * mdesc_node_info_get_f ;
struct TYPE_2__ {int * node_match; int * rel_info; int * get_info; int * name; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static void FUNC_1(const char *VAR_1,
          mdesc_node_info_get_f *VAR_2,
          mdesc_node_info_rel_f *VAR_3,
          mdesc_node_match_f *VAR_4)
{
 int VAR_5;

 if (VAR_2)
  *VAR_2 = ((void*)0);

 if (VAR_3)
  *VAR_3 = ((void*)0);

 if (VAR_4)
  *VAR_4 = ((void*)0);

 if (!VAR_1)
  return;

 for (VAR_5 = 0; VAR_0[VAR_5].name != ((void*)0); VAR_5++) {
  if (FUNC_0(VAR_0[VAR_5].name, VAR_1) == 0) {
   if (VAR_2)
    *VAR_2 = VAR_0[VAR_5].get_info;

   if (VAR_3)
    *VAR_3 = VAR_0[VAR_5].rel_info;

   if (VAR_4)
    *VAR_4 = VAR_0[VAR_5].node_match;

   break;
  }
 }
}
