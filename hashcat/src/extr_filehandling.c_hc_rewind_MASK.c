
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pfp; int ufp; scalar_t__ is_zip; int gfp; scalar_t__ is_gzip; } ;
typedef TYPE_1__ HCFILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3 (HCFILE *VAR_0)
{
  if (VAR_0 == ((void*)0)) return;

  if (VAR_0->is_gzip)
  {
    FUNC_0 (VAR_0->gfp);
  }
  else if (VAR_0->is_zip)
  {
    FUNC_2 (VAR_0->ufp);
  }
  else
  {
    FUNC_1 (VAR_0->pfp);
  }
}
