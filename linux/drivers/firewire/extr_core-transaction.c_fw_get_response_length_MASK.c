
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_request {int * request_header; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;





 int FUNC_3 (int,char*,int) ;

int FUNC_4(struct fw_request *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;

 VAR_1 = FUNC_2(VAR_0->request_header[0]);

 switch (VAR_1) {
 case 128:
 case 129:
  return 0;

 case 130:
  return 4;

 case 131:
  VAR_3 = FUNC_0(VAR_0->request_header[3]);
  return VAR_3;

 case 132:
  VAR_2 = FUNC_1(VAR_0->request_header[3]);
  VAR_3 = FUNC_0(VAR_0->request_header[3]);
  switch (VAR_2) {
  case 134:
  case 133:
   return VAR_3;
  default:
   return VAR_3 / 2;
  }

 default:
  FUNC_3(1, "wrong tcode %d\n", VAR_1);
  return 0;
 }
}
