
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_offset_t ;
struct tte {int tte_data; } ;
struct TYPE_5__ {int tte_list; } ;
struct TYPE_6__ {TYPE_1__ md; } ;


 int FUNC_0 (int ,char*,int ,struct tte*,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,struct tte*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct tte*) ;
 int FUNC_5 (struct tte*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_7 (int *,int ) ;
 struct tte* FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_9(vm_offset_t VAR_6)
{
 struct tte *VAR_7;
 vm_page_t VAR_8;

 FUNC_7(&VAR_5, VAR_1);
 FUNC_2(VAR_3);
 VAR_7 = FUNC_8(VAR_6);
 FUNC_0(VAR_0, "pmap_kremove: va=%#lx tp=%p data=%#lx", VAR_6, VAR_7,
     VAR_7->tte_data);
 if ((VAR_7->tte_data & VAR_2) == 0)
  return;
 VAR_8 = FUNC_1(FUNC_4(VAR_7));
 FUNC_3(&VAR_8->md.tte_list, VAR_7, VAR_4);
 FUNC_6(VAR_8, VAR_6);
 FUNC_5(VAR_7);
}
