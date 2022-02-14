
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device_ivars {int xd_otherend_path; int xd_otherend_id; int xd_state; int xd_type; int xd_node; } ;
typedef int device_t ;


 int VAR_0 ;





 struct xenbus_device_ivars* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 struct xenbus_device_ivars *VAR_5 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 132:
  *VAR_4 = (uintptr_t) VAR_5->xd_node;
  return (0);

 case 128:
  *VAR_4 = (uintptr_t) VAR_5->xd_type;
  return (0);

 case 129:
  *VAR_4 = (uintptr_t) VAR_5->xd_state;
  return (0);

 case 131:
  *VAR_4 = (uintptr_t) VAR_5->xd_otherend_id;
  return (0);

 case 130:
  *VAR_4 = (uintptr_t) VAR_5->xd_otherend_path;
  return (0);
 }

 return (VAR_0);
}
