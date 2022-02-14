
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_5__ {int history_len; } ;
struct TYPE_6__ {TYPE_1__ param; scalar_t__* powers; } ;
struct TYPE_7__ {TYPE_2__ pid; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 scalar_t__* VAR_12 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void)
{
 unsigned int VAR_13 = VAR_7;
 unsigned int VAR_14;
 s32 VAR_15;
 int VAR_16;

 if (!VAR_11) {
  FUNC_4("pm121: creating control loops !\n");
  for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
   FUNC_2(VAR_16);

  FUNC_1();
  VAR_11 = 1;
 }


 if (VAR_10 && --VAR_10)
  return;


 VAR_15 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_6->pid.param.history_len; VAR_16++)
  VAR_15 += VAR_6->pid.powers[VAR_16];

 VAR_4 = VAR_15 / VAR_6->pid.param.history_len;


 VAR_7 = 0;
 for (VAR_16 = 0 ; VAR_16 < VAR_3; VAR_16++) {
  if (VAR_12[VAR_16])
   FUNC_3(VAR_16);
 }

 if (VAR_6)
  FUNC_0(VAR_6);

 VAR_9 = 0;
 VAR_14 = VAR_7 & ~VAR_13;




 if (VAR_7 && !VAR_13) {
  for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
   if (VAR_5[VAR_16])
    FUNC_6(VAR_5[VAR_16]);
  }
 }




 if (!VAR_7 && VAR_13) {
  if (VAR_5[VAR_0])
   FUNC_7(VAR_5[VAR_0]);
  VAR_9 = 1;
 }




 if (VAR_14 & VAR_1) {
  FUNC_8();
  VAR_10 = 2;
  VAR_8 = 1;
 }







 if (!VAR_7 && VAR_8) {
  FUNC_5();
  VAR_8 = 0;
 }
}
