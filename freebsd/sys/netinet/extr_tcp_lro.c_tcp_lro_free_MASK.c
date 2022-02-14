
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lro_entry {int m_head; } ;
struct lro_ctrl {unsigned int lro_mbuf_count; TYPE_1__* lro_mbuf_data; scalar_t__ lro_hashsz; TYPE_1__* lro_hash; int lro_active; int lro_free; } ;
struct TYPE_2__ {int mb; } ;


 struct lro_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lro_entry*) ;

void
FUNC_5(struct lro_ctrl *VAR_1)
{
 struct lro_entry *VAR_2;
 unsigned VAR_3;


 FUNC_1(&VAR_1->lro_free);


 while ((VAR_2 = FUNC_0(&VAR_1->lro_active)) != ((void*)0)) {
  FUNC_4(VAR_2);
  FUNC_3(VAR_2->m_head);
 }


 FUNC_2(VAR_1->lro_hash, VAR_0);
 VAR_1->lro_hash = ((void*)0);
 VAR_1->lro_hashsz = 0;


 for (VAR_3 = 0; VAR_3 != VAR_1->lro_mbuf_count; VAR_3++)
  FUNC_3(VAR_1->lro_mbuf_data[VAR_3].mb);
 VAR_1->lro_mbuf_count = 0;


 FUNC_2(VAR_1->lro_mbuf_data, VAR_0);
 VAR_1->lro_mbuf_data = ((void*)0);
}
