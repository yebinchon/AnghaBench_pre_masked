
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pfp; int ufp; scalar_t__ is_zip; int gfp; scalar_t__ is_gzip; } ;
typedef TYPE_1__ HCFILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,int) ;

int FUNC_3 (HCFILE *VAR_0)
{
  int VAR_1 = -1;

  if (VAR_0 == ((void*)0)) return VAR_1;

  if (VAR_0->is_gzip)
  {
    VAR_1 = FUNC_1 (VAR_0->gfp);
  }
  else if (VAR_0->is_zip)
  {
    unsigned char VAR_2 = 0;

    if (FUNC_2 (VAR_0->ufp, &VAR_2, 1) == 1) VAR_1 = (int) VAR_2;
  }
  else
  {
    VAR_1 = FUNC_0 (VAR_0->pfp);
  }

  return VAR_1;
}
