
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int array_sectors; } ;
struct raid_set {TYPE_2__ md; TYPE_1__* ti; } ;
struct gendisk {int dummy; } ;
struct TYPE_3__ {int table; } ;


 struct gendisk* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gendisk*) ;
 int FUNC_3 (struct gendisk*,int ) ;

__attribute__((used)) static void FUNC_4(struct raid_set *VAR_0)
{
 struct gendisk *VAR_1 = FUNC_0(FUNC_1(VAR_0->ti->table));

 FUNC_3(VAR_1, VAR_0->md.array_sectors);
 FUNC_2(VAR_1);
}
