
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int quirks; } ;
struct TYPE_3__ {scalar_t__ fmt; TYPE_2__ cfg; } ;
struct arm_lpae_io_pgtable {TYPE_1__ iop; } ;
typedef int phys_addr_t ;
typedef int arm_lpae_iopte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,TYPE_2__*) ;
 int FUNC_1 (int ,struct arm_lpae_io_pgtable*) ;

__attribute__((used)) static void FUNC_2(struct arm_lpae_io_pgtable *VAR_8,
    phys_addr_t VAR_9, arm_lpae_iopte VAR_10,
    int VAR_11, arm_lpae_iopte *VAR_12)
{
 arm_lpae_iopte VAR_13 = VAR_10;

 if (VAR_8->iop.cfg.quirks & VAR_7)
  VAR_13 |= VAR_2;

 if (VAR_8->iop.fmt != VAR_6 && VAR_11 == VAR_0 - 1)
  VAR_13 |= VAR_5;
 else
  VAR_13 |= VAR_4;

 if (VAR_8->iop.fmt != VAR_6)
  VAR_13 |= VAR_1;
 VAR_13 |= VAR_3;
 VAR_13 |= FUNC_1(VAR_9, VAR_8);

 FUNC_0(VAR_12, VAR_13, &VAR_8->iop.cfg);
}
