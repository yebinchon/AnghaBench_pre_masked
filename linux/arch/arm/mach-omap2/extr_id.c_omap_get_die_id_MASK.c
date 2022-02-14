
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_die_id {void* id_3; void* id_2; void* id_1; void* id_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

void FUNC_4(struct omap_die_id *VAR_8)
{
 if (FUNC_2() || FUNC_3() || FUNC_1()) {
  VAR_8->id_0 = FUNC_0(VAR_4);
  VAR_8->id_1 = FUNC_0(VAR_5);
  VAR_8->id_2 = FUNC_0(VAR_6);
  VAR_8->id_3 = FUNC_0(VAR_7);

  return;
 }
 VAR_8->id_0 = FUNC_0(VAR_0);
 VAR_8->id_1 = FUNC_0(VAR_1);
 VAR_8->id_2 = FUNC_0(VAR_2);
 VAR_8->id_3 = FUNC_0(VAR_3);
}
