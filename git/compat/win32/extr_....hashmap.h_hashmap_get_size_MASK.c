
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap {unsigned int private_size; scalar_t__ do_count_items; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct hashmap *VAR_0)
{
 if (VAR_0->do_count_items)
  return VAR_0->private_size;

 FUNC_0("hashmap_get_size: size not set");
 return 0;
}
