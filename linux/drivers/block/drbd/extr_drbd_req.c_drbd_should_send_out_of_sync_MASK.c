
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union drbd_dev_state {scalar_t__ conn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(union drbd_dev_state VAR_2)
{
 return VAR_2.conn == VAR_0 || VAR_2.conn == VAR_1;


}
