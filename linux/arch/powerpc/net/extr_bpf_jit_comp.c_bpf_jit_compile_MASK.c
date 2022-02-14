
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct codegen_context {int idx; int pc_ret0; scalar_t__ seen; } ;
struct bpf_prog {int len; int jited; void* bpf_func; } ;
struct TYPE_2__ {scalar_t__ kernel_toc; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct bpf_prog*,int *,struct codegen_context*,unsigned int*) ;
 int FUNC_2 (int *,struct codegen_context*) ;
 int FUNC_3 (struct bpf_prog*,int *,struct codegen_context*) ;
 int FUNC_4 (int,unsigned int,int,int *) ;
 int VAR_2 ;
 unsigned int* FUNC_5 (int,int,int ) ;
 int FUNC_6 (unsigned int*) ;
 TYPE_1__* VAR_3 ;
 int * FUNC_7 (unsigned int) ;
 int FUNC_8 (char*,int,unsigned int,scalar_t__) ;

void FUNC_9(struct bpf_prog *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;
 u32 *VAR_7 = ((void*)0);
 u32 *VAR_8;
 unsigned int *VAR_9;
 struct codegen_context VAR_10;
 int VAR_11;
 int VAR_12 = VAR_4->len;

 if (!VAR_2)
  return;

 VAR_9 = FUNC_5(VAR_12 + 1, sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0))
  return;
 VAR_10.idx = 0;
 VAR_10.seen = 0;
 VAR_10.pc_ret0 = -1;

 if (FUNC_1(VAR_4, 0, &VAR_10, VAR_9))

  goto out;






 FUNC_3(VAR_4, 0, &VAR_10);
 FUNC_2(0, &VAR_10);

 VAR_5 = VAR_10.idx * 4;
 VAR_6 = VAR_5 + VAR_0;
 VAR_7 = FUNC_7(VAR_6);
 if (!VAR_7)
  goto out;

 VAR_8 = VAR_7 + (VAR_0/4);


 for (VAR_11 = 1; VAR_11 < 3; VAR_11++) {

  VAR_10.idx = 0;
  FUNC_3(VAR_4, VAR_8, &VAR_10);
  FUNC_1(VAR_4, VAR_8, &VAR_10, VAR_9);
  FUNC_2(VAR_8, &VAR_10);

  if (VAR_2 > 1)
   FUNC_8("Pass %d: shrink = %d, seen = 0x%x\n", VAR_11,
    VAR_5 - (VAR_10.idx * 4), VAR_10.seen);
 }

 if (VAR_2 > 1)



  FUNC_4(VAR_12, VAR_5, VAR_11, VAR_8);

 FUNC_0(VAR_8, VAR_8 + (VAR_5/4));







 VAR_4->bpf_func = (void *)VAR_7;
 VAR_4->jited = 1;

out:
 FUNC_6(VAR_9);
 return;
}
