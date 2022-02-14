
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_img_request {int op_type; } ;


 int FUNC_0 () ;





__attribute__((used)) static bool FUNC_1(struct rbd_img_request *VAR_0)
{
 switch (VAR_0->op_type) {
 case 130:
  return 0;
 case 129:
 case 131:
 case 128:
  return 1;
 default:
  FUNC_0();
 }
}
