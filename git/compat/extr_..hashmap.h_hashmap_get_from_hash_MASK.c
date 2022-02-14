
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_entry {int dummy; } ;
struct hashmap {int dummy; } ;


 int FUNC_0 (struct hashmap_entry*,unsigned int) ;
 struct hashmap_entry* FUNC_1 (struct hashmap const*,struct hashmap_entry*,void const*) ;

__attribute__((used)) static inline struct hashmap_entry *FUNC_2(
     const struct hashmap *VAR_0,
     unsigned int VAR_1,
     const void *VAR_2)
{
 struct hashmap_entry VAR_3;
 FUNC_0(&VAR_3, VAR_1);
 return FUNC_1(VAR_0, &VAR_3, VAR_2);
}
