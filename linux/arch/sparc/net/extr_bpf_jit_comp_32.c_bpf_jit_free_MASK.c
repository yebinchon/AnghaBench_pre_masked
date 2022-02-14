
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int bpf_func; scalar_t__ jited; } ;


 int FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct bpf_prog *VAR_0)
{
 if (VAR_0->jited)
  FUNC_1(VAR_0->bpf_func);

 FUNC_0(VAR_0);
}
