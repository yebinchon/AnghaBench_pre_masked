
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
struct dj_workitem {int dummy; } ;
struct dj_receiver_dev {int type; struct hid_device* hidpp; struct hid_device* mouse; struct hid_device* keyboard; int last_query; int list; int kref; int notif_fifo; int lock; int work; } ;
typedef enum recvr_type { ____Placeholder_recvr_type } recvr_type ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 struct dj_receiver_dev* FUNC_1 (struct hid_device*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct hid_device*,struct dj_receiver_dev*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct dj_receiver_dev*) ;
 int FUNC_5 (int *) ;
 struct dj_receiver_dev* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct dj_receiver_dev *FUNC_11(struct hid_device *VAR_8,
         enum recvr_type VAR_9,
         unsigned int VAR_10,
         bool VAR_11)
{
 struct dj_receiver_dev *VAR_12;

 FUNC_8(&VAR_6);

 VAR_12 = FUNC_1(VAR_8, VAR_9);
 if (!VAR_12) {
  VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_1);
  if (!VAR_12)
   goto out;

  FUNC_0(&VAR_12->work, VAR_4);
  FUNC_10(&VAR_12->lock);
  if (FUNC_3(&VAR_12->notif_fifo,
       VAR_0 * sizeof(struct dj_workitem),
       VAR_1)) {
   FUNC_4(VAR_12);
   VAR_12 = ((void*)0);
   goto out;
  }
  FUNC_5(&VAR_12->kref);
  FUNC_7(&VAR_12->list, &VAR_5);
  VAR_12->last_query = VAR_7;
  VAR_12->type = VAR_9;
 }

 if (VAR_10 == VAR_2)
  VAR_12->keyboard = VAR_8;
 if (VAR_10 == VAR_3)
  VAR_12->mouse = VAR_8;
 if (VAR_11)
  VAR_12->hidpp = VAR_8;

 FUNC_2(VAR_8, VAR_12);
out:
 FUNC_9(&VAR_6);
 return VAR_12;
}
