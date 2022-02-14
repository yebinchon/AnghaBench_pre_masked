
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mr; scalar_t__ mr_valid; int sig_mr; } ;
struct iser_fr_desc {TYPE_2__ rsc; } ;
struct iser_device {struct ib_device* ib_device; } ;
struct ib_pd {int dummy; } ;
struct TYPE_3__ {int device_cap_flags; } ;
struct ib_device {TYPE_1__ attrs; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;


 int VAR_0 ;
 struct iser_fr_desc* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_pd*,int,unsigned int) ;
 int FUNC_4 (struct ib_pd*,unsigned int,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct iser_fr_desc*) ;
 struct iser_fr_desc* FUNC_8 (int,int ) ;

__attribute__((used)) static struct iser_fr_desc *
FUNC_9(struct iser_device *VAR_5,
    struct ib_pd *VAR_6,
    bool VAR_7,
    unsigned int VAR_8)
{
 struct iser_fr_desc *VAR_9;
 struct ib_device *VAR_10 = VAR_5->ib_device;
 enum ib_mr_type VAR_11;
 int VAR_12;

 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 if (VAR_10->attrs.device_cap_flags & VAR_2)
  VAR_11 = VAR_4;
 else
  VAR_11 = VAR_3;

 VAR_9->rsc.mr = FUNC_3(VAR_6, VAR_11, VAR_8);
 if (FUNC_1(VAR_9->rsc.mr)) {
  VAR_12 = FUNC_2(VAR_9->rsc.mr);
  FUNC_6("Failed to allocate ib_fast_reg_mr err=%d\n", VAR_12);
  goto err_alloc_mr;
 }

 if (VAR_7) {
  VAR_9->rsc.sig_mr = FUNC_4(VAR_6, VAR_8, VAR_8);
  if (FUNC_1(VAR_9->rsc.sig_mr)) {
   VAR_12 = FUNC_2(VAR_9->rsc.sig_mr);
   FUNC_6("Failed to allocate sig_mr err=%d\n", VAR_12);
   goto err_alloc_mr_integrity;
  }
 }
 VAR_9->rsc.mr_valid = 0;

 return VAR_9;

err_alloc_mr_integrity:
 FUNC_5(VAR_9->rsc.mr);
err_alloc_mr:
 FUNC_7(VAR_9);

 return FUNC_0(VAR_12);
}
