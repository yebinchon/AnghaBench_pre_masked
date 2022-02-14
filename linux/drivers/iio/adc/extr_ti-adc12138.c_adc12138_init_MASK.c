
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct adc12138 {int acquisition_time; TYPE_1__* spi; int complete; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct adc12138*,int ,int *,int) ;
 int FUNC_1 (struct adc12138*) ;
 int FUNC_2 (struct adc12138*,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct adc12138 *VAR_8)
{
 int VAR_9;
 int VAR_10;
 u8 VAR_11;
 u8 VAR_12;

 FUNC_5(&VAR_8->complete);

 VAR_9 = FUNC_0(VAR_8, VAR_4, &VAR_12, 1);
 if (VAR_9)
  return VAR_9;


 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_2(VAR_8, FUNC_4(100));

 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10 & VAR_5) {
  FUNC_3(&VAR_8->spi->dev,
   "Auto Cal sequence is still in progress: %#x\n",
   VAR_10);
  return -VAR_7;
 }

 switch (VAR_8->acquisition_time) {
 case 6:
  VAR_11 = VAR_3;
  break;
 case 10:
  VAR_11 = VAR_0;
  break;
 case 18:
  VAR_11 = VAR_1;
  break;
 case 34:
  VAR_11 = VAR_2;
  break;
 default:
  return -VAR_6;
 }

 return FUNC_0(VAR_8, VAR_11, &VAR_12, 1);
}
