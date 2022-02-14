
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__** devices; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {int * id; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int,int ,int) ;

__attribute__((used)) static int FUNC_3(ide_hwif_t *VAR_4, int VAR_5)
{
 ide_drive_t *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1, VAR_5);
  if (VAR_6 == ((void*)0))
   goto out_nomem;
  VAR_6->id = FUNC_2(VAR_3, VAR_1, VAR_5);
  if (VAR_6->id == ((void*)0))
   goto out_free_drive;

  VAR_4->devices[VAR_7] = VAR_6;
 }
 return 0;

out_free_drive:
 FUNC_1(VAR_6);
out_nomem:
 FUNC_0(VAR_4);
 return -VAR_0;
}
