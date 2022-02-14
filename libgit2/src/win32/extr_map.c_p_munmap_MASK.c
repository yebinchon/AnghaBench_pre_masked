
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * fmh; int * data; } ;
typedef TYPE_1__ git_map ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(git_map *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(VAR_1 != ((void*)0));

 if (VAR_1->data) {
  if (!FUNC_1(VAR_1->data)) {
   FUNC_3(VAR_0, "failed to munmap. Could not unmap view of file");
   VAR_2 = -1;
  }
  VAR_1->data = ((void*)0);
 }

 if (VAR_1->fmh) {
  if (!FUNC_0(VAR_1->fmh)) {
   FUNC_3(VAR_0, "failed to munmap. Could not close handle");
   VAR_2 = -1;
  }
  VAR_1->fmh = ((void*)0);
 }

 return VAR_2;
}
