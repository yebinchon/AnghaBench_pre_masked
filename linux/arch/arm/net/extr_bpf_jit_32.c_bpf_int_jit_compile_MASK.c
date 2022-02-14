
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct jit_ctx {unsigned int idx; unsigned int prologue_bytes; unsigned int epilogue_offset; unsigned int epilogue_bytes; int * offsets; int * imms; scalar_t__ imm_count; int * target; int cpu_architecture; struct bpf_prog* prog; } ;
struct bpf_prog {int jited; unsigned int jited_len; void* bpf_func; scalar_t__ len; int jit_requested; } ;
struct bpf_binary_header {int dummy; } ;
typedef int ctx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 struct bpf_binary_header* FUNC_1 (unsigned int,int **,int,int ) ;
 int FUNC_2 (struct bpf_binary_header*) ;
 int FUNC_3 (struct bpf_binary_header*) ;
 struct bpf_prog* FUNC_4 (struct bpf_prog*) ;
 int FUNC_5 (scalar_t__,unsigned int,int,int *) ;
 int VAR_1 ;
 int FUNC_6 (struct bpf_prog*,struct bpf_prog*) ;
 scalar_t__ FUNC_7 (struct jit_ctx*) ;
 int FUNC_8 (struct jit_ctx*) ;
 int FUNC_9 (struct jit_ctx*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ) ;
 int VAR_2 ;
 void* FUNC_12 (scalar_t__,int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct jit_ctx*,int ,int) ;
 scalar_t__ FUNC_15 (struct jit_ctx*) ;

struct bpf_prog *FUNC_16(struct bpf_prog *VAR_3)
{
 struct bpf_prog *VAR_4, *VAR_5 = VAR_3;
 struct bpf_binary_header *VAR_6;
 bool VAR_7 = 0;
 struct jit_ctx VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 u8 *VAR_11;




 if (!VAR_3->jit_requested)
  return VAR_5;





 VAR_4 = FUNC_4(VAR_3);

 if (FUNC_0(VAR_4))
  return VAR_5;
 if (VAR_4 != VAR_3) {
  VAR_7 = 1;
  VAR_3 = VAR_4;
 }

 FUNC_14(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.prog = VAR_3;
 VAR_8.cpu_architecture = FUNC_10();




 VAR_8.offsets = FUNC_12(VAR_3->len, sizeof(int), VAR_0);
 if (VAR_8.offsets == ((void*)0)) {
  VAR_3 = VAR_5;
  goto out;
 }
 if (FUNC_7(&VAR_8)) {
  VAR_3 = VAR_5;
  goto out_off;
 }

 VAR_9 = VAR_8.idx;
 FUNC_9(&VAR_8);
 VAR_8.prologue_bytes = (VAR_8.idx - VAR_9) * 4;

 VAR_8.epilogue_offset = VAR_8.idx;


 VAR_9 = VAR_8.idx;
 FUNC_8(&VAR_8);
 VAR_8.epilogue_bytes = (VAR_8.idx - VAR_9) * 4;

 VAR_8.idx += VAR_8.imm_count;
 if (VAR_8.imm_count) {
  VAR_8.imms = FUNC_12(VAR_8.imm_count, sizeof(u32), VAR_0);
  if (VAR_8.imms == ((void*)0)) {
   VAR_3 = VAR_5;
   goto out_off;
  }
 }
 VAR_10 = sizeof(u32) * VAR_8.idx;


 VAR_6 = FUNC_1(VAR_10, &VAR_11,
          sizeof(u32), VAR_2);



 if (VAR_6 == ((void*)0)) {
  VAR_3 = VAR_5;
  goto out_imms;
 }


 VAR_8.target = (u32 *) VAR_11;
 VAR_8.idx = 0;

 FUNC_9(&VAR_8);




 if (FUNC_7(&VAR_8) < 0) {
  VAR_11 = ((void*)0);
  FUNC_2(VAR_6);
  VAR_3 = VAR_5;
  goto out_imms;
 }
 FUNC_8(&VAR_8);


 if (FUNC_15(&VAR_8)) {
  VAR_11 = ((void*)0);
  FUNC_2(VAR_6);
  VAR_3 = VAR_5;
  goto out_imms;
 }
 FUNC_11((u32)VAR_6, (u32)(VAR_8.target + VAR_8.idx));

 if (VAR_1 > 1)

  FUNC_5(VAR_3->len, VAR_10, 2, VAR_8.target);

 FUNC_3(VAR_6);
 VAR_3->bpf_func = (void *)VAR_8.target;
 VAR_3->jited = 1;
 VAR_3->jited_len = VAR_10;

out_imms:

 if (VAR_8.imm_count)
  FUNC_13(VAR_8.imms);

out_off:
 FUNC_13(VAR_8.offsets);
out:
 if (VAR_7)
  FUNC_6(VAR_3, VAR_3 == VAR_5 ?
        VAR_4 : VAR_5);
 return VAR_3;
}
