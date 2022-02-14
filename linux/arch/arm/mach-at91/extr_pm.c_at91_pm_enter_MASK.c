
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int suspend_state_t ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {TYPE_1__ data; } ;


 int VAR_0 ;



 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_6(suspend_state_t VAR_2)
{




 switch (VAR_2) {
 case 130:
 case 128:



  if (VAR_1.data.mode >= VAR_0 &&
      !FUNC_3())
   goto error;

  FUNC_2(VAR_2);

  break;

 case 129:
  FUNC_4();
  break;

 default:
  FUNC_5("AT91: PM - bogus suspend state %d\n", VAR_2);
  goto error;
 }

error:



 return 0;
}
