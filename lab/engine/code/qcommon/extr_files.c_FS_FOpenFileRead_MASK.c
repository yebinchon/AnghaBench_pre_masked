
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pack; struct TYPE_4__* next; } ;
typedef TYPE_1__ searchpath_t ;
typedef int qboolean ;
typedef scalar_t__ fileHandle_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 long FUNC_1 (char const*,TYPE_1__*,scalar_t__*,int,int ) ;
 char* VAR_1 ;
 int FUNC_2 (scalar_t__,char*,char const*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char const*,char*) ;

long FUNC_4(const char *VAR_5, fileHandle_t *VAR_6, qboolean VAR_7)
{
 searchpath_t *VAR_8;
 long VAR_9;
 qboolean VAR_10;

 if(!VAR_2)
  FUNC_0(VAR_0, "Filesystem call made without initialization");

 VAR_10 = !FUNC_3(VAR_5, "autoexec.cfg") || !FUNC_3(VAR_5, VAR_1);
 for(VAR_8 = VAR_2; VAR_8; VAR_8 = VAR_8->next)
 {

  if (VAR_10 && VAR_8->pack)
   continue;

  VAR_9 = FUNC_1(VAR_5, VAR_8, VAR_6, VAR_7, VAR_4);

  if(VAR_6 == ((void*)0))
  {
   if(VAR_9 > 0)
    return VAR_9;
  }
  else
  {
   if(VAR_9 >= 0 && *VAR_6)
    return VAR_9;
  }

 }






 if(VAR_6)
 {
  *VAR_6 = 0;
  return -1;
 }
 else
 {


  return 0;
 }
}
