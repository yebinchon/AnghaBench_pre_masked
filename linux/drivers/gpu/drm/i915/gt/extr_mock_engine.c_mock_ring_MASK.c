
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ring {unsigned long size; unsigned long effective_size; int pin_count; void* vaddr; int ref; } ;
struct intel_engine_cs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct intel_ring*) ;
 int FUNC_2 (int *) ;
 struct intel_ring* FUNC_3 (int,int ) ;

__attribute__((used)) static struct intel_ring *FUNC_4(struct intel_engine_cs *VAR_2)
{
 const unsigned long VAR_3 = VAR_1 / 2;
 struct intel_ring *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4) + VAR_3, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_2(&VAR_4->ref);
 VAR_4->size = VAR_3;
 VAR_4->effective_size = VAR_3;
 VAR_4->vaddr = (void *)(VAR_4 + 1);
 FUNC_0(&VAR_4->pin_count, 1);

 FUNC_1(VAR_4);

 return VAR_4;
}
