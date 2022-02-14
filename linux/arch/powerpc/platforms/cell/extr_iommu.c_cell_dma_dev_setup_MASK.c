
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ dma_offset; } ;
struct device {TYPE_1__ archdata; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct device*,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_4)
{
 if (VAR_2) {
  u64 VAR_5 = FUNC_1(VAR_4);

  if (VAR_5 != VAR_0)
   VAR_4->archdata.dma_offset = VAR_5 + VAR_3;
  FUNC_2(VAR_4, FUNC_0(VAR_4));
 } else {
  VAR_4->archdata.dma_offset = VAR_1;
 }
}
