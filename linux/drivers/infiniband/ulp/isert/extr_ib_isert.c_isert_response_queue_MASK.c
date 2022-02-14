
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {int logout_posted; } ;
struct iscsi_conn {struct isert_conn* context; } ;
struct iscsi_cmd {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_2 (struct iscsi_cmd*,struct iscsi_conn*,int) ;
 int FUNC_3 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_4 (struct iscsi_conn*,struct iscsi_cmd*) ;
 int FUNC_5 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_6 (struct iscsi_cmd*,struct iscsi_conn*) ;

__attribute__((used)) static int
FUNC_7(struct iscsi_conn *VAR_1, struct iscsi_cmd *VAR_2, int VAR_3)
{
 struct isert_conn *VAR_4 = VAR_1->context;
 int VAR_5;

 switch (VAR_3) {
 case 133:
  VAR_5 = FUNC_1(VAR_2, VAR_1);
  if (!VAR_5)
   VAR_4->logout_posted = 1;
  break;
 case 132:
  VAR_5 = FUNC_2(VAR_2, VAR_1, 1);
  break;
 case 129:
  VAR_5 = FUNC_6(VAR_2, VAR_1);
  break;
 case 131:
  VAR_5 = FUNC_3(VAR_2, VAR_1);
  break;
 case 128:
  VAR_5 = FUNC_5(VAR_2, VAR_1);
  break;
 case 130:




  VAR_5 = FUNC_4(VAR_1, VAR_2);
  break;
 default:
  FUNC_0("Unknown response state: 0x%02x\n", VAR_3);
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
