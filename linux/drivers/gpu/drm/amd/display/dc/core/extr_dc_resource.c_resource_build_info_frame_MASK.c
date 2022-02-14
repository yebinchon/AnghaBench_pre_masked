
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {int valid; } ;
struct TYPE_19__ {int valid; } ;
struct TYPE_18__ {int valid; } ;
struct TYPE_15__ {int valid; } ;
struct TYPE_17__ {int valid; } ;
struct TYPE_12__ {int valid; } ;
struct encoder_info_frame {TYPE_11__ gamut; TYPE_8__ hdrsmd; TYPE_6__ spd; TYPE_2__ vsc; TYPE_4__ vendor; TYPE_10__ avi; } ;
struct TYPE_14__ {struct encoder_info_frame encoder_info_frame; } ;
struct pipe_ctx {TYPE_3__* stream; TYPE_1__ stream_res; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
struct TYPE_16__ {int signal; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (TYPE_10__*,struct pipe_ctx*) ;
 int FUNC_4 (TYPE_8__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;

void FUNC_8(struct pipe_ctx *VAR_1)
{
 enum signal_type VAR_2 = VAR_0;
 struct encoder_info_frame *VAR_3 = &VAR_1->stream_res.encoder_info_frame;


 VAR_3->avi.valid = 0;
 VAR_3->gamut.valid = 0;
 VAR_3->vendor.valid = 0;
 VAR_3->spd.valid = 0;
 VAR_3->hdrsmd.valid = 0;
 VAR_3->vsc.valid = 0;

 VAR_2 = VAR_1->stream->signal;


 if (FUNC_1(VAR_2)) {
  FUNC_3(&VAR_3->avi, VAR_1);

  FUNC_6(&VAR_3->vendor, VAR_1->stream);

  FUNC_5(&VAR_3->spd, VAR_1->stream);

  FUNC_4(&VAR_3->hdrsmd, VAR_1->stream);

 } else if (FUNC_0(VAR_2)) {
  FUNC_7(&VAR_3->vsc, VAR_1->stream);

  FUNC_5(&VAR_3->spd, VAR_1->stream);

  FUNC_4(&VAR_3->hdrsmd, VAR_1->stream);
 }

 FUNC_2(&VAR_3->gamut);
}
