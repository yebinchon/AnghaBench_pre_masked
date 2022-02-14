
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rv_jit_context {int ninsns; int epilogue_offset; struct rv_jit_data* offset; int * insns; struct bpf_prog* prog; } ;
struct rv_jit_data {int header; scalar_t__ image; struct rv_jit_context ctx; } ;
struct bpf_prog {int jited; unsigned int jited_len; TYPE_1__* aux; int is_func; void* bpf_func; int len; int jit_requested; } ;
struct TYPE_2__ {struct rv_jit_data* jit_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (unsigned int,scalar_t__*,int,int ) ;
 int FUNC_3 (int ) ;
 struct bpf_prog* FUNC_4 (struct bpf_prog*) ;
 int FUNC_5 (int ,unsigned int,int,int *) ;
 int VAR_2 ;
 int FUNC_6 (struct bpf_prog*,struct bpf_prog*) ;
 scalar_t__ FUNC_7 (struct rv_jit_context*,int) ;
 int FUNC_8 (struct rv_jit_context*) ;
 int FUNC_9 (struct rv_jit_context*) ;
 struct rv_jit_data* FUNC_10 (int ,int,int ) ;
 int FUNC_11 (struct rv_jit_data*) ;
 struct rv_jit_data* FUNC_12 (int,int ) ;

struct bpf_prog *FUNC_13(struct bpf_prog *VAR_3)
{
 bool VAR_4 = 0, VAR_5 = 0;
 struct bpf_prog *VAR_6, *VAR_7 = VAR_3;
 struct rv_jit_data *VAR_8;
 struct rv_jit_context *VAR_9;
 unsigned int VAR_10;

 if (!VAR_3->jit_requested)
  return VAR_7;

 VAR_6 = FUNC_4(VAR_3);
 if (FUNC_0(VAR_6))
  return VAR_7;
 if (VAR_6 != VAR_3) {
  VAR_4 = 1;
  VAR_3 = VAR_6;
 }

 VAR_8 = VAR_3->aux->jit_data;
 if (!VAR_8) {
  VAR_8 = FUNC_12(sizeof(*VAR_8), VAR_0);
  if (!VAR_8) {
   VAR_3 = VAR_7;
   goto out;
  }
  VAR_3->aux->jit_data = VAR_8;
 }

 VAR_9 = &VAR_8->ctx;

 if (VAR_9->offset) {
  VAR_5 = 1;
  VAR_10 = sizeof(u32) * VAR_9->ninsns;
  goto skip_init_ctx;
 }

 VAR_9->prog = VAR_3;
 VAR_9->offset = FUNC_10(VAR_3->len, sizeof(int), VAR_0);
 if (!VAR_9->offset) {
  VAR_3 = VAR_7;
  goto out_offset;
 }


 if (FUNC_7(VAR_9, VAR_5)) {
  VAR_3 = VAR_7;
  goto out_offset;
 }
 FUNC_9(VAR_9);
 VAR_9->epilogue_offset = VAR_9->ninsns;
 FUNC_8(VAR_9);


 VAR_10 = sizeof(u32) * VAR_9->ninsns;
 VAR_8->header = FUNC_2(VAR_10, &VAR_8->image,
      sizeof(u32),
      VAR_1);
 if (!VAR_8->header) {
  VAR_3 = VAR_7;
  goto out_offset;
 }


 VAR_9->insns = (u32 *)VAR_8->image;
skip_init_ctx:
 VAR_9->ninsns = 0;

 FUNC_9(VAR_9);
 if (FUNC_7(VAR_9, VAR_5)) {
  FUNC_3(VAR_8->header);
  VAR_3 = VAR_7;
  goto out_offset;
 }
 FUNC_8(VAR_9);

 if (VAR_2 > 1)
  FUNC_5(VAR_3->len, VAR_10, 2, VAR_9->insns);

 VAR_3->bpf_func = (void *)VAR_9->insns;
 VAR_3->jited = 1;
 VAR_3->jited_len = VAR_10;

 FUNC_1(VAR_8->header, VAR_9->insns + VAR_9->ninsns);

 if (!VAR_3->is_func || VAR_5) {
out_offset:
  FUNC_11(VAR_9->offset);
  FUNC_11(VAR_8);
  VAR_3->aux->jit_data = ((void*)0);
 }
out:
 if (VAR_4)
  FUNC_6(VAR_3, VAR_3 == VAR_7 ?
        VAR_6 : VAR_7);
 return VAR_3;
}
