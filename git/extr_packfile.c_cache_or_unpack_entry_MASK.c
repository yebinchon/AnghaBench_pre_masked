
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct packed_git {int dummy; } ;
struct delta_base_cache_entry {int type; unsigned long size; int data; } ;
typedef int off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 struct delta_base_cache_entry* FUNC_0 (struct packed_git*,int ) ;
 void* FUNC_1 (struct repository*,struct packed_git*,int ,int*,unsigned long*) ;
 void* FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void *FUNC_3(struct repository *VAR_0, struct packed_git *VAR_1,
       off_t VAR_2, unsigned long *VAR_3,
       enum object_type *VAR_4)
{
 struct delta_base_cache_entry *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_5)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3);

 if (VAR_4)
  *VAR_4 = VAR_5->type;
 if (VAR_3)
  *VAR_3 = VAR_5->size;
 return FUNC_2(VAR_5->data, VAR_5->size);
}
