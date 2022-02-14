
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ uint8_t ;
struct vm_pagequeue {int dummy; } ;
struct vm_batchqueue {int bq_cnt; TYPE_1__** bq_pa; } ;
struct TYPE_3__ {scalar_t__ queue; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct vm_batchqueue*) ;
 int FUNC_2 (struct vm_pagequeue*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct vm_pagequeue *VAR_0, struct vm_batchqueue *VAR_1,
    uint8_t VAR_2)
{
 vm_page_t VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->bq_cnt; VAR_4++) {
  VAR_3 = VAR_1->bq_pa[VAR_4];
  if (FUNC_0(VAR_3->queue != VAR_2))
   continue;
  FUNC_2(VAR_0, VAR_3);
 }
 FUNC_1(VAR_1);
}
