
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct opal_msg {int msg_type; } ;
typedef int msg ;


 int FUNC_0 (int ,struct opal_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct opal_msg*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 static struct opal_msg VAR_8;
 uint64_t VAR_9;
 uint32_t VAR_10;

 VAR_9 = FUNC_2(VAR_3, FUNC_4(&VAR_8), sizeof(VAR_8));

 if (VAR_9 != VAR_7)
  return;

 VAR_10 = FUNC_1(VAR_8.msg_type);
 switch (VAR_10) {
 case 133:
  FUNC_0(VAR_0, &VAR_8);
  break;
 case 131:
  FUNC_0(VAR_2, &VAR_8);
  break;
 case 128:
  FUNC_0(VAR_6, &VAR_8);
  break;
 case 130:
  FUNC_0(VAR_4, &VAR_8);
  break;
 case 132:
  FUNC_0(VAR_1, &VAR_8);
  break;
 case 129:
  FUNC_0(VAR_5, &VAR_8);
  break;
 default:
  FUNC_3("Unknown OPAL message type %d\n", VAR_10);
 }
}
