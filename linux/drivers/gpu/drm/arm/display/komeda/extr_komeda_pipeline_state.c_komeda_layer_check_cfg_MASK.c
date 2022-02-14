
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ id; } ;
struct komeda_layer {int vsize_in; int hsize_in; TYPE_1__ base; int layer_type; } ;
struct komeda_fb {int dummy; } ;
struct komeda_data_flow_cfg {int in_h; int in_w; int in_y; int in_x; int out_h; int out_w; int out_y; int out_x; int rot; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct komeda_fb*,int ,int ,int ,int ) ;
 int FUNC_3 (struct komeda_fb*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct komeda_layer *VAR_2,
         struct komeda_fb *VAR_3,
         struct komeda_data_flow_cfg *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8;

 if (!FUNC_3(VAR_3, VAR_2->layer_type, VAR_4->rot))
  return -VAR_0;

 if (VAR_2->base.id == VAR_1) {
  VAR_5 = VAR_4->out_x;
  VAR_6 = VAR_4->out_y;
  VAR_7 = VAR_4->out_w;
  VAR_8 = VAR_4->out_h;
 } else {
  VAR_5 = VAR_4->in_x;
  VAR_6 = VAR_4->in_y;
  VAR_7 = VAR_4->in_w;
  VAR_8 = VAR_4->in_h;
 }

 if (FUNC_2(VAR_3, VAR_5, VAR_6, VAR_7, VAR_8))
  return -VAR_0;

 if (!FUNC_1(&VAR_2->hsize_in, VAR_7)) {
  FUNC_0("invalidate src_w %d.\n", VAR_7);
  return -VAR_0;
 }

 if (!FUNC_1(&VAR_2->vsize_in, VAR_8)) {
  FUNC_0("invalidate src_h %d.\n", VAR_8);
  return -VAR_0;
 }

 return 0;
}
