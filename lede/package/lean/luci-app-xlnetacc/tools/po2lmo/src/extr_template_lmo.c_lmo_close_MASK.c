
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; int size; int * mmap; } ;
typedef TYPE_1__ lmo_archive_t ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(lmo_archive_t *VAR_1)
{
 if (VAR_1 != ((void*)0))
 {
  if ((VAR_1->mmap != ((void*)0)) && (VAR_1->mmap != VAR_0))
   FUNC_2(VAR_1->mmap, VAR_1->size);

  FUNC_0(VAR_1->fd);
  FUNC_1(VAR_1);

  VAR_1 = ((void*)0);
 }
}
