
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_list {char const* src; } ;
struct exclude_list_group {scalar_t__ nr; struct pattern_list* pl; int alloc; } ;
struct dir_struct {struct exclude_list_group* exclude_list_group; } ;


 int FUNC_0 (struct pattern_list*,scalar_t__,int ) ;
 int FUNC_1 (struct pattern_list*,int ,int) ;

struct pattern_list *FUNC_2(struct dir_struct *VAR_0,
          int VAR_1, const char *VAR_2)
{
 struct pattern_list *VAR_3;
 struct exclude_list_group *VAR_4;

 VAR_4 = &VAR_0->exclude_list_group[VAR_1];
 FUNC_0(VAR_4->pl, VAR_4->nr + 1, VAR_4->alloc);
 VAR_3 = &VAR_4->pl[VAR_4->nr++];
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->src = VAR_2;
 return VAR_3;
}
