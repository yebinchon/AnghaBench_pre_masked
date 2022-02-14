
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_filespec {int * data; scalar_t__ should_munmap; scalar_t__ should_free; int size; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct diff_filespec *VAR_0)
{
 if (VAR_0->should_free)
  FUNC_0(VAR_0->data);
 else if (VAR_0->should_munmap)
  FUNC_1(VAR_0->data, VAR_0->size);

 if (VAR_0->should_free || VAR_0->should_munmap) {
  VAR_0->should_free = VAR_0->should_munmap = 0;
  VAR_0->data = ((void*)0);
 }
}
