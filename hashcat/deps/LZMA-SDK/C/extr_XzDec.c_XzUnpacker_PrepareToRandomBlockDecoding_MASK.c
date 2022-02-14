
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int decodeOnlyOneBlock; scalar_t__ pos; int state; int sha; scalar_t__ numBlocks; scalar_t__ indexSize; } ;
typedef TYPE_1__ CXzUnpacker ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

void FUNC_1(CXzUnpacker *VAR_1)
{
  VAR_1->indexSize = 0;
  VAR_1->numBlocks = 0;
  FUNC_0(&VAR_1->sha);
  VAR_1->state = VAR_0;
  VAR_1->pos = 0;
  VAR_1->decodeOnlyOneBlock = 1;
}
