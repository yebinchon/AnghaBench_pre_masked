
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int mem_type; } ;
struct TYPE_6__ {TYPE_1__ mem; } ;
struct radeon_bo {TYPE_2__ tbo; } ;


 int FUNC_0 (TYPE_2__*,int,int,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct radeon_bo *VAR_0, u32 *VAR_1, bool VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_0->tbo, 1, VAR_2, ((void*)0));
 if (FUNC_3(VAR_3 != 0))
  return VAR_3;
 if (VAR_1)
  *VAR_1 = VAR_0->tbo.mem.mem_type;

 VAR_3 = FUNC_2(&VAR_0->tbo, 1, VAR_2);
 FUNC_1(&VAR_0->tbo);
 return VAR_3;
}
