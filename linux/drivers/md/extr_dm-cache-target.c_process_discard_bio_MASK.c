
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ discard_passdown; } ;
struct cache {TYPE_1__ features; } ;
struct bio {int dummy; } ;
typedef scalar_t__ dm_dblock_t ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct cache*,struct bio*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct cache*,struct bio*) ;
 int FUNC_5 (struct cache*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static bool FUNC_7(struct cache *VAR_0, struct bio *VAR_1)
{
 dm_dblock_t VAR_2, VAR_3;




 FUNC_1(VAR_0, VAR_1, &VAR_2, &VAR_3);
 while (VAR_2 != VAR_3) {
  FUNC_5(VAR_0, VAR_2);
  VAR_2 = FUNC_6(FUNC_2(VAR_2) + 1);
 }

 if (VAR_0->features.discard_passdown) {
  FUNC_4(VAR_0, VAR_1);
  FUNC_3(VAR_1);
 } else
  FUNC_0(VAR_1);

 return 0;
}
