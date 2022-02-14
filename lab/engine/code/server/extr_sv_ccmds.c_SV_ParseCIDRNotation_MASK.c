
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ netadr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static qboolean FUNC_3(netadr_t *VAR_4, int *VAR_5, char *VAR_6)
{
 char *VAR_7;

 VAR_7 = FUNC_2(VAR_6, '/');
 if(VAR_7)
 {
  *VAR_7 = '\0';
  VAR_7++;
 }

 if(!FUNC_0(VAR_6, VAR_4, VAR_1))
  return VAR_3;

 if(VAR_7)
 {
  *VAR_5 = FUNC_1(VAR_7);

  if(VAR_4->type == VAR_0)
  {
   if(*VAR_5 < 1 || *VAR_5 > 32)
    *VAR_5 = 32;
  }
  else
  {
   if(*VAR_5 < 1 || *VAR_5 > 128)
    *VAR_5 = 128;
  }
 }
 else if(VAR_4->type == VAR_0)
  *VAR_5 = 32;
 else
  *VAR_5 = 128;

 return VAR_2;
}
