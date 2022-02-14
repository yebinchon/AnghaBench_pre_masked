
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tblo; int tbhi; int crb; } ;
typedef int DEFINE_MUTEX ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(int VAR_3)
{
 int VAR_4;
 static DEFINE_MUTEX(VAR_5);

 if (VAR_3 > 0) {
  FUNC_0(&VAR_5);
  VAR_4 = VAR_0*VAR_3-1;
  VAR_1.tblo=VAR_4%256;
  VAR_1.tbhi=VAR_4/256;
  VAR_1.crb=0x19;
  FUNC_2(&VAR_2);
  FUNC_1(&VAR_5);
 }
}
