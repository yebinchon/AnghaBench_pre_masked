
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ asize; int * ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2(git_buf *VAR_1)
{
 if (!VAR_1) return;

 if (VAR_1->asize > 0 && VAR_1->ptr != ((void*)0) && VAR_1->ptr != VAR_0)
  FUNC_0(VAR_1->ptr);

 FUNC_1(VAR_1, 0);
}
