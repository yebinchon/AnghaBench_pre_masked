
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union drbd_dev_state {scalar_t__ pdsk; scalar_t__ conn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

bool FUNC_0(union drbd_dev_state VAR_4)
{
 return VAR_4.pdsk == VAR_3 ||
  (VAR_4.pdsk >= VAR_2 &&
   VAR_4.conn >= VAR_1 &&
   VAR_4.conn < VAR_0);



}
