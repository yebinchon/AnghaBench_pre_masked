
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int new_layout; } ;
struct raid_set {TYPE_1__ md; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct raid_set*) ;
 scalar_t__ FUNC_2 (struct raid_set*) ;

__attribute__((used)) static bool FUNC_3(struct raid_set *VAR_0)
{
 return FUNC_2(VAR_0) ||
        (FUNC_1(VAR_0) && !FUNC_0(VAR_0->md.new_layout));
}
