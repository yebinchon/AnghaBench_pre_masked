
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int rotation; TYPE_2__* fb; } ;
struct atmel_hlcdc_plane_state {TYPE_3__ base; } ;
struct atmel_hlcdc_plane {int layer; } ;
struct TYPE_5__ {TYPE_1__* format; } ;
struct TYPE_4__ {scalar_t__ format; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct atmel_hlcdc_plane *VAR_4,
     struct atmel_hlcdc_plane_state *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5->base.fb->format->format,
            &VAR_6);
 if (VAR_7)
  return;

 if ((VAR_5->base.fb->format->format == VAR_3 ||
      VAR_5->base.fb->format->format == VAR_2) &&
     FUNC_2(VAR_5->base.rotation))
  VAR_6 |= VAR_1;

 FUNC_1(&VAR_4->layer,
        VAR_0, VAR_6);
}
