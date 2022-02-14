
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct pvrdma_page_dir {void** pages; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline void *FUNC_0(struct pvrdma_page_dir *VAR_1,
         u64 VAR_2)
{
 return VAR_1->pages[VAR_2 / VAR_0] + (VAR_2 % VAR_0);
}
