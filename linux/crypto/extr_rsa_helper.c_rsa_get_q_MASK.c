
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsa_key {size_t n_sz; size_t q_sz; void const* q; } ;


 int VAR_0 ;

int FUNC_0(void *VAR_1, size_t VAR_2, unsigned char VAR_3,
       const void *VAR_4, size_t VAR_5)
{
 struct rsa_key *VAR_6 = VAR_1;


 if (!VAR_4 || !VAR_5 || VAR_5 > VAR_6->n_sz)
  return -VAR_0;

 VAR_6->q = VAR_4;
 VAR_6->q_sz = VAR_5;

 return 0;
}
