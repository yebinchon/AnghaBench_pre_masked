
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smscore_buffer_t {int offset_in_common; scalar_t__ phys; int * p; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 struct smscore_buffer_t* FUNC_0 (int,int ) ;

__attribute__((used)) static struct
smscore_buffer_t *FUNC_1(u8 *VAR_1, void *VAR_2,
           dma_addr_t VAR_3)
{
 struct smscore_buffer_t *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->p = VAR_1;
 VAR_4->offset_in_common = VAR_1 - (u8 *) VAR_2;
 if (VAR_3)
  VAR_4->phys = VAR_3 + VAR_4->offset_in_common;

 return VAR_4;
}
