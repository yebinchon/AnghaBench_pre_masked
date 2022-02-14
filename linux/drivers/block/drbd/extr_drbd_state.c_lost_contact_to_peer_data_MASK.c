
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum drbd_disk_state { ____Placeholder_drbd_disk_state } drbd_disk_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_0(enum drbd_disk_state VAR_5, enum drbd_disk_state VAR_6)
{
 if ((VAR_5 >= VAR_2 && VAR_5 != VAR_4 && VAR_5 != VAR_3)
 && (VAR_6 < VAR_2 || VAR_6 == VAR_4 || VAR_6 == VAR_3))
  return 1;







 if (VAR_5 == VAR_4
 && (VAR_6 == VAR_0 || VAR_6 == VAR_1 || VAR_6 == VAR_3))
  return 1;

 return 0;
}
