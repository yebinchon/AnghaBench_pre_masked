
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct jit_ctx {int use_bbit_insns; int flags; int idx; int gen_b_offsets; int * reg_val_types; int * offsets; int * target; scalar_t__ long_b_conversion; struct bpf_prog* skf; } ;
struct bpf_prog {int jited; unsigned int jited_len; void* bpf_func; scalar_t__ len; int jit_requested; } ;
struct bpf_binary_header {int dummy; } ;
typedef int ctx ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct bpf_binary_header* FUNC_1 (unsigned int,int **,int,int ) ;
 int FUNC_2 (struct bpf_binary_header*) ;
 int FUNC_3 (struct bpf_binary_header*) ;
 struct bpf_prog* FUNC_4 (struct bpf_prog*) ;
 int FUNC_5 (scalar_t__,unsigned int,int,int *) ;
 int VAR_7 ;
 int FUNC_6 (struct bpf_prog*,struct bpf_prog*) ;
 scalar_t__ FUNC_7 (struct jit_ctx*) ;
 scalar_t__ FUNC_8 (struct jit_ctx*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_11 (struct jit_ctx*) ;
 int VAR_8 ;
 void* FUNC_12 (scalar_t__,int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct jit_ctx*,int ,int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (struct jit_ctx*) ;

struct bpf_prog *FUNC_18(struct bpf_prog *VAR_9)
{
 struct bpf_prog *VAR_10 = VAR_9;
 bool VAR_11 = 0;
 struct bpf_prog *VAR_12;
 struct bpf_binary_header *VAR_13 = ((void*)0);
 struct jit_ctx VAR_14;
 unsigned int VAR_15;
 u8 *VAR_16;

 if (!VAR_9->jit_requested || VAR_5 < 2)
  return VAR_9;

 VAR_12 = FUNC_4(VAR_9);



 if (FUNC_0(VAR_12))
  return VAR_10;
 if (VAR_12 != VAR_9) {
  VAR_11 = 1;
  VAR_9 = VAR_12;
 }

 FUNC_14(&VAR_14, 0, sizeof(VAR_14));

 FUNC_15();
 switch (FUNC_9()) {
 case 131:
 case 128:
 case 130:
 case 129:
  VAR_14.use_bbit_insns = 1;
  break;
 default:
  VAR_14.use_bbit_insns = 0;
 }
 FUNC_16();

 VAR_14.offsets = FUNC_12(VAR_9->len + 1, sizeof(*VAR_14.offsets), VAR_4);
 if (VAR_14.offsets == ((void*)0))
  goto out_err;

 VAR_14.reg_val_types = FUNC_12(VAR_9->len + 1, sizeof(*VAR_14.reg_val_types), VAR_4);
 if (VAR_14.reg_val_types == ((void*)0))
  goto out_err;

 VAR_14.skf = VAR_9;

 if (FUNC_17(&VAR_14))
  goto out_err;





 if (FUNC_7(&VAR_14))
  goto out_err;





 if (VAR_14.flags & VAR_2) {
  if (VAR_14.flags & VAR_0)
   VAR_14.flags |= VAR_1;
  else
   VAR_14.flags |= VAR_3;
 }
 do {
  VAR_14.idx = 0;
  VAR_14.gen_b_offsets = 1;
  VAR_14.long_b_conversion = 0;
  if (FUNC_11(&VAR_14))
   goto out_err;
  if (FUNC_7(&VAR_14))
   goto out_err;
  if (FUNC_8(&VAR_14, VAR_6))
   goto out_err;
 } while (VAR_14.long_b_conversion);

 VAR_15 = 4 * VAR_14.idx;

 VAR_13 = FUNC_1(VAR_15, &VAR_16,
          sizeof(u32), VAR_8);
 if (VAR_13 == ((void*)0))
  goto out_err;

 VAR_14.target = (u32 *)VAR_16;


 VAR_14.idx = 0;
 if (FUNC_11(&VAR_14))
  goto out_err;
 if (FUNC_7(&VAR_14))
  goto out_err;
 if (FUNC_8(&VAR_14, VAR_6))
  goto out_err;


 FUNC_10((unsigned long)VAR_14.target,
      (unsigned long)&VAR_14.target[VAR_14.idx]);

 if (VAR_7 > 1)

  FUNC_5(VAR_9->len, VAR_15, 2, VAR_14.target);

 FUNC_3(VAR_13);
 VAR_9->bpf_func = (void *)VAR_14.target;
 VAR_9->jited = 1;
 VAR_9->jited_len = VAR_15;
out_normal:
 if (VAR_11)
  FUNC_6(VAR_9, VAR_9 == VAR_10 ?
        VAR_12 : VAR_10);
 FUNC_13(VAR_14.offsets);
 FUNC_13(VAR_14.reg_val_types);

 return VAR_9;

out_err:
 VAR_9 = VAR_10;
 if (VAR_13)
  FUNC_2(VAR_13);
 goto out_normal;
}
