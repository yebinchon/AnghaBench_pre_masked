
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver_state {int dr_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct vio_driver_state *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = (VAR_4->dr_state & VAR_1);
 VAR_6 = (VAR_4->dr_state & VAR_3);

 if (VAR_5 &&
     !(VAR_4->dr_state & VAR_0))
  return 0;

 if (VAR_6 &&
     !(VAR_4->dr_state & VAR_2))
  return 0;

 return 1;
}
