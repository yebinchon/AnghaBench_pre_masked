
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vb2_buffer {int vb2_queue; } ;
struct f54_data {int status_mutex; int data_mutex; int report_size; int report_data; TYPE_1__* fn; int cmd_done; scalar_t__ is_busy; int input; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;
typedef enum rmi_f54_report_type { ____Placeholder_rmi_f54_report_type } rmi_f54_report_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct f54_data*) ;
 int FUNC_6 (struct f54_data*,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (struct vb2_buffer*,int) ;
 struct f54_data* FUNC_9 (int ) ;
 int * FUNC_10 (struct vb2_buffer*,int ) ;
 int FUNC_11 (struct vb2_buffer*,int ,int ) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void FUNC_13(struct vb2_buffer *VAR_3)
{
 struct f54_data *VAR_4 = FUNC_9(VAR_3->vb2_queue);
 u16 *VAR_5;
 enum vb2_buffer_state VAR_6;
 enum rmi_f54_report_type VAR_7;
 int VAR_8;

 FUNC_3(&VAR_4->status_mutex);

 VAR_7 = FUNC_6(VAR_4, VAR_4->input);
 if (VAR_7 == VAR_0) {
  VAR_6 = VAR_2;
  goto done;
 }

 if (VAR_4->is_busy) {
  VAR_6 = VAR_2;
  goto done;
 }

 VAR_8 = FUNC_7(VAR_4->fn, VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_4->fn->dev, "Error requesting F54 report\n");
  VAR_6 = VAR_2;
  goto done;
 }


 FUNC_3(&VAR_4->data_mutex);

 while (VAR_4->is_busy) {
  FUNC_4(&VAR_4->data_mutex);
  if (!FUNC_12(&VAR_4->cmd_done,
       FUNC_2(1000))) {
   FUNC_0(&VAR_4->fn->dev, "Timed out\n");
   VAR_6 = VAR_2;
   goto done;
  }
  FUNC_3(&VAR_4->data_mutex);
 }

 VAR_5 = FUNC_10(VAR_3, 0);
 if (!VAR_5) {
  FUNC_0(&VAR_4->fn->dev, "Error acquiring frame ptr\n");
  VAR_6 = VAR_2;
  goto data_done;
 }

 FUNC_1(VAR_5, VAR_4->report_data, VAR_4->report_size);
 FUNC_11(VAR_3, 0, FUNC_5(VAR_4));
 VAR_6 = VAR_1;

data_done:
 FUNC_4(&VAR_4->data_mutex);
done:
 FUNC_8(VAR_3, VAR_6);
 FUNC_4(&VAR_4->status_mutex);
}
