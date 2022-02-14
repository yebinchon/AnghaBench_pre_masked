
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
struct sg_table {TYPE_1__* sgl; } ;
struct TYPE_2__ {void* dma_length; void* length; int dma_address; } ;


 int VAR_0 ;
 int FUNC_0 (struct sg_table*) ;
 struct sg_table* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct sg_table*,int,int ) ;

__attribute__((used)) static struct sg_table *FUNC_3(uint64_t VAR_1, uint32_t VAR_2)
{
 struct sg_table *VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);

 if (!VAR_3)
  return ((void*)0);
 if (FUNC_2(VAR_3, 1, VAR_0)) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }
 VAR_3->sgl->dma_address = VAR_1;
 VAR_3->sgl->length = VAR_2;



 return VAR_3;
}
