
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ unsentFragments; } ;
struct TYPE_6__ {scalar_t__ netchan_start_queue; TYPE_5__ netchan; } ;
typedef TYPE_1__ client_t ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(client_t *VAR_0)
{
 if(VAR_0->netchan.unsentFragments)
 {
  FUNC_0(&VAR_0->netchan);
  return FUNC_2(VAR_0);
 }
 else if(VAR_0->netchan_start_queue)
 {
  FUNC_1(VAR_0);
  return FUNC_2(VAR_0);
 }

 return -1;
}
