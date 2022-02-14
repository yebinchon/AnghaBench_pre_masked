
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct codegen_context {int idx; } ;
struct bpf_prog {int len; struct bpf_insn* insnsi; } ;
struct bpf_insn {int code; scalar_t__ src_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int*,struct codegen_context*,int ) ;
 int FUNC_1 (struct bpf_prog*,struct bpf_insn const*,int,int *,int*) ;

__attribute__((used)) static int FUNC_2(struct bpf_prog *VAR_3, u32 *VAR_4,
           struct codegen_context *VAR_5, u32 *VAR_6)
{
 const struct bpf_insn *VAR_7 = VAR_3->insnsi;
 bool VAR_8;
 u64 VAR_9;
 u32 VAR_10;
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_3->len; VAR_11++) {
  if (VAR_7[VAR_11].code == (VAR_1 | VAR_0) &&
      VAR_7[VAR_11].src_reg == VAR_2) {
   VAR_12 = FUNC_1(VAR_3, &VAR_7[VAR_11], 1,
          &VAR_9,
          &VAR_8);
   if (VAR_12 < 0)
    return VAR_12;







   VAR_10 = VAR_5->idx;
   VAR_5->idx = VAR_6[VAR_11] / 4;
   FUNC_0(VAR_4, VAR_5, VAR_9);





   VAR_5->idx = VAR_10;
  }
 }

 return 0;
}
