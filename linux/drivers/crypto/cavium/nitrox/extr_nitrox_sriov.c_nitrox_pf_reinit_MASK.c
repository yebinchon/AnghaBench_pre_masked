
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_device {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct nitrox_device*) ;
 int FUNC_2 (struct nitrox_device*) ;
 int FUNC_3 (struct nitrox_device*) ;
 int FUNC_4 (struct nitrox_device*) ;
 int FUNC_5 (struct nitrox_device*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nitrox_device*) ;

__attribute__((used)) static int FUNC_8(struct nitrox_device *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_1);
  return VAR_2;
 }


 FUNC_3(VAR_1);


 FUNC_4(VAR_1);
 FUNC_5(VAR_1);


 FUNC_0(&VAR_1->state, VAR_0);


 return FUNC_6();
}
