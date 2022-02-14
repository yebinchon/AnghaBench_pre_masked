
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c4iw_ucontext {int mmap_lock; int mmaps; } ;
struct c4iw_mm_entry {int entry; int len; scalar_t__ addr; int key; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ,unsigned long long,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct c4iw_ucontext *VAR_0,
          struct c4iw_mm_entry *VAR_1)
{
 FUNC_2(&VAR_0->mmap_lock);
 FUNC_1("key 0x%x addr 0x%llx len %d\n",
   VAR_1->key, (unsigned long long)VAR_1->addr, VAR_1->len);
 FUNC_0(&VAR_1->entry, &VAR_0->mmaps);
 FUNC_3(&VAR_0->mmap_lock);
}
