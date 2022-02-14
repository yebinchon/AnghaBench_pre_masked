
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ide_tape_obj {int disk; } ;
struct ide_atapi_pc {int dummy; } ;
struct TYPE_6__ {struct ide_tape_obj* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,struct ide_atapi_pc*,int *,int ) ;
 int FUNC_1 (TYPE_1__*,struct ide_atapi_pc*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(ide_drive_t *VAR_1)
{
 struct ide_tape_obj *VAR_2 = VAR_1->driver_data;
 struct ide_atapi_pc VAR_3;
 int VAR_4;

 FUNC_1(VAR_1, &VAR_3, 0);
 VAR_4 = FUNC_0(VAR_1, VAR_2->disk, &VAR_3, ((void*)0), 0);
 if (VAR_4)
  return VAR_4;
 FUNC_2(VAR_1, 60 * 5 * VAR_0);
 return 0;
}
