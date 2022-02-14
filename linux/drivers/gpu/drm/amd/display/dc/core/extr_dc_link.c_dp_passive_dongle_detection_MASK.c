
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_sink_capability {int dongle_type; } ;
struct ddc_service {int dummy; } ;
struct audio_support {int dummy; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;


 int FUNC_0 (struct ddc_service*,struct display_sink_capability*) ;
 int FUNC_1 (int ,struct audio_support*) ;

__attribute__((used)) static enum signal_type FUNC_2(
  struct ddc_service *VAR_0,
  struct display_sink_capability *VAR_1,
  struct audio_support *VAR_2)
{
 FUNC_0(
      VAR_0, VAR_1);
 return FUNC_1(
   VAR_1->dongle_type,
   VAR_2);
}
