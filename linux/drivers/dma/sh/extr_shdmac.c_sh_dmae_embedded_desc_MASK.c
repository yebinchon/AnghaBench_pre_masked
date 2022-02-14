
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shdma_desc {int dummy; } ;
struct sh_dmae_desc {struct shdma_desc shdma_desc; } ;



__attribute__((used)) static struct shdma_desc *FUNC_0(void *VAR_0, int VAR_1)
{
 return &((struct sh_dmae_desc *)VAR_0)[VAR_1].shdma_desc;
}
