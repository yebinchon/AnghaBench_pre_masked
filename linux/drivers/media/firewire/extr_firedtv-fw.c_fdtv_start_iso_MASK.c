
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fw_device {int card; int max_speed; } ;
struct firedtv {struct fdtv_ir_context* ir_context; int isochannel; } ;
struct TYPE_3__ {int * pages; } ;
struct fdtv_ir_context {int context; TYPE_1__ buffer; int * pages; scalar_t__ current_packet; scalar_t__ interrupt_packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 struct fw_device* FUNC_2 (struct firedtv*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,struct firedtv*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ,int ) ;
 int VAR_8 ;
 int FUNC_8 (struct fdtv_ir_context*) ;
 struct fdtv_ir_context* FUNC_9 (int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct fdtv_ir_context*,int) ;

int FUNC_12(struct firedtv *VAR_9)
{
 struct fdtv_ir_context *VAR_10;
 struct fw_device *VAR_11 = FUNC_2(VAR_9);
 int VAR_12, VAR_13;

 VAR_10 = FUNC_9(sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->context = FUNC_5(VAR_11->card,
   VAR_3, VAR_9->isochannel,
   VAR_11->max_speed, VAR_5, VAR_8, VAR_9);
 if (FUNC_0(VAR_10->context)) {
  VAR_13 = FUNC_1(VAR_10->context);
  goto fail_free;
 }

 VAR_13 = FUNC_4(&VAR_10->buffer, VAR_11->card,
     VAR_7, VAR_0);
 if (VAR_13)
  goto fail_context_destroy;

 VAR_10->interrupt_packet = 0;
 VAR_10->current_packet = 0;

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
  VAR_10->pages[VAR_12] = FUNC_10(VAR_10->buffer.pages[VAR_12]);

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_13 = FUNC_11(VAR_10, VAR_12);
  if (VAR_13)
   goto fail;
 }

 VAR_13 = FUNC_7(VAR_10->context, -1, 0,
       VAR_2);
 if (VAR_13)
  goto fail;

 VAR_9->ir_context = VAR_10;

 return 0;
fail:
 FUNC_3(&VAR_10->buffer, VAR_11->card);
fail_context_destroy:
 FUNC_6(VAR_10->context);
fail_free:
 FUNC_8(VAR_10);

 return VAR_13;
}
