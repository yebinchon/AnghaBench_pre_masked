
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ recursed; void* www; int n_rdep; void* rdep; int n_bdep; void* bdep; int n_fdep; void* fdep; int n_pdep; void* pdep; int n_edep; void* edep; void* categories; void* maintainer; void* pkgdescr; void* comment; void* prefix; void* portdir; void* pkgname; } ;
typedef TYPE_1__ PORT ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,char*) ;
 void* FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (char**,char*) ;

__attribute__((used)) static PORT *
FUNC_6(char * VAR_0)
{
 PORT * VAR_1;
 size_t VAR_2, VAR_3;


 for (VAR_3 = VAR_2 = 0; VAR_0[VAR_2] != 0; VAR_2++)
  if (VAR_0[VAR_2] == '|')
   VAR_3++;
 if (VAR_3 != 12)
  FUNC_1(1, "Port describe line is corrupt:\n%s\n", VAR_0);

 VAR_1 = FUNC_3(sizeof(PORT));
 if (VAR_1 == ((void*)0))
  FUNC_0(1, "malloc(PORT)");

 VAR_1->pkgname = FUNC_4(FUNC_5(&VAR_0, "|"));
 VAR_1->portdir = FUNC_4(FUNC_5(&VAR_0, "|"));
 VAR_1->prefix = FUNC_4(FUNC_5(&VAR_0, "|"));
 VAR_1->comment = FUNC_4(FUNC_5(&VAR_0, "|"));
 VAR_1->pkgdescr = FUNC_4(FUNC_5(&VAR_0, "|"));
 VAR_1->maintainer = FUNC_4(FUNC_5(&VAR_0, "|"));
 VAR_1->categories = FUNC_4(FUNC_5(&VAR_0, "|"));
 VAR_1->edep = FUNC_2(FUNC_5(&VAR_0, "|"), &VAR_1->n_edep);
 VAR_1->pdep = FUNC_2(FUNC_5(&VAR_0, "|"), &VAR_1->n_pdep);
 VAR_1->fdep = FUNC_2(FUNC_5(&VAR_0, "|"), &VAR_1->n_fdep);
 VAR_1->bdep = FUNC_2(FUNC_5(&VAR_0, "|"), &VAR_1->n_bdep);
 VAR_1->rdep = FUNC_2(FUNC_5(&VAR_0, "|"), &VAR_1->n_rdep);
 VAR_1->www = FUNC_4(FUNC_5(&VAR_0, "|"));

 VAR_1->recursed = 0;






 return VAR_1;
}
