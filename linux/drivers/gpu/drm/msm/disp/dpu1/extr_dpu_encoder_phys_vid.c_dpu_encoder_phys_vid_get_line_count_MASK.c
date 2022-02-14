
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpu_encoder_phys {TYPE_2__* hw_intf; } ;
struct TYPE_3__ {int (* get_line_count ) (TYPE_2__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct dpu_encoder_phys*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(
  struct dpu_encoder_phys *VAR_1)
{
 if (!VAR_1)
  return -VAR_0;

 if (!FUNC_0(VAR_1))
  return -VAR_0;

 if (!VAR_1->hw_intf || !VAR_1->hw_intf->ops.get_line_count)
  return -VAR_0;

 return VAR_1->hw_intf->ops.get_line_count(VAR_1->hw_intf);
}
