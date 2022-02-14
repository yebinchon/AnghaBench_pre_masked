
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* elf_file_t ;
struct TYPE_6__ {scalar_t__ size; scalar_t__ nprogtab; int nrel; int nrela; TYPE_1__* ef_efile; struct TYPE_6__* shstrtab; struct TYPE_6__* ddbstrtab; struct TYPE_6__* ddbsymtab; struct TYPE_6__* relatab; struct TYPE_6__* rela; struct TYPE_6__* reltab; struct TYPE_6__* rel; struct TYPE_6__* progtab; struct TYPE_6__* address; struct TYPE_6__* e_shdr; struct TYPE_6__* ef_name; int ef_fd; } ;
struct TYPE_5__ {int * ef_ef; int * ef_ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(elf_file_t VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0->ef_fd);
 if (VAR_0->ef_name)
  FUNC_1(VAR_0->ef_name);
 if (VAR_0->e_shdr != ((void*)0))
  FUNC_1(VAR_0->e_shdr);
 if (VAR_0->size != 0)
  FUNC_1(VAR_0->address);
 if (VAR_0->nprogtab != 0)
  FUNC_1(VAR_0->progtab);
 if (VAR_0->nrel != 0) {
  for (VAR_1 = 0; VAR_1 < VAR_0->nrel; VAR_1++)
   if (VAR_0->reltab[VAR_1].rel != ((void*)0))
    FUNC_1(VAR_0->reltab[VAR_1].rel);
  FUNC_1(VAR_0->reltab);
 }
 if (VAR_0->nrela != 0) {
  for (VAR_1 = 0; VAR_1 < VAR_0->nrela; VAR_1++)
   if (VAR_0->relatab[VAR_1].rela != ((void*)0))
    FUNC_1(VAR_0->relatab[VAR_1].rela);
  FUNC_1(VAR_0->relatab);
 }
 if (VAR_0->ddbsymtab != ((void*)0))
  FUNC_1(VAR_0->ddbsymtab);
 if (VAR_0->ddbstrtab != ((void*)0))
  FUNC_1(VAR_0->ddbstrtab);
 if (VAR_0->shstrtab != ((void*)0))
  FUNC_1(VAR_0->shstrtab);
 VAR_0->ef_efile->ef_ops = ((void*)0);
 VAR_0->ef_efile->ef_ef = ((void*)0);
 FUNC_1(VAR_0);

 return (0);
}
