
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pi; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 () ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void (*) ()) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
 VAR_11 = 1;

 if (FUNC_2(VAR_12, VAR_0, VAR_9, VAR_16)) {
  FUNC_4(VAR_12->pi);
  if (VAR_15 < VAR_2) {
   VAR_15++;
   FUNC_5(VAR_12->pi, FUNC_8);
   return;
  }
  FUNC_0(VAR_1);
  return;
 }

 while (1) {
  if (FUNC_3(VAR_12, VAR_4, VAR_5 | VAR_6,
       "write block", "data wait") & VAR_6) {
   FUNC_4(VAR_12->pi);
   if (VAR_15 < VAR_2) {
    VAR_15++;
    FUNC_5(VAR_12->pi, FUNC_8);
    return;
   }
   FUNC_0(VAR_1);
   return;
  }
  FUNC_6(VAR_12->pi, VAR_10, 512);
  if (FUNC_1())
   break;
 }
 VAR_13 = 0;
 FUNC_7(VAR_7, VAR_14, VAR_3, VAR_8);
}
