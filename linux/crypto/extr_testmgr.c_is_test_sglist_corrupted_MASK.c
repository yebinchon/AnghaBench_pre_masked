
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct test_sglist {unsigned int nents; TYPE_2__* sgl_saved; TYPE_1__* sgl; } ;
struct TYPE_4__ {scalar_t__ page_link; scalar_t__ offset; scalar_t__ length; } ;
struct TYPE_3__ {scalar_t__ page_link; scalar_t__ offset; scalar_t__ length; } ;



__attribute__((used)) static bool FUNC_0(const struct test_sglist *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nents; VAR_1++) {
  if (VAR_0->sgl[VAR_1].page_link != VAR_0->sgl_saved[VAR_1].page_link)
   return 1;
  if (VAR_0->sgl[VAR_1].offset != VAR_0->sgl_saved[VAR_1].offset)
   return 1;
  if (VAR_0->sgl[VAR_1].length != VAR_0->sgl_saved[VAR_1].length)
   return 1;
 }
 return 0;
}
