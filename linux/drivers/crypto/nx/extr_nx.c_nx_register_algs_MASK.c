
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nx_stats {int dummy; } ;
struct TYPE_4__ {scalar_t__ flags; int status; } ;
struct TYPE_5__ {TYPE_1__ of; int stats; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_24 = -1;

 if (VAR_17.of.flags != VAR_9)
  goto out;

 FUNC_1(&VAR_17.stats, 0, sizeof(struct nx_stats));

 FUNC_0(&VAR_17);

 VAR_17.of.status = VAR_10;

 VAR_24 = FUNC_3(&VAR_18, VAR_0, VAR_5);
 if (VAR_24)
  goto out;

 VAR_24 = FUNC_3(&VAR_13, VAR_0, VAR_2);
 if (VAR_24)
  goto out_unreg_ecb;

 VAR_24 = FUNC_3(&VAR_16, VAR_0, VAR_4);
 if (VAR_24)
  goto out_unreg_cbc;

 VAR_24 = FUNC_2(&VAR_20, VAR_0, VAR_6);
 if (VAR_24)
  goto out_unreg_ctr3686;

 VAR_24 = FUNC_2(&VAR_19, VAR_0, VAR_6);
 if (VAR_24)
  goto out_unreg_gcm;

 VAR_24 = FUNC_2(&VAR_15, VAR_0, VAR_3);
 if (VAR_24)
  goto out_unreg_gcm4106;

 VAR_24 = FUNC_2(&VAR_14, VAR_0, VAR_3);
 if (VAR_24)
  goto out_unreg_ccm;

 VAR_24 = FUNC_4(&VAR_22, VAR_1, VAR_8,
          VAR_11);
 if (VAR_24)
  goto out_unreg_ccm4309;

 VAR_24 = FUNC_4(&VAR_23, VAR_1, VAR_8,
          VAR_12);
 if (VAR_24)
  goto out_unreg_s256;

 VAR_24 = FUNC_4(&VAR_21,
          VAR_0, VAR_7, -1);
 if (VAR_24)
  goto out_unreg_s512;

 goto out;

out_unreg_s512:
 FUNC_7(&VAR_23, VAR_1, VAR_8,
       VAR_12);
out_unreg_s256:
 FUNC_7(&VAR_22, VAR_1, VAR_8,
       VAR_11);
out_unreg_ccm4309:
 FUNC_5(&VAR_14, VAR_0, VAR_3);
out_unreg_ccm:
 FUNC_5(&VAR_15, VAR_0, VAR_3);
out_unreg_gcm4106:
 FUNC_5(&VAR_19, VAR_0, VAR_6);
out_unreg_gcm:
 FUNC_5(&VAR_20, VAR_0, VAR_6);
out_unreg_ctr3686:
 FUNC_6(&VAR_16, VAR_0, VAR_4);
out_unreg_cbc:
 FUNC_6(&VAR_13, VAR_0, VAR_2);
out_unreg_ecb:
 FUNC_6(&VAR_18, VAR_0, VAR_5);
out:
 return VAR_24;
}
