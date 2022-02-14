
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct picolcd_data {int lock; TYPE_1__* pending; scalar_t__ input_keys; } ;
struct hid_report {scalar_t__ id; } ;
struct hid_device {int dummy; } ;
struct TYPE_2__ {int raw_size; int ready; struct hid_report* in_report; int raw_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 struct picolcd_data* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*,char*,int,scalar_t__) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct picolcd_data*,struct hid_device*,struct hid_report*,int *,int) ;
 int FUNC_5 (struct picolcd_data*,struct hid_report*,int *,int) ;
 int FUNC_6 (struct picolcd_data*,struct hid_report*,int *,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct hid_device *VAR_2,
  struct hid_report *VAR_3, u8 *VAR_4, int VAR_5)
{
 struct picolcd_data *VAR_6 = FUNC_1(VAR_2);
 unsigned long VAR_7;
 int VAR_8 = 0;

 if (!VAR_6)
  return 1;

 if (VAR_5 > 64) {
  FUNC_2(VAR_2, "invalid size value (%d) for picolcd raw event (%d)\n",
    VAR_5, VAR_3->id);
  return 0;
 }

 if (VAR_3->id == VAR_1) {
  if (VAR_6->input_keys)
   VAR_8 = FUNC_6(VAR_6, VAR_3, VAR_4+1, VAR_5-1);
 } else if (VAR_3->id == VAR_0) {
  VAR_8 = FUNC_5(VAR_6, VAR_3, VAR_4+1, VAR_5-1);
 } else {
  FUNC_7(&VAR_6->lock, VAR_7);




  if (VAR_6->pending) {
   FUNC_3(VAR_6->pending->raw_data, VAR_4+1, VAR_5-1);
   VAR_6->pending->raw_size = VAR_5-1;
   VAR_6->pending->in_report = VAR_3;
   FUNC_0(&VAR_6->pending->ready);
  }
  FUNC_8(&VAR_6->lock, VAR_7);
 }

 FUNC_4(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
 return 1;
}
