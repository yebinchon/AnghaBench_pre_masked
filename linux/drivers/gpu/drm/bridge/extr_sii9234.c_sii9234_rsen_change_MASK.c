
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii9234 {scalar_t__ state; int dev; } ;
typedef enum sii9234_state { ____Placeholder_sii9234_state } sii9234_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sii9234*) ;
 int FUNC_3 (struct sii9234*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sii9234*) ;
 int FUNC_6 (struct sii9234*,int) ;

__attribute__((used)) static enum sii9234_state FUNC_7(struct sii9234 *VAR_6)
{
 int VAR_7;


 if (VAR_6->state != VAR_3) {
  FUNC_1(VAR_6->dev, "RSEN_HIGH without RGND_1K\n");
  return VAR_2;
 }
 VAR_7 = FUNC_3(VAR_6, VAR_0);
 if (VAR_7 < 0)
  return VAR_2;

 if (VAR_7 & VAR_1) {
  FUNC_0(VAR_6->dev, "MHL cable connected.. RSEN High\n");
  return VAR_4;
 }
 FUNC_0(VAR_6->dev, "RSEN lost\n");







 FUNC_4(VAR_5);
 VAR_7 = FUNC_3(VAR_6, VAR_0);
 if (VAR_7 < 0)
  return VAR_2;
 FUNC_0(VAR_6->dev, "sys_stat: %x\n", VAR_7);

 if (VAR_7 & VAR_1) {
  FUNC_0(VAR_6->dev, "RSEN recovery\n");
  return VAR_4;
 }
 FUNC_0(VAR_6->dev, "RSEN Really LOW\n");

 FUNC_6(VAR_6, 0);
 FUNC_2(VAR_6);
 FUNC_5(VAR_6);

 return VAR_2;
}
