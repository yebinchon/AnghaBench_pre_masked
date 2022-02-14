
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_entry {scalar_t__ hash; } ;
struct hashmap {int cmpfn_data; int (* cmpfn ) (int ,struct hashmap_entry const*,struct hashmap_entry const*,void const*) ;} ;


 int FUNC_0 (int ,struct hashmap_entry const*,struct hashmap_entry const*,void const*) ;

__attribute__((used)) static inline int FUNC_1(const struct hashmap *VAR_0,
  const struct hashmap_entry *VAR_1, const struct hashmap_entry *VAR_2,
  const void *VAR_3)
{
 return (VAR_1 == VAR_2) ||
        (VAR_1->hash == VAR_2->hash &&
  !VAR_0->cmpfn(VAR_0->cmpfn_data, VAR_1, VAR_2, VAR_3));
}
