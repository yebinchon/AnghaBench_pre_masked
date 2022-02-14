
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct opt3001 {void* high_thresh_exp; void* high_thresh_mantissa; int dev; int client; void* low_thresh_exp; void* low_thresh_mantissa; int int_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct opt3001*,int*,int ) ;

__attribute__((used)) static int FUNC_6(struct opt3001 *VAR_13)
{
 int VAR_14;
 u16 VAR_15;

 VAR_14 = FUNC_3(VAR_13->client, VAR_0);
 if (VAR_14 < 0) {
  FUNC_2(VAR_13->dev, "failed to read register %02x\n",
    VAR_0);
  return VAR_14;
 }

 VAR_15 = VAR_14;


 VAR_15 &= ~VAR_8;
 VAR_15 |= VAR_7;


 if (VAR_15 & VAR_1)
  VAR_13->int_time = VAR_10;
 else
  VAR_13->int_time = VAR_11;


 FUNC_5(VAR_13, &VAR_15, VAR_5);


 VAR_15 |= VAR_3;
 VAR_15 &= ~VAR_6;
 VAR_15 &= ~VAR_4;
 VAR_15 &= ~VAR_2;

 VAR_14 = FUNC_4(VAR_13->client, VAR_0,
   VAR_15);
 if (VAR_14 < 0) {
  FUNC_2(VAR_13->dev, "failed to write register %02x\n",
    VAR_0);
  return VAR_14;
 }

 VAR_14 = FUNC_3(VAR_13->client, VAR_12);
 if (VAR_14 < 0) {
  FUNC_2(VAR_13->dev, "failed to read register %02x\n",
    VAR_12);
  return VAR_14;
 }

 VAR_13->low_thresh_mantissa = FUNC_1(VAR_14);
 VAR_13->low_thresh_exp = FUNC_0(VAR_14);

 VAR_14 = FUNC_3(VAR_13->client, VAR_9);
 if (VAR_14 < 0) {
  FUNC_2(VAR_13->dev, "failed to read register %02x\n",
    VAR_9);
  return VAR_14;
 }

 VAR_13->high_thresh_mantissa = FUNC_1(VAR_14);
 VAR_13->high_thresh_exp = FUNC_0(VAR_14);

 return 0;
}
