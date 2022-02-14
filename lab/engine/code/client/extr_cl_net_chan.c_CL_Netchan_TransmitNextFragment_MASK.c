
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {scalar_t__ unsentFragments; } ;
typedef TYPE_1__ netchan_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_1(netchan_t *VAR_2)
{
 if(VAR_2->unsentFragments)
 {
  FUNC_0(VAR_2);
  return VAR_1;
 }

 return VAR_0;
}
