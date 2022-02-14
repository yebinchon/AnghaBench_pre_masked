
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ide_atapi_pc {int* c; int flags; } ;
struct gendisk {int dummy; } ;
struct TYPE_4__ {scalar_t__ media; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ide_atapi_pc*) ;
 int FUNC_1 (TYPE_1__*,struct gendisk*,struct ide_atapi_pc*,int *,int ) ;
 scalar_t__ VAR_2 ;

int FUNC_2(ide_drive_t *VAR_3, struct gendisk *VAR_4, int VAR_5)
{
 struct ide_atapi_pc VAR_6;

 FUNC_0(&VAR_6);
 VAR_6.c[0] = VAR_1;
 VAR_6.c[4] = VAR_5;

 if (VAR_3->media == VAR_2)
  VAR_6.flags |= VAR_0;

 return FUNC_1(VAR_3, VAR_4, &VAR_6, ((void*)0), 0);
}
