
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bustype; } ;
struct input_dev {TYPE_1__ id; int keybit; int absbit; int evbit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_14 ;

__attribute__((used)) static bool FUNC_5(struct input_dev *VAR_15)
{
 FUNC_1(VAR_14, VAR_13);
 bool VAR_16 = 0;

 FUNC_0(VAR_0 > VAR_13 || VAR_8 > VAR_13);
 FUNC_4(VAR_14, VAR_8);

 FUNC_2(VAR_7, VAR_14);
 FUNC_2(VAR_9, VAR_14);
 FUNC_2(VAR_12, VAR_14);
 if (FUNC_3(VAR_14, VAR_15->evbit, VAR_8))
  VAR_16 = 1;


 FUNC_2(VAR_10, VAR_14);
 if (FUNC_3(VAR_14, VAR_15->evbit, VAR_8))
  VAR_16 = 1;


 FUNC_2(VAR_11, VAR_14);
 if (FUNC_3(VAR_14, VAR_15->evbit, VAR_8))
  VAR_16 = 1;

 if (!VAR_16)
  return 0;

 FUNC_4(VAR_14, VAR_0);
 FUNC_2(VAR_1, VAR_14);
 FUNC_2(VAR_2, VAR_14);
 if (!FUNC_3(VAR_15->absbit, VAR_14, VAR_0))
  return 0;

 FUNC_4(VAR_14, VAR_13);
 FUNC_2(VAR_3, VAR_14);
 FUNC_2(VAR_5, VAR_14);
 FUNC_2(VAR_4, VAR_14);

 if (!FUNC_3(VAR_15->keybit, VAR_14, VAR_13))
  return 0;





 if (VAR_15->id.bustype == VAR_6)
  return 0;

 return 1;
}
