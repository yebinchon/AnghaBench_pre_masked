
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sigh; } ;
typedef TYPE_1__ FPU_REG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

int FUNC_3(FPU_REG *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = (FUNC_1(VAR_7) == VAR_2) && (VAR_7->sigh & 0x80000000);



 VAR_8 = VAR_9 && !(VAR_7->sigh & 0x40000000);

 if (!VAR_8) {
  if (!VAR_9) {
   if (VAR_6 & VAR_1) {

    FUNC_2(&VAR_0, VAR_7);
   }
   FUNC_0(VAR_3);
   return (!(VAR_6 & VAR_1) ? VAR_4 :
    0) | VAR_5;
  }
  return VAR_5;
 }

 if (VAR_6 & VAR_1) {

  if (!(VAR_7->sigh & 0x80000000)) {
   FUNC_2(&VAR_0, VAR_7);
  }

  VAR_7->sigh |= 0x40000000;
 }

 FUNC_0(VAR_3);

 return (!(VAR_6 & VAR_1) ? VAR_4 : 0) | VAR_5;
}
