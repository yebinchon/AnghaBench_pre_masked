
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {size_t n_edep; size_t n_pdep; size_t n_fdep; size_t n_bdep; size_t n_rdep; int portdir; TYPE_5__* rdep; TYPE_4__* bdep; TYPE_3__* fdep; TYPE_2__* pdep; TYPE_1__* edep; } ;
struct TYPE_14__ {int name; void* p; } ;
struct TYPE_13__ {int name; void* p; } ;
struct TYPE_12__ {int name; void* p; } ;
struct TYPE_11__ {int name; void* p; } ;
struct TYPE_10__ {int name; void* p; } ;
typedef TYPE_6__ PORT ;


 void* FUNC_0 (TYPE_6__**,int ,size_t,int ,int ) ;

__attribute__((used)) static void
FUNC_1(PORT ** VAR_0, size_t VAR_1, PORT * VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->n_edep; VAR_3++)
  VAR_2->edep[VAR_3].p = FUNC_0(VAR_0, 0, VAR_1, VAR_2->edep[VAR_3].name, VAR_2->portdir);
 for (VAR_3 = 0; VAR_3 < VAR_2->n_pdep; VAR_3++)
  VAR_2->pdep[VAR_3].p = FUNC_0(VAR_0, 0, VAR_1, VAR_2->pdep[VAR_3].name, VAR_2->portdir);
 for (VAR_3 = 0; VAR_3 < VAR_2->n_fdep; VAR_3++)
  VAR_2->fdep[VAR_3].p = FUNC_0(VAR_0, 0, VAR_1, VAR_2->fdep[VAR_3].name, VAR_2->portdir);
 for (VAR_3 = 0; VAR_3 < VAR_2->n_bdep; VAR_3++)
  VAR_2->bdep[VAR_3].p = FUNC_0(VAR_0, 0, VAR_1, VAR_2->bdep[VAR_3].name, VAR_2->portdir);
 for (VAR_3 = 0; VAR_3 < VAR_2->n_rdep; VAR_3++)
  VAR_2->rdep[VAR_3].p = FUNC_0(VAR_0, 0, VAR_1, VAR_2->rdep[VAR_3].name, VAR_2->portdir);
}
