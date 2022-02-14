
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
 struct dce110_timing_generator* FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_3(
  struct timing_generator *VAR_3)
{
 uint32_t VAR_4 = 0;
 struct dce110_timing_generator *VAR_5 = FUNC_0(VAR_3);
 uint32_t VAR_6 = FUNC_1(
     VAR_3->ctx,
     VAR_2,
     VAR_5->offsets.crtc);

 VAR_4 = FUNC_2(VAR_6, VAR_0, VAR_1);
 return VAR_4 == 1;
}
