
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct g2d_data {int drm_dev; } ;
struct g2d_cmdlist_userptr {struct g2d_cmdlist_userptr* sgt; int list; int out_of_list; int vec; int nents; int sgl; scalar_t__ in_pool; int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct page**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct page** FUNC_6 (int ) ;
 int FUNC_7 (struct g2d_cmdlist_userptr*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct g2d_cmdlist_userptr*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct g2d_data *VAR_1,
     void *VAR_2,
     bool VAR_3)
{
 struct g2d_cmdlist_userptr *VAR_4 = VAR_2;
 struct page **VAR_5;

 if (!VAR_2)
  return;

 if (VAR_3)
  goto out;

 FUNC_1(&VAR_4->refcount);

 if (FUNC_2(&VAR_4->refcount) > 0)
  return;

 if (VAR_4->in_pool)
  return;

out:
 FUNC_3(FUNC_12(VAR_1->drm_dev), VAR_4->sgt->sgl,
   VAR_4->sgt->nents, VAR_0);

 VAR_5 = FUNC_6(VAR_4->vec);
 if (!FUNC_0(VAR_5)) {
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < FUNC_4(VAR_4->vec); VAR_6++)
   FUNC_10(VAR_5[VAR_6]);
 }
 FUNC_9(VAR_4->vec);
 FUNC_5(VAR_4->vec);

 if (!VAR_4->out_of_list)
  FUNC_8(&VAR_4->list);

 FUNC_11(VAR_4->sgt);
 FUNC_7(VAR_4->sgt);
 FUNC_7(VAR_4);
}
