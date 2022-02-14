
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_context {TYPE_1__* adev; } ;
struct TYPE_2__ {int pg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smu_context*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_2, bool VAR_3)
{
 if (!(VAR_2->adev->pg_flags & VAR_0))
  return 0;

 return FUNC_0(VAR_2,
  VAR_1, VAR_3 ? 1 : 0);
}
