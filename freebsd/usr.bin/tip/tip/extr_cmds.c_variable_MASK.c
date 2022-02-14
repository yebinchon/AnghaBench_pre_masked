
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {int v_access; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int VAR_12 ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (char*) ;
 TYPE_1__* VAR_13 ;

void
FUNC_10(int VAR_14)
{
 char VAR_15[256];

 if (FUNC_4("[set] ", VAR_15, sizeof(VAR_15)))
  return;
 FUNC_9(VAR_15);
 if (VAR_13[VAR_0].v_access&VAR_1) {
  VAR_13[VAR_0].v_access &= ~VAR_1;
  FUNC_2(VAR_12, VAR_10);
 }
 if (VAR_13[VAR_9].v_access&VAR_1) {
  VAR_13[VAR_9].v_access &= ~VAR_1;
  FUNC_6();




  if (VAR_13[VAR_8].v_access&VAR_1)
   VAR_13[VAR_8].v_access &= ~VAR_1;
 }
 if (VAR_13[VAR_8].v_access&VAR_1) {
  VAR_13[VAR_8].v_access &= ~VAR_1;
  if (FUNC_0(FUNC_8(VAR_9)))
   FUNC_6();
 }
 if (VAR_13[VAR_11].v_access&VAR_1) {
  VAR_13[VAR_11].v_access &= ~VAR_1;
  if (FUNC_0(FUNC_8(VAR_11)))
   FUNC_7("on");
  else
   FUNC_7("off");
 }
 if (VAR_13[VAR_4].v_access&VAR_1) {
  VAR_13[VAR_4].v_access &= ~VAR_1;
  VAR_3 = FUNC_0(FUNC_8(VAR_4));
 }
 if (VAR_13[VAR_7].v_access&VAR_1) {
  VAR_13[VAR_7].v_access &= ~VAR_1;
  FUNC_5(VAR_6);
 }
 if (VAR_13[VAR_2].v_access&VAR_1) {
  VAR_13[VAR_2].v_access &= ~VAR_1;
  if (FUNC_0(FUNC_8(VAR_2)))
   FUNC_1("on");
  else
   FUNC_1("off");
 }
 if (VAR_13[VAR_5].v_access&VAR_1) {
  VAR_13[VAR_5].v_access &= ~VAR_1;
  FUNC_3(VAR_6);
 }
}
