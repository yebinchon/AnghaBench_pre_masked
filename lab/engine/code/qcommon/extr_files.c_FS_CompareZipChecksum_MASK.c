
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int checksum; } ;
typedef TYPE_1__ pack_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (char const*,char*) ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_2(const char *VAR_4)
{
 pack_t *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_1(VAR_4, "");

 if(!VAR_5)
  return VAR_2;

 VAR_7 = VAR_5->checksum;
 FUNC_0(VAR_5);

 for(VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
 {
  if(VAR_7 == VAR_1[VAR_6])
   return VAR_3;
 }

 return VAR_2;
}
