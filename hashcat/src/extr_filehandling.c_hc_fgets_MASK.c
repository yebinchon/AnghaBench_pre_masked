
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pfp; int ufp; scalar_t__ is_zip; int gfp; scalar_t__ is_gzip; } ;
typedef TYPE_1__ HCFILE ;


 char* FUNC_0 (char*,int,int ) ;
 char* FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;

char *FUNC_3 (char *VAR_0, int VAR_1, HCFILE *VAR_2)
{
  char *VAR_3 = ((void*)0);

  if (VAR_2 == ((void*)0)) return VAR_3;

  if (VAR_2->is_gzip)
  {
    VAR_3 = FUNC_1 (VAR_2->gfp, VAR_0, VAR_1);
  }
  else if (VAR_2->is_zip)
  {
    if (FUNC_2 (VAR_2->ufp, VAR_0, VAR_1) > 0) VAR_3 = VAR_0;
  }
  else
  {
    VAR_3 = FUNC_0 (VAR_0, VAR_1, VAR_2->pfp);
  }

  return VAR_3;
}
