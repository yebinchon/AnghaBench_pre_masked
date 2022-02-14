
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_pdata {int dummy; } ;
struct spu {struct spu_pdata* pdata; } ;



__attribute__((used)) static struct spu_pdata *FUNC_0(struct spu *VAR_0)
{
 return VAR_0->pdata;
}
