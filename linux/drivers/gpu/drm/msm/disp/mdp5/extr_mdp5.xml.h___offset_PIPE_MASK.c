
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;
struct TYPE_9__ {int * base; } ;
struct TYPE_8__ {int * base; } ;
struct TYPE_7__ {int * base; } ;
struct TYPE_6__ {int * base; } ;
struct TYPE_10__ {TYPE_4__ pipe_cursor; TYPE_3__ pipe_rgb; TYPE_2__ pipe_vig; TYPE_1__ pipe_dma; } ;


 int FUNC_0 (int) ;
 TYPE_5__* VAR_0 ;

__attribute__((used)) static inline uint32_t FUNC_1(enum mdp5_pipe VAR_1)
{
 switch (VAR_1) {
  case 136: return (FUNC_0(VAR_1));
  case 131: return (VAR_0->pipe_vig.base[0]);
  case 130: return (VAR_0->pipe_vig.base[1]);
  case 129: return (VAR_0->pipe_vig.base[2]);
  case 135: return (VAR_0->pipe_rgb.base[0]);
  case 134: return (VAR_0->pipe_rgb.base[1]);
  case 133: return (VAR_0->pipe_rgb.base[2]);
  case 138: return (VAR_0->pipe_dma.base[0]);
  case 137: return (VAR_0->pipe_dma.base[1]);
  case 128: return (VAR_0->pipe_vig.base[3]);
  case 132: return (VAR_0->pipe_rgb.base[3]);
  case 140: return (VAR_0->pipe_cursor.base[0]);
  case 139: return (VAR_0->pipe_cursor.base[1]);
  default: return FUNC_0(VAR_1);
 }
}
