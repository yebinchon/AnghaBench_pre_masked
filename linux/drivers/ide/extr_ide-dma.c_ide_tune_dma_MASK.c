
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int host_flags; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_9__ {int dev_flags; int id; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(ide_drive_t *VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_2->hwif;
 u8 VAR_4;

 if (FUNC_1(VAR_2->id) == 0 ||
     (VAR_2->dev_flags & VAR_0))
  return 0;


 if (FUNC_0(VAR_2))
  return 0;

 if (VAR_3->host_flags & VAR_1)
  return FUNC_2(VAR_2);

 VAR_4 = FUNC_3(VAR_2);

 if (!VAR_4)
  return 0;

 if (FUNC_4(VAR_2, VAR_4))
  return 0;

 return 1;
}
