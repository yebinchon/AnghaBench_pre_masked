
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_state {size_t nr; char* p; char** slabs; int count; scalar_t__ slab_nr; int slab_alloc; } ;


 int FUNC_0 (char**,scalar_t__,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (void*,int ,size_t) ;
 char* FUNC_2 (size_t) ;

__attribute__((used)) static inline void *FUNC_3(struct alloc_state *VAR_1, size_t VAR_2)
{
 void *VAR_3;

 if (!VAR_1->nr) {
  VAR_1->nr = VAR_0;
  VAR_1->p = FUNC_2(VAR_0 * VAR_2);

  FUNC_0(VAR_1->slabs, VAR_1->slab_nr + 1, VAR_1->slab_alloc);
  VAR_1->slabs[VAR_1->slab_nr++] = VAR_1->p;
 }
 VAR_1->nr--;
 VAR_1->count++;
 VAR_3 = VAR_1->p;
 VAR_1->p = (char *)VAR_1->p + VAR_2;
 FUNC_1(VAR_3, 0, VAR_2);

 return VAR_3;
}
