
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct jit_context {int cleanup_addr; } ;
struct bpf_prog {int len; int jited; int jited_len; void* bpf_func; int jit_requested; } ;
struct bpf_binary_header {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 struct bpf_binary_header* FUNC_1 (int,int **,int,int ) ;
 int FUNC_2 (struct bpf_binary_header*) ;
 int FUNC_3 (struct bpf_binary_header*) ;
 struct bpf_prog* FUNC_4 (struct bpf_prog*) ;
 int FUNC_5 (int,int,int,int *) ;
 int VAR_1 ;
 int FUNC_6 (struct bpf_prog*,struct bpf_prog*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct bpf_prog*,int*,int *,int,struct jit_context*) ;
 int VAR_2 ;
 int FUNC_9 (int*) ;
 int* FUNC_10 (int,int,int ) ;
 int FUNC_11 (char*,int,int) ;

struct bpf_prog *FUNC_12(struct bpf_prog *VAR_3)
{
 struct bpf_binary_header *VAR_4 = ((void*)0);
 struct bpf_prog *VAR_5, *VAR_6 = VAR_3;
 int VAR_7, VAR_8 = 0;
 struct jit_context VAR_9 = {};
 bool VAR_10 = 0;
 u8 *VAR_11 = ((void*)0);
 int *VAR_12;
 int VAR_13;
 int VAR_14;

 if (!VAR_3->jit_requested)
  return VAR_6;

 VAR_5 = FUNC_4(VAR_3);




 if (FUNC_0(VAR_5))
  return VAR_6;
 if (VAR_5 != VAR_3) {
  VAR_10 = 1;
  VAR_3 = VAR_5;
 }

 VAR_12 = FUNC_10(VAR_3->len, sizeof(*VAR_12), VAR_0);
 if (!VAR_12) {
  VAR_3 = VAR_6;
  goto out;
 }





 for (VAR_7 = 0, VAR_14 = 0; VAR_14 < VAR_3->len; VAR_14++) {
  VAR_7 += 64;
  VAR_12[VAR_14] = VAR_7;
 }
 VAR_9.cleanup_addr = VAR_7;







 for (VAR_13 = 0; VAR_13 < 20 || VAR_11; VAR_13++) {
  VAR_7 = FUNC_8(VAR_3, VAR_12, VAR_11, VAR_8, &VAR_9);
  if (VAR_7 <= 0) {
out_image:
   VAR_11 = ((void*)0);
   if (VAR_4)
    FUNC_2(VAR_4);
   VAR_3 = VAR_6;
   goto out_addrs;
  }
  if (VAR_11) {
   if (VAR_7 != VAR_8) {
    FUNC_11("bpf_jit: proglen=%d != oldproglen=%d\n",
           VAR_7, VAR_8);
    goto out_image;
   }
   break;
  }
  if (VAR_7 == VAR_8) {
   VAR_4 = FUNC_1(VAR_7, &VAR_11,
            1, VAR_2);
   if (!VAR_4) {
    VAR_3 = VAR_6;
    goto out_addrs;
   }
  }
  VAR_8 = VAR_7;
  FUNC_7();
 }

 if (VAR_1 > 1)
  FUNC_5(VAR_3->len, VAR_7, VAR_13 + 1, VAR_11);

 if (VAR_11) {
  FUNC_3(VAR_4);
  VAR_3->bpf_func = (void *)VAR_11;
  VAR_3->jited = 1;
  VAR_3->jited_len = VAR_7;
 } else {
  VAR_3 = VAR_6;
 }

out_addrs:
 FUNC_9(VAR_12);
out:
 if (VAR_10)
  FUNC_6(VAR_3, VAR_3 == VAR_6 ?
        VAR_5 : VAR_6);
 return VAR_3;
}
