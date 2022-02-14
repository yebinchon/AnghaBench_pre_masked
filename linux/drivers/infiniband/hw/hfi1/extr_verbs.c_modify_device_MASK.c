
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_device_modify {int sys_image_guid; int node_desc; } ;
struct ib_device {int node_desc; } ;
struct hfi1_ibport {int dummy; } ;
struct hfi1_devdata {unsigned int num_pports; TYPE_1__* pport; } ;
struct TYPE_2__ {struct hfi1_ibport ibport_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct hfi1_devdata* FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct hfi1_ibport*) ;
 int FUNC_3 (struct hfi1_ibport*) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ib_device *VAR_5,
    int VAR_6,
    struct ib_device_modify *VAR_7)
{
 struct hfi1_devdata *VAR_8 = FUNC_1(VAR_5);
 unsigned VAR_9;
 int VAR_10;

 if (VAR_6 & ~(VAR_2 |
       VAR_1)) {
  VAR_10 = -VAR_0;
  goto bail;
 }

 if (VAR_6 & VAR_1) {
  FUNC_4(VAR_5->node_desc, VAR_7->node_desc,
         VAR_3);
  for (VAR_9 = 0; VAR_9 < VAR_8->num_pports; VAR_9++) {
   struct hfi1_ibport *VAR_11 = &VAR_8->pport[VAR_9].ibport_data;

   FUNC_2(VAR_11);
  }
 }

 if (VAR_6 & VAR_2) {
  VAR_4 =
   FUNC_0(VAR_7->sys_image_guid);
  for (VAR_9 = 0; VAR_9 < VAR_8->num_pports; VAR_9++) {
   struct hfi1_ibport *VAR_12 = &VAR_8->pport[VAR_9].ibport_data;

   FUNC_3(VAR_12);
  }
 }

 VAR_10 = 0;

bail:
 return VAR_10;
}
