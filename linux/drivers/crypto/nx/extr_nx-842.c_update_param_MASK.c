
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx842_crypto_param {unsigned int iremain; unsigned int oremain; unsigned int in; unsigned int out; unsigned int ototal; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct nx842_crypto_param *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4)
{
 if (VAR_2->iremain < VAR_3)
  return -VAR_1;
 if (VAR_2->oremain < VAR_4)
  return -VAR_0;

 VAR_2->in += VAR_3;
 VAR_2->iremain -= VAR_3;
 VAR_2->out += VAR_4;
 VAR_2->oremain -= VAR_4;
 VAR_2->ototal += VAR_4;

 return 0;
}
