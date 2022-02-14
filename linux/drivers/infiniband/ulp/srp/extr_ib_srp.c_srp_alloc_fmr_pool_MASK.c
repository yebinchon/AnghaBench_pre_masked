
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_target_port {int mr_pool_size; TYPE_1__* srp_host; } ;
struct srp_device {int pd; int mr_page_size; int max_pages_per_mr; } ;
struct ib_fmr_pool_param {int pool_size; int dirty_watermark; int cache; int access; int page_shift; int max_pages_per_fmr; } ;
struct ib_fmr_pool {int dummy; } ;
typedef int fmr_param ;
struct TYPE_2__ {struct srp_device* srp_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_fmr_pool* FUNC_0 (int ,struct ib_fmr_pool_param*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_fmr_pool_param*,int ,int) ;

__attribute__((used)) static struct ib_fmr_pool *FUNC_3(struct srp_target_port *VAR_3)
{
 struct srp_device *VAR_4 = VAR_3->srp_host->srp_dev;
 struct ib_fmr_pool_param VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.pool_size = VAR_3->mr_pool_size;
 VAR_5.dirty_watermark = VAR_5.pool_size / 4;
 VAR_5.cache = 1;
 VAR_5.max_pages_per_fmr = VAR_4->max_pages_per_mr;
 VAR_5.page_shift = FUNC_1(VAR_4->mr_page_size);
 VAR_5.access = (VAR_0 |
           VAR_2 |
           VAR_1);

 return FUNC_0(VAR_4->pd, &VAR_5);
}
