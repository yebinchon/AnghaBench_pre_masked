
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid_set {int dummy; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct raid_set*) ;
 int FUNC_1 (struct raid_set*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct raid_set *VAR_1, sector_t VAR_2)
{
 if (!VAR_2)

  FUNC_1(VAR_1, 0);
 else if (VAR_2 == VAR_0)

  FUNC_1(VAR_1, VAR_0);
 else if (FUNC_0(VAR_1) < VAR_2)

  FUNC_1(VAR_1, FUNC_0(VAR_1));
 else
  FUNC_1(VAR_1, VAR_0);
}
