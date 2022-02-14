
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {scalar_t__ jited; scalar_t__ bpf_func; } ;
struct bpf_binary_header {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct bpf_binary_header*) ;
 int FUNC_1 (struct bpf_prog*) ;

void FUNC_2(struct bpf_prog *VAR_1)
{
 unsigned long VAR_2 = (unsigned long)VAR_1->bpf_func & VAR_0;
 struct bpf_binary_header *VAR_3 = (void *)VAR_2;

 if (VAR_1->jited)
  FUNC_0(VAR_3);

 FUNC_1(VAR_1);
}
