
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dumpreg {int type; } ;
struct TYPE_3__ {int ah_phyRev; int ah_macRev; int ah_macVersion; } ;
typedef TYPE_1__ HAL_REVS ;


 int VAR_0 ;
 int FUNC_0 (struct dumpreg const*,int ,int ) ;
 int FUNC_1 (struct dumpreg const*,int ) ;

__attribute__((used)) static __inline int
FUNC_2(const struct dumpreg *VAR_1, const HAL_REVS *VAR_2)
{
 if (!FUNC_0(VAR_1, VAR_2->ah_macVersion, VAR_2->ah_macRev))
  return 0;
 if ((VAR_1->type & VAR_0) && !FUNC_1(VAR_1, VAR_2->ah_phyRev))
  return 0;
 return 1;
}
