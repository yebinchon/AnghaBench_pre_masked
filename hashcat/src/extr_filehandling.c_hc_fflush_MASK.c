
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pfp; scalar_t__ is_zip; int gfp; scalar_t__ is_gzip; } ;
typedef TYPE_1__ HCFILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2 (HCFILE *VAR_1)
{
  if (VAR_1 == ((void*)0)) return;

  if (VAR_1->is_gzip)
  {
    FUNC_1 (VAR_1->gfp, VAR_0);
  }
  else if (VAR_1->is_zip)
  {
  }
  else
  {
    FUNC_0 (VAR_1->pfp);
  }
}
