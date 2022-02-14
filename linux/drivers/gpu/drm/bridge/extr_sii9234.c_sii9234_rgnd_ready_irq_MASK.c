
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii9234 {scalar_t__ state; int dev; } ;
typedef enum sii9234_state { ____Placeholder_sii9234_state } sii9234_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sii9234*,int ) ;
 int FUNC_4 (struct sii9234*,int ,int) ;
 int FUNC_5 (struct sii9234*,int ,int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct sii9234*) ;
 int FUNC_8 (struct sii9234*) ;
 int FUNC_9 (struct sii9234*) ;

__attribute__((used)) static enum sii9234_state FUNC_10(struct sii9234 *VAR_11)
{
 int VAR_12;

 if (VAR_11->state == VAR_6) {
  int VAR_13;

  FUNC_0(VAR_11->dev, "RGND_READY_INT\n");
  FUNC_8(VAR_11);

  VAR_13 = FUNC_9(VAR_11);
  if (VAR_13 < 0) {
   FUNC_1(VAR_11->dev, "sii9234_reset() failed\n");
   return VAR_7;
  }

  return VAR_9;
 }


 if (VAR_11->state != VAR_9)
  return VAR_7;

 VAR_12 = FUNC_3(VAR_11, VAR_3);
 if (FUNC_7(VAR_11))
  return VAR_7;

 if ((VAR_12 & VAR_5) != VAR_4) {
  FUNC_2(VAR_11->dev, "RGND is not 1k\n");
  return VAR_9;
 }
 FUNC_0(VAR_11->dev, "RGND 1K!!\n");
 FUNC_5(VAR_11, VAR_0, ~0, 0x8C);
 FUNC_4(VAR_11, VAR_1, 0x77);
 FUNC_5(VAR_11, VAR_2, ~0, 0x05);
 if (FUNC_7(VAR_11))
  return VAR_7;

 FUNC_6(VAR_10);
 return VAR_8;
}
