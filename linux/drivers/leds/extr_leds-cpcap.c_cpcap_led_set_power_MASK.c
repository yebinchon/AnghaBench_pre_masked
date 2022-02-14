
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_led {int powered; int dev; int vdd; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct cpcap_led *VAR_0, bool VAR_1)
{
 int VAR_2;

 if (VAR_1 == VAR_0->powered)
  return 0;

 if (VAR_1)
  VAR_2 = FUNC_2(VAR_0->vdd);
 else
  VAR_2 = FUNC_1(VAR_0->vdd);

 if (VAR_2) {
  FUNC_0(VAR_0->dev, "regulator failure: %d", VAR_2);
  return VAR_2;
 }

 VAR_0->powered = VAR_1;

 return 0;
}
