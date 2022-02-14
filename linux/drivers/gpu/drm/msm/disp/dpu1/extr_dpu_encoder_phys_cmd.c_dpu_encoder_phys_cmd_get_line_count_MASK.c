
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* get_line_count ) (struct dpu_hw_pingpong*) ;} ;
struct dpu_hw_pingpong {TYPE_1__ ops; } ;
struct dpu_encoder_phys {struct dpu_hw_pingpong* hw_pp; } ;


 int VAR_0 ;
 int FUNC_0 (struct dpu_encoder_phys*) ;
 int FUNC_1 (struct dpu_hw_pingpong*) ;

__attribute__((used)) static int FUNC_2(
  struct dpu_encoder_phys *VAR_1)
{
 struct dpu_hw_pingpong *VAR_2;

 if (!VAR_1 || !VAR_1->hw_pp)
  return -VAR_0;

 if (!FUNC_0(VAR_1))
  return -VAR_0;

 VAR_2 = VAR_1->hw_pp;
 if (!VAR_2->ops.get_line_count)
  return -VAR_0;

 return VAR_2->ops.get_line_count(VAR_2);
}
