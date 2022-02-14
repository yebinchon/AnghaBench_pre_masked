
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int setup_cdp; int get_scaler_ver; int setup_scaler; int setup_multirect; int setup_csc; int setup_qos_ctrl; int setup_creq_lut; int setup_danger_safe_lut; int setup_pe; int setup_solidfill; int setup_sourceaddress; int setup_rects; int setup_format; } ;
struct dpu_hw_pipe {TYPE_2__ ops; TYPE_1__* cap; } ;
struct TYPE_3__ {unsigned long features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_1(struct dpu_hw_pipe *VAR_21,
  unsigned long VAR_22)
{
 if (FUNC_0(VAR_7, &VAR_22)) {
  VAR_21->ops.setup_format = VAR_14;
  VAR_21->ops.setup_rects = VAR_18;
  VAR_21->ops.setup_sourceaddress = VAR_20;
  VAR_21->ops.setup_solidfill = VAR_19;
  VAR_21->ops.setup_pe = VAR_16;
 }

 if (FUNC_0(VAR_3, &VAR_22)) {
  VAR_21->ops.setup_danger_safe_lut =
   VAR_13;
  VAR_21->ops.setup_creq_lut = VAR_11;
  VAR_21->ops.setup_qos_ctrl = VAR_17;
 }

 if (FUNC_0(VAR_1, &VAR_22) ||
  FUNC_0(VAR_2, &VAR_22))
  VAR_21->ops.setup_csc = VAR_12;

 if (FUNC_0(VAR_5, &VAR_21->cap->features) ||
  FUNC_0(VAR_6, &VAR_21->cap->features))
  VAR_21->ops.setup_multirect = VAR_15;

 if (FUNC_0(VAR_4, &VAR_22)) {
  VAR_21->ops.setup_scaler = VAR_9;
  VAR_21->ops.get_scaler_ver = VAR_8;
 }

 if (FUNC_0(VAR_0, &VAR_22))
  VAR_21->ops.setup_cdp = VAR_10;
}
