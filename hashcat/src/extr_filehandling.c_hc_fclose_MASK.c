
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_gzip; int is_zip; int fd; int * mode; int * path; int * pfp; int ufp; int gfp; } ;
typedef TYPE_1__ HCFILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5 (HCFILE *VAR_0)
{
  if (VAR_0 == ((void*)0)) return;

  if (VAR_0->is_gzip)
  {
    FUNC_2 (VAR_0->gfp);
  }
  else if (VAR_0->is_zip)
  {
    FUNC_4 (VAR_0->ufp);

    FUNC_3 (VAR_0->ufp);
  }
  else
  {
    FUNC_1 (VAR_0->pfp);
  }

  FUNC_0 (VAR_0->fd);

  VAR_0->fd = -1;
  VAR_0->pfp = ((void*)0);
  VAR_0->is_gzip = 0;
  VAR_0->is_zip = 0;

  VAR_0->path = ((void*)0);
  VAR_0->mode = ((void*)0);
}
