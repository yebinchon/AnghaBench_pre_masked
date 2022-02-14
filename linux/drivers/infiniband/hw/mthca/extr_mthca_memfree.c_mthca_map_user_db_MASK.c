
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct mthca_user_db_table {int mutex; TYPE_2__* page; } ;
struct mthca_uar {int dummy; } ;
struct TYPE_3__ {int uarc_size; } ;
struct mthca_dev {int pdev; TYPE_1__ uar_table; } ;
struct TYPE_4__ {int refcount; int uvirt; int mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int,int,struct page**) ;
 int FUNC_1 (struct mthca_dev*,int ,int ) ;
 int FUNC_2 (struct mthca_dev*) ;
 int FUNC_3 (struct mthca_dev*,struct mthca_uar*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int,int ) ;
 int FUNC_7 (int ,int *,int,int ) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int *) ;
 struct page* FUNC_10 (int *) ;
 int FUNC_11 (int *,struct page*,int ,int) ;

int FUNC_12(struct mthca_dev *VAR_7, struct mthca_uar *VAR_8,
        struct mthca_user_db_table *VAR_9, int VAR_10, u64 VAR_11)
{
 struct page *VAR_12[1];
 int VAR_13 = 0;
 int VAR_14;

 if (!FUNC_2(VAR_7))
  return 0;

 if (VAR_10 < 0 || VAR_10 > VAR_7->uar_table.uarc_size / 8)
  return -VAR_0;

 FUNC_4(&VAR_9->mutex);

 VAR_14 = VAR_10 / VAR_3;

 if ((VAR_9->page[VAR_14].refcount >= VAR_3) ||
     (VAR_9->page[VAR_14].uvirt && VAR_9->page[VAR_14].uvirt != VAR_11) ||
     (VAR_11 & 4095)) {
  VAR_13 = -VAR_0;
  goto out;
 }

 if (VAR_9->page[VAR_14].refcount) {
  ++VAR_9->page[VAR_14].refcount;
  goto out;
 }

 VAR_13 = FUNC_0(VAR_11 & VAR_5, 1,
      VAR_2 | VAR_1, VAR_12);
 if (VAR_13 < 0)
  goto out;

 FUNC_11(&VAR_9->page[VAR_14].mem, VAR_12[0], VAR_4,
   VAR_11 & ~VAR_5);

 VAR_13 = FUNC_6(VAR_7->pdev, &VAR_9->page[VAR_14].mem, 1, VAR_6);
 if (VAR_13 < 0) {
  FUNC_8(VAR_12[0]);
  goto out;
 }

 VAR_13 = FUNC_1(VAR_7, FUNC_9(&VAR_9->page[VAR_14].mem),
     FUNC_3(VAR_7, VAR_8, VAR_14));
 if (VAR_13) {
  FUNC_7(VAR_7->pdev, &VAR_9->page[VAR_14].mem, 1, VAR_6);
  FUNC_8(FUNC_10(&VAR_9->page[VAR_14].mem));
  goto out;
 }

 VAR_9->page[VAR_14].uvirt = VAR_11;
 VAR_9->page[VAR_14].refcount = 1;

out:
 FUNC_5(&VAR_9->mutex);
 return VAR_13;
}
