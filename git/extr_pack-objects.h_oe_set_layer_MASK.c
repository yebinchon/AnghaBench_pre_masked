
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {unsigned char* layer; struct object_entry* objects; int nr_alloc; } ;
struct object_entry {int dummy; } ;


 int FUNC_0 (unsigned char*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct packing_data *VAR_0,
    struct object_entry *VAR_1,
    unsigned char VAR_2)
{
 if (!VAR_0->layer)
  FUNC_0(VAR_0->layer, VAR_0->nr_alloc);
 VAR_0->layer[VAR_1 - VAR_0->objects] = VAR_2;
}
