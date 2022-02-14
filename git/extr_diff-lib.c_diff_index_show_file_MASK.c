
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int diffopt; } ;
struct object_id {int dummy; } ;
struct cache_entry {int name; } ;


 int FUNC_0 (int *,char const,unsigned int,struct object_id const*,int,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct rev_info *VAR_0,
     const char *VAR_1,
     const struct cache_entry *VAR_2,
     const struct object_id *VAR_3, int VAR_4,
     unsigned int VAR_5,
     unsigned VAR_6)
{
 FUNC_0(&VAR_0->diffopt, VAR_1[0], VAR_5,
         VAR_3, VAR_4, VAR_2->name, VAR_6);
}
