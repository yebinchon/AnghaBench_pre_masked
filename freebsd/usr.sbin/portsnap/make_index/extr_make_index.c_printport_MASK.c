
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* p; } ;
struct TYPE_6__ {size_t n_edep; size_t n_pdep; size_t n_fdep; size_t n_bdep; size_t n_rdep; char* pkgname; char* portdir; char* prefix; char* comment; char* pkgdescr; char* maintainer; char* categories; char* www; TYPE_3__* fdep; TYPE_3__* pdep; TYPE_3__* edep; TYPE_3__* rdep; TYPE_3__* bdep; } ;
struct TYPE_5__ {int pkgname; } ;
typedef TYPE_2__ PORT ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_3__*,size_t) ;

__attribute__((used)) static void
FUNC_2(PORT * VAR_0)
{
 size_t VAR_1;

 FUNC_1(VAR_0->edep, VAR_0->n_edep);
 FUNC_1(VAR_0->pdep, VAR_0->n_pdep);
 FUNC_1(VAR_0->fdep, VAR_0->n_fdep);
 FUNC_1(VAR_0->bdep, VAR_0->n_bdep);
 FUNC_1(VAR_0->rdep, VAR_0->n_rdep);

 FUNC_0("%s|%s|%s|%s|%s|%s|%s|",
     VAR_0->pkgname, VAR_0->portdir, VAR_0->prefix, VAR_0->comment, VAR_0->pkgdescr,
     VAR_0->maintainer, VAR_0->categories);
 for (VAR_1 = 0; VAR_1 < VAR_0->n_bdep; VAR_1++)
  FUNC_0("%s%s", VAR_1 ? " " : "", VAR_0->bdep[VAR_1].p->pkgname);
 FUNC_0("|");
 for (VAR_1 = 0; VAR_1 < VAR_0->n_rdep; VAR_1++)
  FUNC_0("%s%s", VAR_1 ? " " : "", VAR_0->rdep[VAR_1].p->pkgname);
 FUNC_0("|");
 FUNC_0("%s|", VAR_0->www);
 for (VAR_1 = 0; VAR_1 < VAR_0->n_edep; VAR_1++)
  FUNC_0("%s%s", VAR_1 ? " " : "", VAR_0->edep[VAR_1].p->pkgname);
 FUNC_0("|");
 for (VAR_1 = 0; VAR_1 < VAR_0->n_pdep; VAR_1++)
  FUNC_0("%s%s", VAR_1 ? " " : "", VAR_0->pdep[VAR_1].p->pkgname);
 FUNC_0("|");
 for (VAR_1 = 0; VAR_1 < VAR_0->n_fdep; VAR_1++)
  FUNC_0("%s%s", VAR_1 ? " " : "", VAR_0->fdep[VAR_1].p->pkgname);
 FUNC_0("\n");
}
