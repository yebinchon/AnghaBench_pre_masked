
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
struct vm_pagequeue {int dummy; } ;
struct vm_batchqueue {int dummy; } ;
struct scan_state {struct vm_pagequeue* pq; } ;


 int FUNC_0 (struct vm_batchqueue*) ;
 scalar_t__ FUNC_1 (struct vm_batchqueue*,int *) ;
 int * FUNC_2 (struct vm_batchqueue*) ;
 scalar_t__ FUNC_3 (struct scan_state*,int *) ;
 int FUNC_4 (struct vm_pagequeue*,int) ;
 int FUNC_5 (struct vm_pagequeue*) ;
 int FUNC_6 (struct vm_pagequeue*) ;

__attribute__((used)) static void
FUNC_7(struct scan_state *VAR_0, struct vm_batchqueue *VAR_1,
    vm_page_t VAR_2)
{
 struct vm_pagequeue *VAR_3;
 int VAR_4;

 VAR_4 = 0;
 VAR_3 = VAR_0->pq;

 if (VAR_2 != ((void*)0)) {
  if (FUNC_1(VAR_1, VAR_2))
   return;
  FUNC_5(VAR_3);
  VAR_4 += FUNC_3(VAR_0, VAR_2);
 } else
  FUNC_5(VAR_3);
 while ((VAR_2 = FUNC_2(VAR_1)) != ((void*)0))
  VAR_4 += FUNC_3(VAR_0, VAR_2);
 FUNC_4(VAR_3, VAR_4);
 FUNC_6(VAR_3);
 FUNC_0(VAR_1);
}
