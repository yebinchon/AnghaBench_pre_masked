
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;
typedef enum drbd_conns { ____Placeholder_drbd_conns } drbd_conns ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static enum drbd_state_rv
FUNC_0(enum drbd_conns VAR_12, enum drbd_conns VAR_13)
{

 if (VAR_12 == VAR_13)
  return VAR_10;


 if (VAR_12 == VAR_2 && VAR_13 == VAR_1)
  return VAR_7;


 if (VAR_12 == VAR_2 && VAR_13 != VAR_5)
  return VAR_9;



 if (VAR_12 < VAR_6 && VAR_13 >= VAR_0)
  return VAR_9;


 if (VAR_12 >= VAR_4 && VAR_12 <= VAR_3 && VAR_13 != VAR_5 && VAR_13 != VAR_1)
  return VAR_8;


 if (VAR_12 == VAR_1 && VAR_13 != VAR_2)
  return VAR_8;

 return VAR_11;
}
