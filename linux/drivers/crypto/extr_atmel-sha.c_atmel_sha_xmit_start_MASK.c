
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ has_dma; } ;
struct atmel_sha_dev {TYPE_1__ caps; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct atmel_sha_dev*,int ,size_t,int ,size_t,int) ;
 int FUNC_1 (struct atmel_sha_dev*,int ,size_t,int ,size_t,int) ;

__attribute__((used)) static int FUNC_2(struct atmel_sha_dev *VAR_0, dma_addr_t VAR_1,
  size_t VAR_2, dma_addr_t VAR_3, size_t VAR_4, int VAR_5)
{
 if (VAR_0->caps.has_dma)
  return FUNC_0(VAR_0, VAR_1, VAR_2,
    VAR_3, VAR_4, VAR_5);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2,
    VAR_3, VAR_4, VAR_5);
}
