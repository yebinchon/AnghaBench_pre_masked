
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_context {int watermarks_bitmap; TYPE_1__* display_config; } ;
struct TYPE_2__ {int num_display; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct smu_context*,int ) ;
 int FUNC_1 (struct smu_context*,int ,int ) ;
 int FUNC_2 (struct smu_context*) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_5)
{
 int VAR_6 = 0;

 if ((VAR_5->watermarks_bitmap & VAR_3) &&
     !(VAR_5->watermarks_bitmap & VAR_4)) {
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6)
   return VAR_6;

  VAR_5->watermarks_bitmap |= VAR_4;
 }

 if ((VAR_5->watermarks_bitmap & VAR_3) &&
     FUNC_0(VAR_5, VAR_0) &&
     FUNC_0(VAR_5, VAR_1)) {
  VAR_6 = FUNC_1(VAR_5, VAR_2,
        VAR_5->display_config->num_display);
  if (VAR_6)
   return VAR_6;
 }

 return VAR_6;
}
