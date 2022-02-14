
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


typedef int u32 ;
struct TYPE_12__ {int dither; } ;
struct TYPE_11__ {int enable; int bits; int mode; } ;
struct TYPE_8__ {int depth; } ;
struct nv50_head_atom {TYPE_6__ set; TYPE_5__ dither; TYPE_2__ base; } ;
struct TYPE_10__ {scalar_t__ mode; int depth; } ;
struct TYPE_7__ {struct drm_connector* connector; } ;
struct nouveau_conn_atom {TYPE_4__ dither; TYPE_1__ state; } ;
struct TYPE_9__ {int bpc; } ;
struct drm_connector {TYPE_3__ display_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct nv50_head_atom *VAR_4,
         struct nv50_head_atom *VAR_5,
         struct nouveau_conn_atom *VAR_6)
{
 struct drm_connector *VAR_7 = VAR_6->state.connector;
 u32 VAR_8 = 0x00;

 if (VAR_6->dither.mode == VAR_2) {
  if (VAR_5->base.depth > VAR_7->display_info.bpc * 3)
   VAR_8 = VAR_3;
 } else {
  VAR_8 = VAR_6->dither.mode;
 }

 if (VAR_6->dither.depth == VAR_1) {
  if (VAR_7->display_info.bpc >= 8)
   VAR_8 |= VAR_0;
 } else {
  VAR_8 |= VAR_6->dither.depth;
 }

 VAR_5->dither.enable = VAR_8;
 VAR_5->dither.bits = VAR_8 >> 1;
 VAR_5->dither.mode = VAR_8 >> 3;
 VAR_5->set.dither = 1;
}
