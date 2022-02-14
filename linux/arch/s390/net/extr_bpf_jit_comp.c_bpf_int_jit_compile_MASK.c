
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_jit {scalar_t__ size; struct s390_jit_data* addrs; scalar_t__ prg_buf; int size_prg; } ;
struct s390_jit_data {int pass; struct bpf_jit ctx; struct bpf_binary_header* header; } ;
struct bpf_prog {int jited; scalar_t__ jited_len; TYPE_1__* aux; int is_func; void* bpf_func; scalar_t__ len; int jit_requested; } ;
struct bpf_binary_header {int dummy; } ;
typedef int jit ;
struct TYPE_2__ {struct s390_jit_data* jit_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 struct bpf_binary_header* FUNC_1 (scalar_t__,scalar_t__*,int,int ) ;
 int FUNC_2 (struct bpf_binary_header*) ;
 int FUNC_3 (struct bpf_binary_header*) ;
 struct bpf_prog* FUNC_4 (struct bpf_prog*) ;
 int FUNC_5 (scalar_t__,scalar_t__,int,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct bpf_jit*,struct bpf_prog*,int) ;
 int FUNC_7 (struct bpf_prog*,struct bpf_prog*) ;
 int FUNC_8 (struct bpf_prog*,struct s390_jit_data*) ;
 int VAR_3 ;
 struct s390_jit_data* FUNC_9 (scalar_t__,int,int ) ;
 int FUNC_10 (struct s390_jit_data*) ;
 struct s390_jit_data* FUNC_11 (int,int ) ;
 int FUNC_12 (struct bpf_jit*,int ,int) ;
 int FUNC_13 (scalar_t__,int ) ;

struct bpf_prog *FUNC_14(struct bpf_prog *VAR_4)
{
 struct bpf_prog *VAR_5, *VAR_6 = VAR_4;
 struct bpf_binary_header *VAR_7;
 struct s390_jit_data *VAR_8;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 struct bpf_jit VAR_11;
 int VAR_12;

 if (!VAR_4->jit_requested)
  return VAR_6;

 VAR_5 = FUNC_4(VAR_4);




 if (FUNC_0(VAR_5))
  return VAR_6;
 if (VAR_5 != VAR_4) {
  VAR_9 = 1;
  VAR_4 = VAR_5;
 }

 VAR_8 = VAR_4->aux->jit_data;
 if (!VAR_8) {
  VAR_8 = FUNC_11(sizeof(*VAR_8), VAR_1);
  if (!VAR_8) {
   VAR_4 = VAR_6;
   goto out;
  }
  VAR_4->aux->jit_data = VAR_8;
 }
 if (VAR_8->ctx.addrs) {
  VAR_11 = VAR_8->ctx;
  VAR_7 = VAR_8->header;
  VAR_10 = 1;
  VAR_12 = VAR_8->pass + 1;
  goto skip_init_ctx;
 }

 FUNC_12(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.addrs = FUNC_9(VAR_4->len + 1, sizeof(*VAR_11.addrs), VAR_1);
 if (VAR_11.addrs == ((void*)0)) {
  VAR_4 = VAR_6;
  goto out;
 }





 for (VAR_12 = 1; VAR_12 <= 3; VAR_12++) {
  if (FUNC_6(&VAR_11, VAR_4, VAR_10)) {
   VAR_4 = VAR_6;
   goto free_addrs;
  }
 }



 if (VAR_11.size >= VAR_0) {
  VAR_4 = VAR_6;
  goto free_addrs;
 }

 VAR_7 = FUNC_1(VAR_11.size, &VAR_11.prg_buf, 2, VAR_3);
 if (!VAR_7) {
  VAR_4 = VAR_6;
  goto free_addrs;
 }
skip_init_ctx:
 if (FUNC_6(&VAR_11, VAR_4, VAR_10)) {
  FUNC_2(VAR_7);
  VAR_4 = VAR_6;
  goto free_addrs;
 }
 if (VAR_2 > 1) {
  FUNC_5(VAR_4->len, VAR_11.size, VAR_12, VAR_11.prg_buf);
  FUNC_13(VAR_11.prg_buf, VAR_11.size_prg);
 }
 if (!VAR_4->is_func || VAR_10) {
  FUNC_3(VAR_7);
 } else {
  VAR_8->header = VAR_7;
  VAR_8->ctx = VAR_11;
  VAR_8->pass = VAR_12;
 }
 VAR_4->bpf_func = (void *) VAR_11.prg_buf;
 VAR_4->jited = 1;
 VAR_4->jited_len = VAR_11.size;

 if (!VAR_4->is_func || VAR_10) {
  FUNC_8(VAR_4, VAR_11.addrs + 1);
free_addrs:
  FUNC_10(VAR_11.addrs);
  FUNC_10(VAR_8);
  VAR_4->aux->jit_data = ((void*)0);
 }
out:
 if (VAR_9)
  FUNC_7(VAR_4, VAR_4 == VAR_6 ?
        VAR_5 : VAR_6);
 return VAR_4;
}
