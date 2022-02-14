
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_device {int pd; int fmr_pool; } ;
struct ib_fmr_pool_param {int access; int cache; int dirty_watermark; int pool_size; int page_shift; int max_pages_per_fmr; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct sdp_device*,int ) ;
 int FUNC_2 (struct ib_device*,int ) ;
 int FUNC_3 (int ,struct ib_fmr_pool_param*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ib_device*,int *,struct sdp_device*) ;
 struct sdp_device* FUNC_6 (int,int ,int) ;
 int FUNC_7 (struct ib_fmr_pool_param*,int ,int) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_8(struct ib_device *VAR_10)
{
 struct ib_fmr_pool_param VAR_11;
 struct sdp_device *VAR_12;

 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_2, VAR_3 | VAR_4);
 VAR_12->pd = FUNC_2(VAR_10, 0);
 if (FUNC_0(VAR_12->pd))
  goto out_pd;
 FUNC_7(&VAR_11, 0, sizeof VAR_11);
 VAR_11.max_pages_per_fmr = VAR_8;
 VAR_11.page_shift = VAR_5;
 VAR_11.access = (VAR_0 | VAR_1);
 VAR_11.pool_size = VAR_7;
 VAR_11.dirty_watermark = VAR_6;
 VAR_11.cache = 1;
 VAR_12->fmr_pool = FUNC_3(VAR_12->pd, &VAR_11);
 if (FUNC_0(VAR_12->fmr_pool))
  goto out_fmr;
 FUNC_5(VAR_10, &VAR_9, VAR_12);
 return;

out_fmr:
 FUNC_4(VAR_12->pd);
out_pd:
 FUNC_1(VAR_12, VAR_2);
}
