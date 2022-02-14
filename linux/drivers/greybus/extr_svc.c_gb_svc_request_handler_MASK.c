
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_svc {int dev; int state; } ;
struct gb_operation {int type; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_0 (int *,char*,int,...) ;
 struct gb_svc* FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct gb_operation*) ;
 int FUNC_3 (struct gb_operation*) ;
 int FUNC_4 (struct gb_operation*) ;
 int FUNC_5 (struct gb_operation*) ;
 int FUNC_6 (struct gb_operation*) ;
 int FUNC_7 (struct gb_operation*) ;
 int FUNC_8 (struct gb_operation*) ;

__attribute__((used)) static int FUNC_9(struct gb_operation *VAR_4)
{
 struct gb_connection *VAR_5 = VAR_4->connection;
 struct gb_svc *VAR_6 = FUNC_1(VAR_5);
 u8 VAR_7 = VAR_4->type;
 int VAR_8 = 0;
 switch (VAR_7) {
 case 129:
  if (VAR_6->state != VAR_2)
   VAR_8 = -VAR_0;
  break;
 case 128:
  if (VAR_6->state != VAR_1)
   VAR_8 = -VAR_0;
  break;
 default:
  if (VAR_6->state != VAR_3)
   VAR_8 = -VAR_0;
  break;
 }

 if (VAR_8) {
  FUNC_0(&VAR_6->dev, "unexpected request 0x%02x received (state %u)\n",
    VAR_7, VAR_6->state);
  return VAR_8;
 }

 switch (VAR_7) {
 case 129:
  VAR_8 = FUNC_8(VAR_4);
  if (!VAR_8)
   VAR_6->state = VAR_1;
  return VAR_8;
 case 128:
  VAR_8 = FUNC_2(VAR_4);
  if (!VAR_8)
   VAR_6->state = VAR_3;
  return VAR_8;
 case 132:
  return FUNC_5(VAR_4);
 case 131:
  return FUNC_6(VAR_4);
 case 130:
  return FUNC_7(VAR_4);
 case 134:
  return FUNC_3(VAR_4);
 case 133:
  return FUNC_4(VAR_4);
 default:
  FUNC_0(&VAR_6->dev, "unsupported request 0x%02x\n", VAR_7);
  return -VAR_0;
 }
}
