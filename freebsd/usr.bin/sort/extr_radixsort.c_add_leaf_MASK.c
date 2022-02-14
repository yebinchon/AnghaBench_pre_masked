
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_list_item {int dummy; } ;
struct sort_level {int leaves_num; int leaves_sz; struct sort_list_item** leaves; } ;


 struct sort_list_item** FUNC_0 (struct sort_list_item**,int) ;

__attribute__((used)) static inline void
FUNC_1(struct sort_level *VAR_0, struct sort_list_item *VAR_1)
{

 if (++(VAR_0->leaves_num) > VAR_0->leaves_sz) {
  VAR_0->leaves_sz = VAR_0->leaves_num + 128;
  VAR_0->leaves = FUNC_0(VAR_0->leaves,
      (sizeof(struct sort_list_item*) * (VAR_0->leaves_sz)));
 }
 VAR_0->leaves[VAR_0->leaves_num - 1] = VAR_1;
}
