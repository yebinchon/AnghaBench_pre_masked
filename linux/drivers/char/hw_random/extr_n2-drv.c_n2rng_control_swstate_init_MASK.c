
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n2rng_unit {void** control; } ;
struct n2rng {int num_units; int hv_state; struct n2rng_unit* units; int wd_timeo; int accum_cycles; int health_check_sec; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct n2rng*,int) ;

__attribute__((used)) static void FUNC_1(struct n2rng *VAR_5)
{
 int VAR_6;

 VAR_5->flags |= VAR_2;

 VAR_5->health_check_sec = VAR_3;
 VAR_5->accum_cycles = VAR_1;
 VAR_5->wd_timeo = VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_units; VAR_6++) {
  struct n2rng_unit *VAR_7 = &VAR_5->units[VAR_6];

  VAR_7->control[0] = FUNC_0(VAR_5, 0);
  VAR_7->control[1] = FUNC_0(VAR_5, 1);
  VAR_7->control[2] = FUNC_0(VAR_5, 2);
  VAR_7->control[3] = FUNC_0(VAR_5, 3);
 }

 VAR_5->hv_state = VAR_0;
}
