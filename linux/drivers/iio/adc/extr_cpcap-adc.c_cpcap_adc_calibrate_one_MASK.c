
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct cpcap_adc {scalar_t__ vendor; int dev; int reg; } ;
struct TYPE_2__ {short cal_offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct cpcap_adc*,int) ;
 int FUNC_1 (int ,char*,int,short) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct cpcap_adc *VAR_4,
       int VAR_5,
       u16 VAR_6,
       int VAR_7,
       int VAR_8)
{
 unsigned int VAR_9[2];
 unsigned short VAR_10;
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_9[0] = 0;
  VAR_9[1] = 0;
  VAR_10 = 0;
  FUNC_0(VAR_4, VAR_5);
  VAR_12 = FUNC_2(VAR_4->reg, VAR_6,
        &VAR_9[0]);
  if (VAR_12)
   return VAR_12;
  FUNC_0(VAR_4, VAR_5);
  VAR_12 = FUNC_2(VAR_4->reg, VAR_6,
        &VAR_9[1]);
  if (VAR_12)
   return VAR_12;

  if (VAR_9[0] > VAR_9[1])
   VAR_10 =
    VAR_9[0] - VAR_9[1];
  else
   VAR_10 =
    VAR_9[1] - VAR_9[0];

  if (((VAR_9[1] >= VAR_7) &&
       (VAR_9[1] <= VAR_8) &&
       (VAR_10 <= VAR_2)) ||
      (VAR_4->vendor == VAR_1)) {
   VAR_3[VAR_5].cal_offset =
    ((short)VAR_9[1] * -1) + 512;
   FUNC_1(VAR_4->dev, "ch%i calibration complete: %i\n",
    VAR_5, VAR_3[VAR_5].cal_offset);
   break;
  }
  FUNC_3(5000, 10000);
 }

 return 0;
}
