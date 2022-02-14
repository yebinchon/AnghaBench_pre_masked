
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct pipe_ctx {TYPE_3__* stream; } ;
typedef enum vline_select { ____Placeholder_vline_select } vline_select ;
typedef enum vertical_interrupt_ref_point { ____Placeholder_vertical_interrupt_ref_point } vertical_interrupt_ref_point ;
struct TYPE_5__ {int ref_point; } ;
struct TYPE_4__ {int ref_point; } ;
struct TYPE_6__ {TYPE_2__ periodic_interrupt1; TYPE_1__ periodic_interrupt0; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pipe_ctx*,int *,int *) ;

__attribute__((used)) static void FUNC_2(
  struct pipe_ctx *VAR_3,
  enum vline_select VAR_4,
  uint32_t *VAR_5,
  uint32_t *VAR_6)
{
 enum vertical_interrupt_ref_point VAR_7 = VAR_0;

 if (VAR_4 == VAR_1)
  VAR_7 = VAR_3->stream->periodic_interrupt0.ref_point;
 else if (VAR_4 == VAR_2)
  VAR_7 = VAR_3->stream->periodic_interrupt1.ref_point;

 switch (VAR_7) {
 case 128:
  FUNC_1(
    VAR_3,
    VAR_5,
    VAR_6);
  break;
 case 129:

  break;
 default:
  FUNC_0(0);
  break;
 }
}
