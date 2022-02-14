
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_device {int sglist_cache; } ;
struct fit_sg_descriptor {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct skd_device*,int ,struct fit_sg_descriptor*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct skd_device *VAR_1,
        struct fit_sg_descriptor *VAR_2,
        dma_addr_t VAR_3)
{
 if (FUNC_0(!VAR_2))
  return;

 FUNC_1(VAR_1, VAR_1->sglist_cache, VAR_2, VAR_3,
       VAR_0);
}
