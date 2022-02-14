
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct dce112_compressor {int offsets; } ;
struct TYPE_3__ {scalar_t__ DUMMY_BACKEND; scalar_t__ LPT_SUPPORT; scalar_t__ FBC_SUPPORT; } ;
struct TYPE_4__ {TYPE_1__ bits; } ;
struct compressor {int is_enabled; int attached_inst; int ctx; TYPE_2__ options; } ;
struct compr_addr_and_pitch_params {int source_view_width; int source_view_height; int inst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dce112_compressor* FUNC_0 (struct compressor*) ;
 int FUNC_1 (struct compressor*) ;
 int FUNC_2 (struct compressor*,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct dce112_compressor*,int,int) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_6 (int,int,int ,int ) ;
 int FUNC_7 (struct dce112_compressor*,int) ;

void FUNC_8(
 struct compressor *VAR_6,
 uint32_t VAR_7,
 struct compr_addr_and_pitch_params *VAR_8)
{
 struct dce112_compressor *VAR_9 = FUNC_0(VAR_6);

 if (VAR_6->options.bits.FBC_SUPPORT &&
  (VAR_6->options.bits.DUMMY_BACKEND == 0) &&
  (!FUNC_2(VAR_6, ((void*)0))) &&
  (!FUNC_5(
   VAR_9,
   VAR_8->source_view_width,
   VAR_8->source_view_height))) {

  uint32_t VAR_10;
  uint32_t VAR_11;




  if (VAR_6->options.bits.LPT_SUPPORT && (VAR_7 < 2) &&
   (VAR_8->source_view_width *
    VAR_8->source_view_height <=
    VAR_3)) {
   FUNC_1(VAR_6);
  }

  VAR_10 = VAR_4;
  VAR_11 = FUNC_3(VAR_6->ctx, VAR_10);
  FUNC_6(VAR_11, 1, VAR_0, VAR_1);
  FUNC_6(
   VAR_11,
   VAR_8->inst,
   VAR_0, VAR_2);
  FUNC_4(VAR_6->ctx, VAR_10, VAR_11);


  VAR_6->is_enabled = 1;
  VAR_6->attached_inst = VAR_8->inst;
  VAR_9->offsets = VAR_5[VAR_8->inst];


  FUNC_6(VAR_11, 0, VAR_0, VAR_1);
  FUNC_4(VAR_6->ctx, VAR_10, VAR_11);
  FUNC_6(VAR_11, 1, VAR_0, VAR_1);
  FUNC_4(VAR_6->ctx, VAR_10, VAR_11);

  FUNC_7(VAR_9, 1);
 }
}
