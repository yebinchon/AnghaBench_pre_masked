
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct soc15_reg_golden {size_t hwip; size_t instance; size_t segment; int reg; int and_mask; int or_mask; } ;
struct amdgpu_device {int*** reg_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_4(struct amdgpu_device *VAR_5,
          const struct soc15_reg_golden *VAR_6,
          const u32 VAR_7)
{
 const struct soc15_reg_golden *VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_7; ++VAR_11) {
  VAR_8 = &VAR_6[VAR_11];
  VAR_10 = VAR_5->reg_offset[VAR_8->hwip][VAR_8->instance][VAR_8->segment] + VAR_8->reg;

  if (VAR_8->and_mask == 0xffffffff) {
   VAR_9 = VAR_8->or_mask;
  } else {
   VAR_9 = FUNC_0(VAR_10);
   VAR_9 &= ~(VAR_8->and_mask);
   VAR_9 |= (VAR_8->or_mask & VAR_8->and_mask);
  }

  if (VAR_10 == FUNC_1(VAR_0, 0, VAR_1) ||
   VAR_10 == FUNC_1(VAR_0, 0, VAR_2) ||
   VAR_10 == FUNC_1(VAR_0, 0, VAR_3) ||
   VAR_10 == FUNC_1(VAR_0, 0, VAR_4))
   FUNC_3(VAR_10, VAR_9);
  else
   FUNC_2(VAR_10, VAR_9);

 }

}
