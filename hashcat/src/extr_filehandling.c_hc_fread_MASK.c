
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pfp; int ufp; scalar_t__ is_zip; int gfp; scalar_t__ is_gzip; } ;
typedef TYPE_1__ HCFILE ;


 size_t FUNC_0 (void*,size_t,size_t,int ) ;
 size_t FUNC_1 (void*,size_t,size_t,int ) ;
 size_t FUNC_2 (int ,void*,unsigned int) ;

size_t FUNC_3 (void *VAR_0, size_t VAR_1, size_t VAR_2, HCFILE *VAR_3)
{
  size_t VAR_4 = -1;

  if (VAR_3 == ((void*)0)) return VAR_4;

  if (VAR_3->is_gzip)
  {
    VAR_4 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3->gfp);
  }
  else if (VAR_3->is_zip)
  {
    unsigned VAR_5 = VAR_1 * VAR_2;

    VAR_4 = FUNC_2 (VAR_3->ufp, VAR_0, VAR_5);
  }
  else
  {
    VAR_4 = FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3->pfp);
  }

  return VAR_4;
}
