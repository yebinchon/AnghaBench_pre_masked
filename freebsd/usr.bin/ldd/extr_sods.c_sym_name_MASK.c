
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ n_strx; } ;
struct TYPE_4__ {TYPE_1__ n_un; } ;


 int FUNC_0 (int) ;
 char const* VAR_0 ;
 TYPE_2__* VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static const char *
FUNC_1(unsigned long VAR_3)
{
    FUNC_0(VAR_3 < VAR_2);
    if (VAR_1[VAR_3].n_un.n_strx == 0)
 return "";
    return VAR_0 + VAR_1[VAR_3].n_un.n_strx;
}
