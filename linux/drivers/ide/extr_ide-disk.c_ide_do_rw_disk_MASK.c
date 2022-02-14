
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef int ide_startstop_t ;
struct TYPE_6__ {int (* rw_disk ) (TYPE_2__*,struct request*) ;} ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {int dev_flags; int name; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,struct request*,scalar_t__) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ,char*,unsigned long long,int ) ;
 scalar_t__ FUNC_6 (struct request*) ;
 int FUNC_7 (TYPE_2__*,struct request*) ;

__attribute__((used)) static ide_startstop_t FUNC_8(ide_drive_t *VAR_3, struct request *VAR_4,
          sector_t VAR_5)
{
 ide_hwif_t *VAR_6 = VAR_3->hwif;

 FUNC_0(VAR_3->dev_flags & VAR_0);
 FUNC_0(FUNC_2(VAR_4));

 FUNC_4(FUNC_6(VAR_4) == VAR_2);

 FUNC_5("%s: %sing: block=%llu, sectors=%u\n",
   VAR_3->name, FUNC_6(VAR_4) == VAR_1 ? "read" : "writ",
   (unsigned long long)VAR_5, FUNC_3(VAR_4));

 if (VAR_6->rw_disk)
  VAR_6->rw_disk(VAR_3, VAR_4);

 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
