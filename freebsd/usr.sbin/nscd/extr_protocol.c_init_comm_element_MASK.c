
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_element {int type; int c_mp_rs_read_response; int c_mp_rs_response; int c_mp_rs_request; int c_mp_ws_write_response; int c_mp_ws_write_request; int c_mp_ws_response; int c_mp_ws_request; int c_transform_response; int c_transform_request; int c_read_response; int c_read_request; int c_write_response; int c_write_request; } ;
typedef enum comm_element_t { ____Placeholder_comm_element_t } comm_element_t ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (void (*) (struct comm_element*,int)) ;
 int FUNC_2 (void (*) (struct comm_element*,int)) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct comm_element*,int ,int) ;

void
FUNC_17(struct comm_element *VAR_0, enum comm_element_t VAR_1)
{

 FUNC_1(FUNC_17);
 FUNC_16(VAR_0, 0, sizeof(struct comm_element));

 switch (VAR_1) {
 case 129:
  FUNC_14(&VAR_0->c_write_request);
  break;
 case 128:
  FUNC_15(&VAR_0->c_write_response);
  break;
 case 134:
  FUNC_10(&VAR_0->c_read_request);
  break;
 case 133:
  FUNC_11(&VAR_0->c_read_response);
  break;
 case 132:
  FUNC_12(&VAR_0->c_transform_request);
  break;
 case 131:
  FUNC_13(&VAR_0->c_transform_response);
  break;
 case 138:
  FUNC_6(&VAR_0->c_mp_ws_request);
  break;
 case 137:
  FUNC_7(&VAR_0->c_mp_ws_response);
  break;
 case 136:
  FUNC_8(
   &VAR_0->c_mp_ws_write_request);
  break;
 case 135:
  FUNC_9(
   &VAR_0->c_mp_ws_write_response);
  break;
 case 140:
  FUNC_4(&VAR_0->c_mp_rs_request);
  break;
 case 139:
  FUNC_5(&VAR_0->c_mp_rs_response);
  break;
 case 141:
  FUNC_3(
   &VAR_0->c_mp_rs_read_response);
  break;
 case 130:
  break;
 default:
  FUNC_0("init_comm_element", "invalid communication element");
  FUNC_2(FUNC_17);
 return;
 }

 VAR_0->type = VAR_1;
 FUNC_2(FUNC_17);
}
