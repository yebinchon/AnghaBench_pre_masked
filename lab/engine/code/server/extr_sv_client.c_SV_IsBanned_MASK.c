
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ isexception; int subnet; int ip; } ;
typedef TYPE_1__ serverBan_t ;
typedef scalar_t__ qboolean ;
typedef int netadr_t ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static qboolean FUNC_1(netadr_t *VAR_4, qboolean VAR_5)
{
 int VAR_6;
 serverBan_t *VAR_7;

 if(!VAR_5)
 {

  if(FUNC_1(VAR_4, VAR_1))
   return VAR_0;
 }

 for(VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  VAR_7 = &VAR_2[VAR_6];

  if(VAR_7->isexception == VAR_5)
  {
   if(FUNC_0(VAR_7->ip, *VAR_4, VAR_7->subnet))
    return VAR_1;
  }
 }

 return VAR_0;
}
