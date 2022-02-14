
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int color_depth; } ;
struct TYPE_5__ {TYPE_1__ pix_clk_params; } ;
struct pipe_ctx {TYPE_3__* stream; TYPE_2__ stream_res; } ;
struct fixed31_32 {int dummy; } ;
struct TYPE_6__ {int timing; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct fixed31_32 FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct fixed31_32 FUNC_3(struct pipe_ctx *VAR_1)
{
 uint32_t VAR_2;
 uint64_t VAR_3;
 struct fixed31_32 VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;

 VAR_2 = FUNC_2(VAR_1->stream_res.pix_clk_params.color_depth);
 VAR_3 = FUNC_0(&VAR_1->stream->timing);
 VAR_5 = 64 * VAR_0;
 VAR_6 = 54 * 8 * 1000 * 1000;
 VAR_3 *= VAR_5;
 VAR_4 = FUNC_1(VAR_3, VAR_6);

 return VAR_4;
}
