
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmp_tdma_chan {int idx; TYPE_1__* desc_arr; scalar_t__ reg_base; } ;
struct TYPE_2__ {scalar_t__ dst_addr; scalar_t__ src_addr; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (scalar_t__) ;

__attribute__((used)) static size_t FUNC_1(struct mmp_tdma_chan *VAR_3)
{
 size_t VAR_4;

 if (VAR_3->idx == 0) {
  VAR_4 = FUNC_0(VAR_3->reg_base + VAR_2);
  VAR_4 -= VAR_3->desc_arr[0].src_addr;
 } else if (VAR_3->idx == 1) {
  VAR_4 = FUNC_0(VAR_3->reg_base + VAR_1);
  VAR_4 -= VAR_3->desc_arr[0].dst_addr;
 } else
  return -VAR_0;

 return VAR_4;
}
