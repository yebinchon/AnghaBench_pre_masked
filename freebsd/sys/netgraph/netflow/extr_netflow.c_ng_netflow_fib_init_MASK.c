
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct fib_export {int dummy; } ;
typedef TYPE_1__* priv_p ;
typedef TYPE_2__* fib_export_p ;
struct TYPE_11__ {int fib; int domain_id; int export9_mtx; int export_mtx; } ;
struct TYPE_10__ {int nfinfo_alloc_fibs; int * fib_data; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int,TYPE_2__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (uintptr_t volatile*,uintptr_t,uintptr_t) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int *,int ) ;
 TYPE_2__* FUNC_7 (TYPE_1__*,int) ;

int
FUNC_8(priv_p VAR_6, int VAR_7)
{
 fib_export_p VAR_8 = FUNC_7(VAR_6, VAR_7);

 FUNC_0(VAR_1, "ng_netflow(): fib init: %d", VAR_7);

 if (VAR_8 != ((void*)0))
  return (0);

 if ((VAR_8 = FUNC_4(sizeof(struct fib_export), VAR_3,
     VAR_4 | VAR_5)) == ((void*)0))
  return (VAR_0);

 FUNC_6(&VAR_8->export_mtx, "export dgram lock", ((void*)0), VAR_2);
 FUNC_6(&VAR_8->export9_mtx, "export9 dgram lock", ((void*)0), VAR_2);
 VAR_8->fib = VAR_7;
 VAR_8->domain_id = VAR_7;

 if (FUNC_2((volatile uintptr_t *)&VAR_6->fib_data[VAR_7],
     (uintptr_t)((void*)0), (uintptr_t)VAR_8) == 0) {

  FUNC_1(VAR_1, "ng_netflow(): fib init: %d setup %p but got %p",
      VAR_7, VAR_8, FUNC_7(VAR_6, VAR_7));
  FUNC_5(&VAR_8->export_mtx);
  FUNC_5(&VAR_8->export9_mtx);
  FUNC_3(VAR_8, VAR_3);
 } else {

  FUNC_1(VAR_1, "ng_netflow(): fib %d setup to %p (%p)",
      VAR_7, VAR_8, FUNC_7(VAR_6, VAR_7));
  VAR_6->nfinfo_alloc_fibs++;
 }

 return (0);
}
