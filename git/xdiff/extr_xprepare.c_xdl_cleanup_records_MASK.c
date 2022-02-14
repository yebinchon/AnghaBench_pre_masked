
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t ha; } ;
typedef TYPE_1__ xrecord_t ;
struct TYPE_9__ {TYPE_3__** rcrecs; } ;
typedef TYPE_2__ xdlclassifier_t ;
struct TYPE_10__ {long len2; long len1; } ;
typedef TYPE_3__ xdlclass_t ;
struct TYPE_11__ {int nrec; long dstart; long dend; long* rindex; size_t* ha; int* rchg; long nreff; TYPE_1__** recs; } ;
typedef TYPE_4__ xdfile_t ;


 long VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 long FUNC_1 (int) ;
 int FUNC_2 (char*,long,size_t,long) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(xdlclassifier_t *VAR_1, xdfile_t *VAR_2, xdfile_t *VAR_3) {
 long VAR_4, VAR_5, VAR_6, VAR_7;
 xrecord_t **VAR_8;
 xdlclass_t *VAR_9;
 char *VAR_10, *VAR_11, *VAR_12;

 if (!(VAR_10 = (char *) FUNC_4(VAR_2->nrec + VAR_3->nrec + 2))) {

  return -1;
 }
 FUNC_0(VAR_10, 0, VAR_2->nrec + VAR_3->nrec + 2);
 VAR_11 = VAR_10;
 VAR_12 = VAR_11 + VAR_2->nrec + 1;

 if ((VAR_7 = FUNC_1(VAR_2->nrec)) > VAR_0)
  VAR_7 = VAR_0;
 for (VAR_4 = VAR_2->dstart, VAR_8 = &VAR_2->recs[VAR_2->dstart]; VAR_4 <= VAR_2->dend; VAR_4++, VAR_8++) {
  VAR_9 = VAR_1->rcrecs[(*VAR_8)->ha];
  VAR_5 = VAR_9 ? VAR_9->len2 : 0;
  VAR_11[VAR_4] = (VAR_5 == 0) ? 0: (VAR_5 >= VAR_7) ? 2: 1;
 }

 if ((VAR_7 = FUNC_1(VAR_3->nrec)) > VAR_0)
  VAR_7 = VAR_0;
 for (VAR_4 = VAR_3->dstart, VAR_8 = &VAR_3->recs[VAR_3->dstart]; VAR_4 <= VAR_3->dend; VAR_4++, VAR_8++) {
  VAR_9 = VAR_1->rcrecs[(*VAR_8)->ha];
  VAR_5 = VAR_9 ? VAR_9->len1 : 0;
  VAR_12[VAR_4] = (VAR_5 == 0) ? 0: (VAR_5 >= VAR_7) ? 2: 1;
 }

 for (VAR_6 = 0, VAR_4 = VAR_2->dstart, VAR_8 = &VAR_2->recs[VAR_2->dstart];
      VAR_4 <= VAR_2->dend; VAR_4++, VAR_8++) {
  if (VAR_11[VAR_4] == 1 ||
      (VAR_11[VAR_4] == 2 && !FUNC_2(VAR_11, VAR_4, VAR_2->dstart, VAR_2->dend))) {
   VAR_2->rindex[VAR_6] = VAR_4;
   VAR_2->ha[VAR_6] = (*VAR_8)->ha;
   VAR_6++;
  } else
   VAR_2->rchg[VAR_4] = 1;
 }
 VAR_2->nreff = VAR_6;

 for (VAR_6 = 0, VAR_4 = VAR_3->dstart, VAR_8 = &VAR_3->recs[VAR_3->dstart];
      VAR_4 <= VAR_3->dend; VAR_4++, VAR_8++) {
  if (VAR_12[VAR_4] == 1 ||
      (VAR_12[VAR_4] == 2 && !FUNC_2(VAR_12, VAR_4, VAR_3->dstart, VAR_3->dend))) {
   VAR_3->rindex[VAR_6] = VAR_4;
   VAR_3->ha[VAR_6] = (*VAR_8)->ha;
   VAR_6++;
  } else
   VAR_3->rchg[VAR_4] = 1;
 }
 VAR_3->nreff = VAR_6;

 FUNC_3(VAR_10);

 return 0;
}
