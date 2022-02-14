
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_target_port {int mr_pool_size; TYPE_1__* srp_host; } ;
struct srp_fr_pool {int dummy; } ;
struct srp_device {int max_pages_per_mr; int pd; int dev; } ;
struct TYPE_2__ {struct srp_device* srp_dev; } ;


 struct srp_fr_pool* FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static struct srp_fr_pool *FUNC_1(struct srp_target_port *VAR_0)
{
 struct srp_device *VAR_1 = VAR_0->srp_host->srp_dev;

 return FUNC_0(VAR_1->dev, VAR_1->pd, VAR_0->mr_pool_size,
      VAR_1->max_pages_per_mr);
}
