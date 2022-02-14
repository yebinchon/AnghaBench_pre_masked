
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct tte {int tte_data; } ;


 int FUNC_0 (int ,char*,int ,struct tte*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct tte*) ;
 struct tte* FUNC_2 (int ) ;

void
FUNC_3(vm_offset_t VAR_1)
{
 struct tte *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_0(VAR_0, "pmap_kremove_flags: va=%#lx tp=%p data=%#lx", VAR_1, VAR_2,
     VAR_2->tte_data);
 FUNC_1(VAR_2);
}
