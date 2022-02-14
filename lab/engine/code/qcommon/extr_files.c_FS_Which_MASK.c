
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* dir; TYPE_1__* pack; } ;
typedef TYPE_3__ searchpath_t ;
typedef int qboolean ;
struct TYPE_6__ {int fullpath; } ;
struct TYPE_5__ {int pakFilename; } ;


 int FUNC_0 (char*,char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,TYPE_3__*,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_2(const char *VAR_2, void *VAR_3)
{
 searchpath_t *VAR_4 = VAR_3;

 if(FUNC_1(VAR_2, VAR_4, ((void*)0), VAR_0, VAR_0) > 0)
 {
  if(VAR_4->pack)
  {
   FUNC_0("File \"%s\" found in \"%s\"\n", VAR_2, VAR_4->pack->pakFilename);
   return VAR_1;
  }
  else if(VAR_4->dir)
  {
   FUNC_0( "File \"%s\" found at \"%s\"\n", VAR_2, VAR_4->dir->fullpath);
   return VAR_1;
  }
 }

 return VAR_0;
}
