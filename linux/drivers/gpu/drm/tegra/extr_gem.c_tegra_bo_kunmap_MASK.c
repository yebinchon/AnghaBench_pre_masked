
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* import_attach; } ;
struct tegra_bo {TYPE_2__ gem; scalar_t__ vaddr; } ;
struct host1x_bo {int dummy; } ;
struct TYPE_3__ {int dmabuf; } ;


 int FUNC_0 (int ,unsigned int,void*) ;
 struct tegra_bo* FUNC_1 (struct host1x_bo*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct host1x_bo *VAR_0, unsigned int VAR_1,
       void *VAR_2)
{
 struct tegra_bo *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->vaddr)
  return;
 else if (VAR_3->gem.import_attach)
  FUNC_0(VAR_3->gem.import_attach->dmabuf, VAR_1, VAR_2);
 else
  FUNC_2(VAR_2);
}
