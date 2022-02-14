
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev_flags; int * id; } ;
typedef TYPE_1__ ide_drive_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int * FUNC_0 (char const*,char const*) ;

void FUNC_1(ide_drive_t *VAR_3)
{
 const char **VAR_4, *VAR_5 = (char *)&VAR_3->id[VAR_0];

 for (VAR_4 = VAR_2; *VAR_4 != ((void*)0); VAR_4++)
  if (FUNC_0(VAR_5, *VAR_4) != ((void*)0)) {
   VAR_3->dev_flags |= VAR_1;
   return;
  }
}
