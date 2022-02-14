
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ha; } ;
typedef TYPE_1__ xrecord_t ;
struct TYPE_6__ {long nrec; long dstart; long dend; TYPE_1__** recs; } ;
typedef TYPE_2__ xdfile_t ;


 long FUNC_0 (long,long) ;

__attribute__((used)) static int FUNC_1(xdfile_t *VAR_0, xdfile_t *VAR_1) {
 long VAR_2, VAR_3;
 xrecord_t **VAR_4, **VAR_5;

 VAR_4 = VAR_0->recs;
 VAR_5 = VAR_1->recs;
 for (VAR_2 = 0, VAR_3 = FUNC_0(VAR_0->nrec, VAR_1->nrec); VAR_2 < VAR_3;
      VAR_2++, VAR_4++, VAR_5++)
  if ((*VAR_4)->ha != (*VAR_5)->ha)
   break;

 VAR_0->dstart = VAR_1->dstart = VAR_2;

 VAR_4 = VAR_0->recs + VAR_0->nrec - 1;
 VAR_5 = VAR_1->recs + VAR_1->nrec - 1;
 for (VAR_3 -= VAR_2, VAR_2 = 0; VAR_2 < VAR_3; VAR_2++, VAR_4--, VAR_5--)
  if ((*VAR_4)->ha != (*VAR_5)->ha)
   break;

 VAR_0->dend = VAR_0->nrec - VAR_2 - 1;
 VAR_1->dend = VAR_1->nrec - VAR_2 - 1;

 return 0;
}
