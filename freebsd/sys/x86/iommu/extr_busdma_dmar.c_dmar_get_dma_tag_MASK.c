
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int dma_enabled; } ;
struct dmar_ctx {int ctx_tag; } ;
typedef int device_t ;
typedef int * bus_dma_tag_t ;


 int VAR_0 ;
 struct dmar_unit* FUNC_0 (int ,int ) ;
 struct dmar_ctx* FUNC_1 (struct dmar_unit*,int ,int) ;
 int FUNC_2 (struct dmar_unit*) ;
 int FUNC_3 (struct dmar_unit*) ;

bus_dma_tag_t
FUNC_4(device_t VAR_1, device_t VAR_2)
{
 struct dmar_unit *VAR_3;
 struct dmar_ctx *VAR_4;
 bus_dma_tag_t VAR_5;

 VAR_3 = FUNC_0(VAR_2, VAR_0);

 if (VAR_3 == ((void*)0))
  return (((void*)0));
 if (!VAR_3->dma_enabled)
  return (((void*)0));
 FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 VAR_4 = FUNC_1(VAR_3, VAR_2, 0);
 VAR_5 = VAR_4 == ((void*)0) ? ((void*)0) : (bus_dma_tag_t)&VAR_4->ctx_tag;
 return (VAR_5);
}
