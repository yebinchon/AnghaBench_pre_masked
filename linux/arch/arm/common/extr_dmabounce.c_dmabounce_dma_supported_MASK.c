
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {scalar_t__ dmabounce; } ;
struct device {TYPE_1__ archdata; } ;
struct TYPE_4__ {int (* dma_supported ) (struct device*,int ) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct device*,int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, u64 VAR_2)
{
 if (VAR_1->archdata.dmabounce)
  return 0;

 return VAR_0.dma_supported(VAR_1, VAR_2);
}
