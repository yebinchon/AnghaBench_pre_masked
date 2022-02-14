
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* import_attach; } ;
struct tegra_bo {void* vaddr; scalar_t__ pages; TYPE_2__ gem; } ;
struct host1x_bo {int dummy; } ;
struct TYPE_3__ {int dmabuf; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,unsigned int) ;
 struct tegra_bo* FUNC_1 (struct host1x_bo*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (scalar_t__,int,int ,int ) ;

__attribute__((used)) static void *FUNC_4(struct host1x_bo *VAR_3, unsigned int VAR_4)
{
 struct tegra_bo *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->vaddr)
  return VAR_5->vaddr + VAR_4 * VAR_1;
 else if (VAR_5->gem.import_attach)
  return FUNC_0(VAR_5->gem.import_attach->dmabuf, VAR_4);
 else
  return FUNC_3(VAR_5->pages + VAR_4, 1, VAR_2,
       FUNC_2(VAR_0));
}
