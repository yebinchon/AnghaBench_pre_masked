
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_fr_pool {scalar_t__ size; int all_list; int list; int lock; } ;
struct iser_fr_desc {int all_list; int list; } ;
struct iser_device {int pd; } ;
struct ib_conn {int pi_support; struct iser_fr_pool fr_pool; struct iser_device* device; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct iser_fr_desc*) ;
 int FUNC_2 (struct iser_fr_desc*) ;
 struct iser_fr_desc* FUNC_3 (struct iser_device*,int ,int ,unsigned int) ;
 int FUNC_4 (struct ib_conn*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct ib_conn *VAR_0,
       unsigned VAR_1,
       unsigned int VAR_2)
{
 struct iser_device *VAR_3 = VAR_0->device;
 struct iser_fr_pool *VAR_4 = &VAR_0->fr_pool;
 struct iser_fr_desc *VAR_5;
 int VAR_6, VAR_7;

 FUNC_0(&VAR_4->list);
 FUNC_0(&VAR_4->all_list);
 FUNC_6(&VAR_4->lock);
 VAR_4->size = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = FUNC_3(VAR_3, VAR_3->pd,
      VAR_0->pi_support, VAR_2);
  if (FUNC_1(VAR_5)) {
   VAR_7 = FUNC_2(VAR_5);
   goto err;
  }

  FUNC_5(&VAR_5->list, &VAR_4->list);
  FUNC_5(&VAR_5->all_list, &VAR_4->all_list);
  VAR_4->size++;
 }

 return 0;

err:
 FUNC_4(VAR_0);
 return VAR_7;
}
