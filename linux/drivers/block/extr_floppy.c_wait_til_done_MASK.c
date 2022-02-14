
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (void (*) ()) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(void (*VAR_10)(void), bool VAR_11)
{
 int VAR_12;

 FUNC_2(VAR_10);

 if (VAR_11)
  FUNC_4(VAR_6, VAR_7 >= 2);
 else
  FUNC_3(VAR_6, VAR_7 >= 2);

 if (VAR_7 < 2) {
  FUNC_0();
  VAR_8 = &VAR_9;
  FUNC_1();
  return -VAR_0;
 }

 if (VAR_2->reset)
  VAR_7 = VAR_3;
 if (VAR_7 == VAR_5)
  VAR_12 = 0;
 else
  VAR_12 = -VAR_1;
 VAR_7 = VAR_4;
 return VAR_12;
}
