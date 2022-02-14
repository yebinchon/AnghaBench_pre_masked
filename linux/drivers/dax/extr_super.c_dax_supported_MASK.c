
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dax_device {TYPE_1__* ops; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int (* dax_supported ) (struct dax_device*,struct block_device*,int,int ,int ) ;} ;


 int FUNC_0 (struct dax_device*) ;
 int FUNC_1 (struct dax_device*,struct block_device*,int,int ,int ) ;

bool FUNC_2(struct dax_device *VAR_0, struct block_device *VAR_1,
  int VAR_2, sector_t VAR_3, sector_t VAR_4)
{
 if (!FUNC_0(VAR_0))
  return 0;

 return VAR_0->ops->dax_supported(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
