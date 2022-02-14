
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_line_mgmt {int bitmap_cache; int bitmap_pool; TYPE_1__** eline_meta; TYPE_1__** sline_meta; TYPE_1__* vsc_list; TYPE_1__* bb_aux; TYPE_1__* bb_template; } ;
struct pblk {struct pblk_line_mgmt l_mg; } ;
struct TYPE_2__ {int buf; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pblk *VAR_1)
{
 struct pblk_line_mgmt *VAR_2 = &VAR_1->l_mg;
 int VAR_3;

 FUNC_0(VAR_2->bb_template);
 FUNC_0(VAR_2->bb_aux);
 FUNC_0(VAR_2->vsc_list);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_2->sline_meta[VAR_3]);
  FUNC_2(VAR_2->eline_meta[VAR_3]->buf);
  FUNC_0(VAR_2->eline_meta[VAR_3]);
 }

 FUNC_3(VAR_2->bitmap_pool);
 FUNC_1(VAR_2->bitmap_cache);
}
