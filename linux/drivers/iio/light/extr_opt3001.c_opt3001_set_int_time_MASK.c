
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct opt3001 {int int_time; int client; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct opt3001 *VAR_3, int VAR_4)
{
 int VAR_5;
 u16 VAR_6;

 VAR_5 = FUNC_1(VAR_3->client, VAR_1);
 if (VAR_5 < 0) {
  FUNC_0(VAR_3->dev, "failed to read register %02x\n",
    VAR_1);
  return VAR_5;
 }

 VAR_6 = VAR_5;

 switch (VAR_4) {
 case 128:
  VAR_6 &= ~VAR_2;
  VAR_3->int_time = 128;
  break;
 case 129:
  VAR_6 |= VAR_2;
  VAR_3->int_time = 129;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_2(VAR_3->client, VAR_1,
   VAR_6);
}
