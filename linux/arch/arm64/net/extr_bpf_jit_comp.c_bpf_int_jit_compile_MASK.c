
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct jit_ctx {int idx; int epilogue_offset; struct arm64_jit_data* offset; int * image; struct bpf_prog* prog; } ;
struct bpf_prog {int jited; int jited_len; TYPE_1__* aux; int is_func; int * bpf_func; int len; int jit_requested; } ;
struct bpf_binary_header {int dummy; } ;
struct arm64_jit_data {struct bpf_binary_header* header; int * image; struct jit_ctx ctx; } ;
typedef int ctx ;
typedef int __le32 ;
struct TYPE_2__ {struct arm64_jit_data* jit_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_binary_header*,int *) ;
 struct bpf_binary_header* FUNC_2 (int,int **,int,int ) ;
 int FUNC_3 (struct bpf_binary_header*) ;
 int FUNC_4 (struct bpf_binary_header*) ;
 struct bpf_prog* FUNC_5 (struct bpf_prog*) ;
 int FUNC_6 (int ,int,int,int *) ;
 int VAR_1 ;
 int FUNC_7 (struct bpf_prog*,struct bpf_prog*) ;
 int FUNC_8 (struct bpf_prog*,struct arm64_jit_data*) ;
 int FUNC_9 (struct bpf_prog*) ;
 scalar_t__ FUNC_10 (struct jit_ctx*,int) ;
 int FUNC_11 (struct jit_ctx*) ;
 scalar_t__ FUNC_12 (struct jit_ctx*,int) ;
 int VAR_2 ;
 struct arm64_jit_data* FUNC_13 (int ,int,int ) ;
 int FUNC_14 (struct arm64_jit_data*) ;
 struct arm64_jit_data* FUNC_15 (int,int ) ;
 int FUNC_16 (struct jit_ctx*,int ,int) ;
 int FUNC_17 (char*,int,int) ;
 scalar_t__ FUNC_18 (struct jit_ctx*) ;

struct bpf_prog *FUNC_19(struct bpf_prog *VAR_3)
{
 struct bpf_prog *VAR_4, *VAR_5 = VAR_3;
 struct bpf_binary_header *VAR_6;
 struct arm64_jit_data *VAR_7;
 bool VAR_8 = FUNC_9(VAR_3);
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 struct jit_ctx VAR_11;
 int VAR_12;
 u8 *VAR_13;

 if (!VAR_3->jit_requested)
  return VAR_5;

 VAR_4 = FUNC_5(VAR_3);



 if (FUNC_0(VAR_4))
  return VAR_5;
 if (VAR_4 != VAR_3) {
  VAR_9 = 1;
  VAR_3 = VAR_4;
 }

 VAR_7 = VAR_3->aux->jit_data;
 if (!VAR_7) {
  VAR_7 = FUNC_15(sizeof(*VAR_7), VAR_0);
  if (!VAR_7) {
   VAR_3 = VAR_5;
   goto out;
  }
  VAR_3->aux->jit_data = VAR_7;
 }
 if (VAR_7->ctx.offset) {
  VAR_11 = VAR_7->ctx;
  VAR_13 = VAR_7->image;
  VAR_6 = VAR_7->header;
  VAR_10 = 1;
  VAR_12 = sizeof(u32) * VAR_11.idx;
  goto skip_init_ctx;
 }
 FUNC_16(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.prog = VAR_3;

 VAR_11.offset = FUNC_13(VAR_3->len, sizeof(int), VAR_0);
 if (VAR_11.offset == ((void*)0)) {
  VAR_3 = VAR_5;
  goto out_off;
 }




 if (FUNC_10(&VAR_11, VAR_10)) {
  VAR_3 = VAR_5;
  goto out_off;
 }

 if (FUNC_12(&VAR_11, VAR_8)) {
  VAR_3 = VAR_5;
  goto out_off;
 }

 VAR_11.epilogue_offset = VAR_11.idx;
 FUNC_11(&VAR_11);


 VAR_12 = sizeof(u32) * VAR_11.idx;
 VAR_6 = FUNC_2(VAR_12, &VAR_13,
          sizeof(u32), VAR_2);
 if (VAR_6 == ((void*)0)) {
  VAR_3 = VAR_5;
  goto out_off;
 }



 VAR_11.image = (__le32 *)VAR_13;
skip_init_ctx:
 VAR_11.idx = 0;

 FUNC_12(&VAR_11, VAR_8);

 if (FUNC_10(&VAR_11, VAR_10)) {
  FUNC_3(VAR_6);
  VAR_3 = VAR_5;
  goto out_off;
 }

 FUNC_11(&VAR_11);


 if (FUNC_18(&VAR_11)) {
  FUNC_3(VAR_6);
  VAR_3 = VAR_5;
  goto out_off;
 }


 if (VAR_1 > 1)
  FUNC_6(VAR_3->len, VAR_12, 2, VAR_11.image);

 FUNC_1(VAR_6, VAR_11.image + VAR_11.idx);

 if (!VAR_3->is_func || VAR_10) {
  if (VAR_10 && VAR_11.idx != VAR_7->ctx.idx) {
   FUNC_17("multi-func JIT bug %d != %d\n",
        VAR_11.idx, VAR_7->ctx.idx);
   FUNC_3(VAR_6);
   VAR_3->bpf_func = ((void*)0);
   VAR_3->jited = 0;
   goto out_off;
  }
  FUNC_4(VAR_6);
 } else {
  VAR_7->ctx = VAR_11;
  VAR_7->image = VAR_13;
  VAR_7->header = VAR_6;
 }
 VAR_3->bpf_func = (void *)VAR_11.image;
 VAR_3->jited = 1;
 VAR_3->jited_len = VAR_12;

 if (!VAR_3->is_func || VAR_10) {
  FUNC_8(VAR_3, VAR_11.offset);
out_off:
  FUNC_14(VAR_11.offset);
  FUNC_14(VAR_7);
  VAR_3->aux->jit_data = ((void*)0);
 }
out:
 if (VAR_9)
  FUNC_7(VAR_3, VAR_3 == VAR_5 ?
        VAR_4 : VAR_5);
 return VAR_3;
}
