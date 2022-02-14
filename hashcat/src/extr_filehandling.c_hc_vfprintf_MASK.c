
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {int pfp; scalar_t__ is_zip; int gfp; scalar_t__ is_gzip; } ;
typedef TYPE_1__ HCFILE ;


 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (int ,char const*,int ) ;

int FUNC_2 (HCFILE *VAR_0, const char *VAR_1, va_list VAR_2)
{
  int VAR_3 = -1;

  if (VAR_0 == ((void*)0)) return VAR_3;

  if (VAR_0->is_gzip)
  {
    VAR_3 = FUNC_0 (VAR_0->gfp, VAR_1, VAR_2);
  }
  else if (VAR_0->is_zip)
  {
  }
  else
  {
    VAR_3 = FUNC_1 (VAR_0->pfp, VAR_1, VAR_2);
  }

  return VAR_3;
}
