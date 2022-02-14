
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct vc4_dev {TYPE_1__ ctm_manager; } ;
struct vc4_ctm_state {scalar_t__ fifo; struct drm_color_ctm* ctm; } ;
struct drm_color_ctm {int * matrix; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (int ,int) ;
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
 int FUNC_1 (scalar_t__,int ) ;
 struct vc4_ctm_state* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct vc4_dev *VAR_14, struct drm_atomic_state *VAR_15)
{
 struct vc4_ctm_state *VAR_16 = FUNC_2(VAR_14->ctm_manager.state);
 struct drm_color_ctm *VAR_17 = VAR_16->ctm;

 if (VAR_16->fifo) {
  FUNC_0(VAR_8,
     FUNC_1(FUNC_3(VAR_17->matrix[0]),
     VAR_11) |
     FUNC_1(FUNC_3(VAR_17->matrix[3]),
     VAR_10) |
     FUNC_1(FUNC_3(VAR_17->matrix[6]),
     VAR_9));
  FUNC_0(VAR_4,
     FUNC_1(FUNC_3(VAR_17->matrix[1]),
     VAR_7) |
     FUNC_1(FUNC_3(VAR_17->matrix[4]),
     VAR_6) |
     FUNC_1(FUNC_3(VAR_17->matrix[7]),
     VAR_5));
  FUNC_0(VAR_0,
     FUNC_1(FUNC_3(VAR_17->matrix[2]),
     VAR_3) |
     FUNC_1(FUNC_3(VAR_17->matrix[5]),
     VAR_2) |
     FUNC_1(FUNC_3(VAR_17->matrix[8]),
     VAR_1));
 }

 FUNC_0(VAR_12,
    FUNC_1(VAR_16->fifo, VAR_13));
}
