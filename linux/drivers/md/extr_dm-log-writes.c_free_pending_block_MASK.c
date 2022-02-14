
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pending_block {int vec_cnt; struct pending_block* data; TYPE_1__* vecs; } ;
struct log_writes_c {int dummy; } ;
struct TYPE_2__ {scalar_t__ bv_page; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pending_block*) ;
 int FUNC_2 (struct log_writes_c*) ;

__attribute__((used)) static void FUNC_3(struct log_writes_c *VAR_0,
          struct pending_block *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->vec_cnt; VAR_2++) {
  if (VAR_1->vecs[VAR_2].bv_page)
   FUNC_0(VAR_1->vecs[VAR_2].bv_page);
 }
 FUNC_1(VAR_1->data);
 FUNC_1(VAR_1);
 FUNC_2(VAR_0);
}
