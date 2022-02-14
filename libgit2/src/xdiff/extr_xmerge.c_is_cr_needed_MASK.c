
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i2; scalar_t__ i1; } ;
typedef TYPE_1__ xdmerge_t ;
struct TYPE_7__ {int xdf1; int xdf2; } ;
typedef TYPE_2__ xdfenv_t ;


 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_1(xdfenv_t *VAR_0, xdfenv_t *VAR_1, xdmerge_t *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(&VAR_0->xdf2, VAR_2->i1 ? VAR_2->i1 - 1 : 0);
 if (VAR_3)
  VAR_3 = FUNC_0(&VAR_1->xdf2, VAR_2->i2 ? VAR_2->i2 - 1 : 0);

 if (VAR_3)
  VAR_3 = FUNC_0(&VAR_0->xdf1, 0);

 return VAR_3 < 0 ? 0 : VAR_3;
}
