
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; int dn; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (TYPE_1__*,unsigned int*,unsigned long*,unsigned long*) ;
 int FUNC_2 (TYPE_1__*,unsigned int,unsigned long) ;
 int FUNC_3 (void*) ;

int FUNC_4(ide_drive_t *VAR_0)
{
 int VAR_1;
 unsigned int VAR_2;
 unsigned long VAR_3;
 unsigned long VAR_4;

 FUNC_0("call get_GTF, drive=%s port=%d\n", VAR_0->name, VAR_0->dn);

 VAR_1 = FUNC_1(VAR_0, &VAR_2, &VAR_3, &VAR_4);
 if (VAR_1 < 0) {
  FUNC_0("get_GTF error (%d)\n", VAR_1);
  return VAR_1;
 }

 FUNC_0("call set_taskfiles, drive=%s\n", VAR_0->name);

 VAR_1 = FUNC_2(VAR_0, VAR_2, VAR_3);
 FUNC_3((void *)VAR_4);
 if (VAR_1 < 0) {
  FUNC_0("set_taskfiles error (%d)\n", VAR_1);
 }

 FUNC_0("ret=%d\n", VAR_1);

 return VAR_1;
}
