
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct cc_drvdata {scalar_t__ mlli_sram_addr; } ;
struct aead_request {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_8__ {int mlli_nents; scalar_t__ sram_addr; } ;
struct TYPE_7__ {int mlli_nents; scalar_t__ sram_addr; } ;
struct TYPE_6__ {int mlli_nents; scalar_t__ sram_addr; } ;
struct TYPE_5__ {scalar_t__ op_type; } ;
struct aead_req_ctx {scalar_t__ assoc_buff_type; scalar_t__ data_buff_type; TYPE_4__ dst; TYPE_3__ assoc; int is_single_pass; TYPE_2__ src; TYPE_1__ gen_ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;

__attribute__((used)) static void FUNC_1(struct cc_drvdata *VAR_3,
          struct aead_request *VAR_4)
{
 struct aead_req_ctx *VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6 = 0;

 if (VAR_5->assoc_buff_type == VAR_0) {
  VAR_5->assoc.sram_addr = VAR_3->mlli_sram_addr;
  VAR_6 = VAR_5->assoc.mlli_nents *
      VAR_2;
 }

 if (VAR_5->data_buff_type == VAR_0) {

  if (VAR_4->src == VAR_4->dst) {
   VAR_5->dst.mlli_nents = VAR_5->src.mlli_nents;
   VAR_5->src.sram_addr = VAR_3->mlli_sram_addr +
        VAR_6;
   VAR_5->dst.sram_addr = VAR_5->src.sram_addr;
   if (!VAR_5->is_single_pass)
    VAR_5->assoc.mlli_nents +=
     VAR_5->src.mlli_nents;
  } else {
   if (VAR_5->gen_ctx.op_type ==
     VAR_1) {
    VAR_5->src.sram_addr =
      VAR_3->mlli_sram_addr +
        VAR_6;
    VAR_5->dst.sram_addr =
      VAR_5->src.sram_addr +
      VAR_5->src.mlli_nents *
      VAR_2;
    if (!VAR_5->is_single_pass)
     VAR_5->assoc.mlli_nents +=
      VAR_5->src.mlli_nents;
   } else {
    VAR_5->dst.sram_addr =
      VAR_3->mlli_sram_addr +
        VAR_6;
    VAR_5->src.sram_addr =
      VAR_5->dst.sram_addr +
      VAR_5->dst.mlli_nents *
      VAR_2;
    if (!VAR_5->is_single_pass)
     VAR_5->assoc.mlli_nents +=
      VAR_5->dst.mlli_nents;
   }
  }
 }
}
