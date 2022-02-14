
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nrec; TYPE_1__** recs; } ;
typedef TYPE_2__ xdfile_t ;
struct TYPE_4__ {long size; char* ptr; } ;



__attribute__((used)) static int FUNC_0(xdfile_t *VAR_0, int VAR_1)
{
 long VAR_2;

 if (VAR_1 < VAR_0->nrec - 1)

  return (VAR_2 = VAR_0->recs[VAR_1]->size) > 1 &&
   VAR_0->recs[VAR_1]->ptr[VAR_2 - 2] == '\r';
 if (!VAR_0->nrec)

  return -1;
 if ((VAR_2 = VAR_0->recs[VAR_1]->size) &&
   VAR_0->recs[VAR_1]->ptr[VAR_2 - 1] == '\n')

  return VAR_2 > 1 &&
   VAR_0->recs[VAR_1]->ptr[VAR_2 - 2] == '\r';
 if (!VAR_1)

  return -1;

 return (VAR_2 = VAR_0->recs[VAR_1 - 1]->size) > 1 &&
  VAR_0->recs[VAR_1 - 1]->ptr[VAR_2 - 2] == '\r';
}
