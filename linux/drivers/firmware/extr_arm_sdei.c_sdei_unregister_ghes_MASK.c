
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ghes {TYPE_2__* generic; } ;
struct TYPE_3__ {int vector; } ;
struct TYPE_4__ {TYPE_1__ notify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct ghes *VAR_3)
{
 int VAR_4;
 int VAR_5;
 u32 VAR_6 = VAR_3->generic->notify.vector;

 FUNC_1();

 if (!FUNC_0(VAR_0))
  return -VAR_2;





 VAR_5 = FUNC_3(VAR_6);
 if (VAR_5)
  return VAR_5;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  VAR_5 = FUNC_4(VAR_6);
  if (VAR_5 != -VAR_1)
   break;

  FUNC_2();
 }

 return VAR_5;
}
