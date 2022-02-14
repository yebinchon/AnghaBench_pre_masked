
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* import_attach; } ;
struct tegra_bo {void* vaddr; int num_pages; int pages; TYPE_2__ gem; } ;
struct host1x_bo {int dummy; } ;
struct TYPE_3__ {int dmabuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 struct tegra_bo* FUNC_1 (struct host1x_bo*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void *FUNC_4(struct host1x_bo *VAR_2)
{
 struct tegra_bo *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->vaddr)
  return VAR_3->vaddr;
 else if (VAR_3->gem.import_attach)
  return FUNC_0(VAR_3->gem.import_attach->dmabuf);
 else
  return FUNC_3(VAR_3->pages, VAR_3->num_pages, VAR_1,
       FUNC_2(VAR_0));
}
