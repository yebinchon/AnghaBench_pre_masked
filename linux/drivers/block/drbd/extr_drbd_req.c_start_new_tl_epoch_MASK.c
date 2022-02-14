
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_connection {scalar_t__ current_tle_writes; int current_tle_nr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drbd_connection*) ;

void FUNC_2(struct drbd_connection *VAR_0)
{

 if (VAR_0->current_tle_writes == 0)
  return;

 VAR_0->current_tle_writes = 0;
 FUNC_0(&VAR_0->current_tle_nr);
 FUNC_1(VAR_0);
}
