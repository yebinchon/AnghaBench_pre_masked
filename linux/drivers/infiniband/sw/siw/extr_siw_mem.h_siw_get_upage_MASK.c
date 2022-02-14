
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct siw_umem {unsigned int fp_addr; unsigned int num_pages; TYPE_1__* page_chunk; } ;
struct page {int dummy; } ;
struct TYPE_2__ {struct page** plist; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline struct page *FUNC_1(struct siw_umem *VAR_3, u64 VAR_4)
{
 unsigned int VAR_5 = (VAR_4 - VAR_3->fp_addr) >> VAR_2,
       VAR_6 = VAR_5 >> VAR_1,
       VAR_7 = VAR_5 & ~VAR_0;

 if (FUNC_0(VAR_5 < VAR_3->num_pages))
  return VAR_3->page_chunk[VAR_6].plist[VAR_7];

 return ((void*)0);
}
