
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int id; } ;
struct TYPE_4__ {int dev_index; } ;
struct msi_desc {TYPE_1__ inta; int dev; } ;
struct TYPE_5__ {int hwirq; struct msi_desc* desc; } ;
typedef TYPE_2__ msi_alloc_info_t ;


 int FUNC_0 (int ,int ) ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(msi_alloc_info_t *VAR_0,
         struct msi_desc *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_1(VAR_1->dev);

 VAR_0->desc = VAR_1;
 VAR_0->hwirq = FUNC_0(VAR_2->id, VAR_1->inta.dev_index);
}
