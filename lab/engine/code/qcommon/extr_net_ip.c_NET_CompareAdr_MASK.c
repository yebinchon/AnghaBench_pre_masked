
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ port; } ;
typedef TYPE_1__ netadr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__,TYPE_1__) ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_1 (netadr_t VAR_4, netadr_t VAR_5)
{
 if(!FUNC_0(VAR_4, VAR_5))
  return VAR_2;

 if (VAR_4.type == VAR_0 || VAR_4.type == VAR_1)
 {
  if (VAR_4.port == VAR_5.port)
   return VAR_3;
 }
 else
  return VAR_3;

 return VAR_2;
}
