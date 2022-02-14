
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct efa_mmap_entry {scalar_t__ mmap_page; scalar_t__ mmap_flag; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u64 FUNC_0(const struct efa_mmap_entry *VAR_2)
{
 return ((u64)VAR_2->mmap_flag << VAR_0) |
        ((u64)VAR_2->mmap_page << VAR_1);
}
