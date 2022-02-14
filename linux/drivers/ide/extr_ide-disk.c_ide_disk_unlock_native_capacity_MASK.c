
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int dev_flags; int probed_capacity; int * id; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_2)
{
 u16 *VAR_3 = VAR_2->id;
 int VAR_4 = FUNC_1(VAR_3);

 if ((VAR_2->dev_flags & VAR_0) == 0 ||
     FUNC_0(VAR_3) == 0)
  return;





 if (!FUNC_2(VAR_2, VAR_4))
  return;

 if (FUNC_3(VAR_2, VAR_2->probed_capacity, VAR_4))
  VAR_2->dev_flags |= VAR_1;
}
