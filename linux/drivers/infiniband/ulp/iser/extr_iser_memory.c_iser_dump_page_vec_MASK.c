
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
struct iser_page_vec {int npages; int * pages; TYPE_1__ fake_mr; } ;


 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct iser_page_vec *VAR_0)
{
 int VAR_1;

 FUNC_0("page vec npages %d data length %lld\n",
   VAR_0->npages, VAR_0->fake_mr.length);
 for (VAR_1 = 0; VAR_1 < VAR_0->npages; VAR_1++)
  FUNC_0("vec[%d]: %llx\n", VAR_1, VAR_0->pages[VAR_1]);
}
