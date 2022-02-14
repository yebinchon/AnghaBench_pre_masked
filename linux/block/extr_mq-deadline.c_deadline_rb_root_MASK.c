
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct rb_root {int dummy; } ;
struct deadline_data {struct rb_root* sort_list; } ;


 size_t FUNC_0 (struct request*) ;

__attribute__((used)) static inline struct rb_root *
FUNC_1(struct deadline_data *VAR_0, struct request *VAR_1)
{
 return &VAR_0->sort_list[FUNC_0(VAR_1)];
}
