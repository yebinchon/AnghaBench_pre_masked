
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pvrdma_user_mr {scalar_t__ npages; scalar_t__ max_pages; int * pages; } ;
struct ib_mr {int dummy; } ;


 int VAR_0 ;
 struct pvrdma_user_mr* FUNC_0 (struct ib_mr*) ;

__attribute__((used)) static int FUNC_1(struct ib_mr *VAR_1, u64 VAR_2)
{
 struct pvrdma_user_mr *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->npages == VAR_3->max_pages)
  return -VAR_0;

 VAR_3->pages[VAR_3->npages++] = VAR_2;
 return 0;
}
