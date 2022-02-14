
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu_port {int type; unsigned int id; TYPE_1__* dpcd; TYPE_2__* edid; } ;
struct intel_vgpu {int dummy; } ;
struct TYPE_4__ {int* edid_block; int data_valid; } ;
struct TYPE_3__ {int* data; int data_valid; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (struct intel_vgpu*) ;
 struct intel_vgpu_port* FUNC_2 (struct intel_vgpu*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int*,int ,int ) ;
 int * VAR_8 ;

__attribute__((used)) static int FUNC_6(struct intel_vgpu *VAR_9, int VAR_10,
        int VAR_11, unsigned int VAR_12)
{
 struct intel_vgpu_port *VAR_13 = FUNC_2(VAR_9, VAR_10);

 if (FUNC_0(VAR_12 >= VAR_6))
  return -VAR_3;

 VAR_13->edid = FUNC_4(sizeof(*(VAR_13->edid)), VAR_5);
 if (!VAR_13->edid)
  return -VAR_4;

 VAR_13->dpcd = FUNC_4(sizeof(*(VAR_13->dpcd)), VAR_5);
 if (!VAR_13->dpcd) {
  FUNC_3(VAR_13->edid);
  return -VAR_4;
 }

 FUNC_5(VAR_13->edid->edid_block, VAR_8[VAR_12],
   VAR_2);
 VAR_13->edid->data_valid = 1;

 FUNC_5(VAR_13->dpcd->data, VAR_7, VAR_0);
 VAR_13->dpcd->data_valid = 1;
 VAR_13->dpcd->data[VAR_1] = 0x1;
 VAR_13->type = VAR_11;
 VAR_13->id = VAR_12;

 FUNC_1(VAR_9);

 return 0;
}
