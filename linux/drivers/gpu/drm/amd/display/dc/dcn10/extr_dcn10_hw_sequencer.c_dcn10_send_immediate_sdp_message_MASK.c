
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_4__* stream_enc; } ;
struct pipe_ctx {TYPE_3__ stream_res; TYPE_1__* stream; } ;
struct TYPE_8__ {TYPE_2__* funcs; } ;
struct TYPE_6__ {int (* send_immediate_sdp_message ) (TYPE_4__*,int const*,unsigned int) ;} ;
struct TYPE_5__ {int signal; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct pipe_ctx *VAR_0,
    const uint8_t *VAR_1,
    unsigned int VAR_2)
{
 if (FUNC_0(VAR_0->stream->signal)) {
  VAR_0->stream_res.stream_enc->funcs->send_immediate_sdp_message(
    VAR_0->stream_res.stream_enc,
    VAR_1,
    VAR_2);
 }
}
