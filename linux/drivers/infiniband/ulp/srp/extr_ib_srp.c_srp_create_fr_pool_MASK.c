
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_fr_pool {int size; int max_page_list_len; int free_list; struct srp_fr_desc* desc; int lock; } ;
struct srp_fr_desc {int entry; struct ib_mr* mr; } ;
struct ib_pd {int dummy; } ;
struct ib_mr {int dummy; } ;
struct TYPE_2__ {int device_cap_flags; } ;
struct ib_device {int dev; TYPE_1__ attrs; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct srp_fr_pool* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ib_mr*) ;
 int FUNC_3 (struct ib_mr*) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 struct ib_mr* FUNC_5 (struct ib_pd*,int,int) ;
 struct srp_fr_pool* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct srp_fr_pool*) ;
 int FUNC_11 (struct srp_fr_pool*,int ,int) ;

__attribute__((used)) static struct srp_fr_pool *FUNC_12(struct ib_device *VAR_7,
           struct ib_pd *VAR_8, int VAR_9,
           int VAR_10)
{
 struct srp_fr_pool *VAR_11;
 struct srp_fr_desc *VAR_12;
 struct ib_mr *VAR_13;
 int VAR_14, VAR_15 = -VAR_0;
 enum ib_mr_type VAR_16;

 if (VAR_9 <= 0)
  goto err;
 VAR_15 = -VAR_1;
 VAR_11 = FUNC_6(FUNC_11(VAR_11, VAR_6, VAR_9), VAR_2);
 if (!VAR_11)
  goto err;
 VAR_11->size = VAR_9;
 VAR_11->max_page_list_len = VAR_10;
 FUNC_9(&VAR_11->lock);
 FUNC_1(&VAR_11->free_list);

 if (VAR_7->attrs.device_cap_flags & VAR_3)
  VAR_16 = VAR_5;
 else
  VAR_16 = VAR_4;

 for (VAR_14 = 0, VAR_12 = &VAR_11->desc[0]; VAR_14 < VAR_11->size; VAR_14++, VAR_12++) {
  VAR_13 = FUNC_5(VAR_8, VAR_16, VAR_10);
  if (FUNC_2(VAR_13)) {
   VAR_15 = FUNC_3(VAR_13);
   if (VAR_15 == -VAR_1)
    FUNC_8("%s: ib_alloc_mr() failed. Try to reduce max_cmd_per_lun, max_sect or ch_count\n",
     FUNC_4(&VAR_7->dev));
   goto destroy_pool;
  }
  VAR_12->mr = VAR_13;
  FUNC_7(&VAR_12->entry, &VAR_11->free_list);
 }

out:
 return VAR_11;

destroy_pool:
 FUNC_10(VAR_11);

err:
 VAR_11 = FUNC_0(VAR_15);
 goto out;
}
