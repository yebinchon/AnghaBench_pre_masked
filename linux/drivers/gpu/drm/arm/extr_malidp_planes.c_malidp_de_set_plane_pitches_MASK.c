
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* state; } ;
struct malidp_plane {TYPE_5__* layer; TYPE_6__* hwdev; TYPE_4__ base; } ;
struct TYPE_12__ {TYPE_1__* hw; } ;
struct TYPE_11__ {scalar_t__ stride_offset; scalar_t__ base; } ;
struct TYPE_9__ {TYPE_2__* fb; } ;
struct TYPE_8__ {int format; } ;
struct TYPE_7__ {int features; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_6__*,unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct malidp_plane *VAR_1,
     int VAR_2, unsigned int VAR_3[3])
{
 int VAR_4;
 int VAR_5 = VAR_2;

 if (!VAR_1->layer->stride_offset)
  return;

 if (VAR_2 == 3)
  VAR_5 = (VAR_1->hwdev->hw->features &
          VAR_0) ? 3 : 2;






 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
  unsigned int VAR_6 = FUNC_0(VAR_1->base.state->fb->format, VAR_4);

  FUNC_1(VAR_1->hwdev, VAR_3[VAR_4] * VAR_6,
    VAR_1->layer->base +
    VAR_1->layer->stride_offset + VAR_4 * 4);
 }
}
