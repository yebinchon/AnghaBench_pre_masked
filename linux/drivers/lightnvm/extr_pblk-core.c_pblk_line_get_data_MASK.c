
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_line {int dummy; } ;
struct TYPE_2__ {struct pblk_line* data_line; } ;
struct pblk {TYPE_1__ l_mg; } ;



struct pblk_line *FUNC_0(struct pblk *VAR_0)
{
 return VAR_0->l_mg.data_line;
}
