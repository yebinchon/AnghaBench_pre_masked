
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int key_size; int inner_size; int outer_size; int spi; int seq_num0; int seq_num1; int seq_num_mask0; int seq_num_mask1; int seq_num_mask2; int seq_num_mask3; int iv0; int iv1; int iv2; int iv3; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct dynamic_sa_ctl {TYPE_2__ sa_contents; } ;



__attribute__((used)) static inline u32
FUNC_0(struct dynamic_sa_ctl *VAR_0)
{
 u32 VAR_1;

 VAR_1 = VAR_0->sa_contents.bf.key_size
  + VAR_0->sa_contents.bf.inner_size
  + VAR_0->sa_contents.bf.outer_size
  + VAR_0->sa_contents.bf.spi
  + VAR_0->sa_contents.bf.seq_num0
  + VAR_0->sa_contents.bf.seq_num1
  + VAR_0->sa_contents.bf.seq_num_mask0
  + VAR_0->sa_contents.bf.seq_num_mask1
  + VAR_0->sa_contents.bf.seq_num_mask2
  + VAR_0->sa_contents.bf.seq_num_mask3
  + VAR_0->sa_contents.bf.iv0
  + VAR_0->sa_contents.bf.iv1
  + VAR_0->sa_contents.bf.iv2
  + VAR_0->sa_contents.bf.iv3;

 return sizeof(struct dynamic_sa_ctl) + VAR_1 * 4;
}
