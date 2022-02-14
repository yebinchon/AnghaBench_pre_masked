
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_reclaim {int * kc; int work; int wq; int kc_throttle; int atime; struct dmz_metadata* metadata; struct dmz_dev* dev; } ;
struct dmz_metadata {int dummy; } ;
struct dmz_dev {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct dmz_reclaim*) ;
 struct dmz_reclaim* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int *,int ) ;

int FUNC_9(struct dmz_dev *VAR_5, struct dmz_metadata *VAR_6,
      struct dmz_reclaim **VAR_7)
{
 struct dmz_reclaim *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_7(sizeof(struct dmz_reclaim), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->dev = VAR_5;
 VAR_8->metadata = VAR_6;
 VAR_8->atime = VAR_4;


 VAR_8->kc = FUNC_4(&VAR_8->kc_throttle);
 if (FUNC_1(VAR_8->kc)) {
  VAR_9 = FUNC_2(VAR_8->kc);
  VAR_8->kc = ((void*)0);
  goto err;
 }


 FUNC_0(&VAR_8->work, VAR_3);
 VAR_8->wq = FUNC_3("dmz_rwq_%s", VAR_2,
       VAR_5->name);
 if (!VAR_8->wq) {
  VAR_9 = -VAR_0;
  goto err;
 }

 *VAR_7 = VAR_8;
 FUNC_8(VAR_8->wq, &VAR_8->work, 0);

 return 0;
err:
 if (VAR_8->kc)
  FUNC_5(VAR_8->kc);
 FUNC_6(VAR_8);

 return VAR_9;
}
