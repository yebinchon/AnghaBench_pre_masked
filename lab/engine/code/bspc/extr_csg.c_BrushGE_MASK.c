
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {TYPE_1__* original; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_5__ {scalar_t__ expansionbbox; int contents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

qboolean FUNC_0 (bspbrush_t *VAR_4, bspbrush_t *VAR_5)
{
 if ( (VAR_4->original->contents & VAR_0)
  && !(VAR_5->original->contents & VAR_0) )
 {
  return 0;
 }
 if (VAR_4->original->contents & VAR_2)
 {
  return 1;
 }
 return 0;
}
