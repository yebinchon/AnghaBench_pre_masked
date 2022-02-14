
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int format; scalar_t__ valid_bank_mask; } ;
struct hv_send_ipi_ex {int vector; TYPE_2__ vp_set; scalar_t__ reserved; } ;
struct cpumask {int dummy; } ;
struct TYPE_3__ {int hints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cpumask const*,int ) ;
 int FUNC_1 (TYPE_2__*,struct cpumask const*) ;
 int FUNC_2 (int ,int ,int,struct hv_send_ipi_ex*,int *) ;
 int VAR_5 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bool FUNC_7(const struct cpumask *VAR_7, int VAR_8)
{
 struct hv_send_ipi_ex **VAR_9;
 struct hv_send_ipi_ex *VAR_10;
 unsigned long VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 1;

 if (!(VAR_6.hints & VAR_3))
  return 0;

 FUNC_4(VAR_11);
 VAR_9 = (struct hv_send_ipi_ex **)FUNC_5(VAR_5);

 VAR_10 = *VAR_9;
 if (FUNC_6(!VAR_10))
  goto ipi_mask_ex_done;

 VAR_10->vector = VAR_8;
 VAR_10->reserved = 0;
 VAR_10->vp_set.valid_bank_mask = 0;

 if (!FUNC_0(VAR_7, VAR_4)) {
  VAR_10->vp_set.format = VAR_2;
  VAR_12 = FUNC_1(&(VAR_10->vp_set), VAR_7);
 }
 if (VAR_12 < 0)
  goto ipi_mask_ex_done;
 if (!VAR_12)
  VAR_10->vp_set.format = VAR_1;

 VAR_13 = FUNC_2(VAR_0, 0, VAR_12,
         VAR_10, ((void*)0));

ipi_mask_ex_done:
 FUNC_3(VAR_11);
 return ((VAR_13 == 0) ? 1 : 0);
}
