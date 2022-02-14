
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct TYPE_2__ {int crtc; } ;
struct dce110_timing_generator {TYPE_1__ offsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dce110_timing_generator* FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static bool FUNC_3(struct timing_generator *VAR_10, uint32_t *VAR_11,
      uint32_t *VAR_12, uint32_t *VAR_13)
{
 struct dce110_timing_generator *VAR_14 = FUNC_0(VAR_10);
 uint32_t VAR_15, VAR_16;

 VAR_15 = FUNC_1(VAR_10->ctx, VAR_9,
      VAR_14->offsets.crtc);
 VAR_16 = FUNC_2(VAR_15, VAR_5, VAR_6);


 if (!VAR_16)
  return 0;

 VAR_15 = FUNC_1(VAR_10->ctx, VAR_8,
      VAR_14->offsets.crtc);
 *VAR_11 = FUNC_2(VAR_15, VAR_4, VAR_2);
 *VAR_12 = FUNC_2(VAR_15, VAR_4, VAR_1);

 VAR_15 = FUNC_1(VAR_10->ctx, VAR_7,
      VAR_14->offsets.crtc);
 *VAR_13 = FUNC_2(VAR_15, VAR_3, VAR_0);

 return 1;
}
