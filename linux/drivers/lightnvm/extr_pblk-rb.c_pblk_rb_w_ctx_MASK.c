
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_w_ctx {int dummy; } ;
struct pblk_rb {TYPE_1__* entries; } ;
struct TYPE_2__ {struct pblk_w_ctx w_ctx; } ;


 unsigned int FUNC_0 (struct pblk_rb*,unsigned int,int ) ;

struct pblk_w_ctx *FUNC_1(struct pblk_rb *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0, VAR_1, 0);

 return &VAR_0->entries[VAR_2].w_ctx;
}
