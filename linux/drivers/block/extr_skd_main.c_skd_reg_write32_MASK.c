
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct skd_device {int dbg_level; TYPE_1__* pdev; scalar_t__* mem_map; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct skd_device *VAR_0, u32 VAR_1,
       u32 VAR_2)
{
 FUNC_2(VAR_1, VAR_0->mem_map[1] + VAR_2);
 if (FUNC_1(VAR_0->dbg_level >= 2))
  FUNC_0(&VAR_0->pdev->dev, "offset %x = %x\n", VAR_2, VAR_1);
}
