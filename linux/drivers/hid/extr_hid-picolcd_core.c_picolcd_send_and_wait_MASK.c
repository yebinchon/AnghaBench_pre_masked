
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct picolcd_pending {int ready; scalar_t__ raw_size; int * in_report; struct hid_report* out_report; } ;
struct picolcd_data {int status; int mutex; int lock; struct picolcd_pending* pending; int hdev; } ;
struct hid_report {int maxfield; TYPE_1__** field; } ;
struct hid_device {int dummy; } ;
struct TYPE_2__ {int report_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct picolcd_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int ,struct hid_report*,int ) ;
 int FUNC_2 (TYPE_1__*,int,int const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct picolcd_pending*) ;
 struct picolcd_pending* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct hid_report* FUNC_8 (int,struct hid_device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,int) ;

struct picolcd_pending *FUNC_12(struct hid_device *VAR_4,
  int VAR_5, const u8 *VAR_6, int VAR_7)
{
 struct picolcd_data *VAR_8 = FUNC_0(VAR_4);
 struct picolcd_pending *VAR_9;
 struct hid_report *VAR_10 = FUNC_8(VAR_5, VAR_4);
 unsigned long VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (!VAR_10 || !VAR_8)
  return ((void*)0);
 if (VAR_8->status & VAR_3)
  return ((void*)0);
 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 FUNC_3(&VAR_9->ready);
 VAR_9->out_report = VAR_10;
 VAR_9->in_report = ((void*)0);
 VAR_9->raw_size = 0;

 FUNC_6(&VAR_8->mutex);
 FUNC_9(&VAR_8->lock, VAR_11);
 for (VAR_12 = VAR_14 = 0; VAR_12 < VAR_10->maxfield; VAR_12++)
  for (VAR_13 = 0; VAR_13 < VAR_10->field[VAR_12]->report_count; VAR_13++) {
   FUNC_2(VAR_10->field[VAR_12], VAR_13, VAR_14 < VAR_7 ? VAR_6[VAR_14] : 0);
   VAR_14++;
  }
 if (VAR_8->status & VAR_3) {
  FUNC_4(VAR_9);
  VAR_9 = ((void*)0);
 } else {
  VAR_8->pending = VAR_9;
  FUNC_1(VAR_8->hdev, VAR_10, VAR_1);
  FUNC_10(&VAR_8->lock, VAR_11);
  FUNC_11(&VAR_9->ready, VAR_2*2);
  FUNC_9(&VAR_8->lock, VAR_11);
  VAR_8->pending = ((void*)0);
 }
 FUNC_10(&VAR_8->lock, VAR_11);
 FUNC_7(&VAR_8->mutex);
 return VAR_9;
}
