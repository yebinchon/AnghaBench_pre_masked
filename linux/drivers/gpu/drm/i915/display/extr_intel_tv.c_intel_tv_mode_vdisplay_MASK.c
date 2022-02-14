
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tv_mode {int nbr_end; scalar_t__ progressive; } ;



__attribute__((used)) static int
FUNC_0(const struct tv_mode *VAR_0)
{
 if (VAR_0->progressive)
  return VAR_0->nbr_end + 1;
 else
  return 2 * (VAR_0->nbr_end + 1);
}
