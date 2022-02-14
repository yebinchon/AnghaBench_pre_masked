
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int msg; scalar_t__ completed; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (void*,int *,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (void*) ;

int
FUNC_5(void *VAR_4, uint64_t VAR_5, int VAR_6)
{
 int VAR_7;

 do {
  VAR_7 = FUNC_3(VAR_1,
      FUNC_4(VAR_4), VAR_5, VAR_6);
  if (VAR_7 == VAR_0) {
   if (VAR_3[VAR_6].completed) {
    FUNC_1();
    FUNC_2(VAR_4, &VAR_3[VAR_6].msg, VAR_5);
    return (VAR_2);
   }
  }
  FUNC_0(100);
 } while (VAR_7 == VAR_0);

 return (VAR_7);
}
