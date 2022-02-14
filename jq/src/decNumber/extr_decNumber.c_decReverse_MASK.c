
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Unit ;



__attribute__((used)) static void FUNC_0(Unit *VAR_0, Unit *VAR_1) {
  Unit VAR_2;
  for (; VAR_0<VAR_1; VAR_0++, VAR_1--) {
    VAR_2=*VAR_0;
    *VAR_0=*VAR_1;
    *VAR_1=VAR_2;
    }
  return;
  }
