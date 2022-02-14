
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm3605 {int als_max; int dev; int aout; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int*) ;

__attribute__((used)) static int FUNC_4(struct cm3605 *VAR_2)
{
 int VAR_3, VAR_4;
 s64 VAR_5;

 VAR_3 = FUNC_3(VAR_2->aout, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_0(VAR_2->dev, "read %d mV from ADC\n", VAR_4);







 if (VAR_4 < 30)
  return 0;
 if (VAR_4 > VAR_0)
  FUNC_1(VAR_2->dev, "device out of range\n");


 VAR_5 = VAR_4 - 30;


 VAR_5 *= VAR_2->als_max;
 VAR_5 = FUNC_2(VAR_5, VAR_1);

 return VAR_5;
}
