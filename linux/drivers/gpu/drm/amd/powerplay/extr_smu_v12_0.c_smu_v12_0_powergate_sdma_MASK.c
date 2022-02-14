
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_context {TYPE_1__* adev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smu_context*,int ) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_3, bool VAR_4)
{
 if (!(VAR_3->adev->flags & VAR_0))
  return 0;

 if (VAR_4)
  return FUNC_0(VAR_3, VAR_1);
 else
  return FUNC_0(VAR_3, VAR_2);
}
