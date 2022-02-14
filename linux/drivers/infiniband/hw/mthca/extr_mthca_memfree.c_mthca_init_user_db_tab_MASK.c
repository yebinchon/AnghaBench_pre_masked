
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mthca_user_db_table {TYPE_1__* page; int mutex; } ;
struct TYPE_4__ {int uarc_size; } ;
struct mthca_dev {TYPE_2__ uar_table; } ;
struct TYPE_3__ {int mem; scalar_t__ uvirt; scalar_t__ refcount; } ;


 int VAR_0 ;
 struct mthca_user_db_table* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mthca_user_db_table* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mthca_dev*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct mthca_user_db_table*,int ,int) ;

struct mthca_user_db_table *FUNC_6(struct mthca_dev *VAR_4)
{
 struct mthca_user_db_table *VAR_5;
 int VAR_6;
 int VAR_7;

 if (!FUNC_2(VAR_4))
  return ((void*)0);

 VAR_6 = VAR_4->uar_table.uarc_size / VAR_2;
 VAR_5 = FUNC_1(FUNC_5(VAR_5, VAR_3, VAR_6), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_5->mutex);
 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
  VAR_5->page[VAR_7].refcount = 0;
  VAR_5->page[VAR_7].uvirt = 0;
  FUNC_4(&VAR_5->page[VAR_7].mem, 1);
 }

 return VAR_5;
}
