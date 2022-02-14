
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct qib_pportdata {TYPE_1__* cpspec; } ;
struct qib_devdata {TYPE_2__* cspec; struct qib_pportdata* pport; } ;
typedef size_t loff_t ;
struct TYPE_4__ {size_t portcntrnamelen; int nportcntrs; } ;
struct TYPE_3__ {int * portcntrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct qib_pportdata*,int) ;
 int FUNC_1 (struct qib_pportdata*,int) ;
 int FUNC_2 (struct qib_pportdata*,int) ;

__attribute__((used)) static u32 FUNC_3(struct qib_devdata *VAR_5, loff_t VAR_6, u32 VAR_7,
      char **VAR_8, u64 **VAR_9)
{
 u32 VAR_10;

 if (VAR_8) {
  VAR_10 = VAR_5->cspec->portcntrnamelen;
  if (VAR_6 >= VAR_10)
   VAR_10 = 0;
  else
   *VAR_8 = (char *)VAR_4;
 } else {
  struct qib_pportdata *VAR_11 = &VAR_5->pport[VAR_7];
  u64 *VAR_12 = VAR_11->cpspec->portcntrs;
  int VAR_13;

  VAR_10 = VAR_5->cspec->nportcntrs * sizeof(u64);
  if (!VAR_12 || VAR_6 >= VAR_10) {

   VAR_10 = 0;
   goto done;
  }
  *VAR_9 = VAR_12;
  for (VAR_13 = 0; VAR_13 < VAR_5->cspec->nportcntrs; VAR_13++) {
   if (VAR_3[VAR_13] & VAR_2)
    *VAR_12++ = FUNC_0(VAR_11,
     VAR_3[VAR_13] &
     VAR_1);
   else if (VAR_3[VAR_13] & VAR_0)
    *VAR_12++ = FUNC_2(VAR_11,
        VAR_3[VAR_13] &
         VAR_1);
   else
    *VAR_12++ = FUNC_1(VAR_11,
        VAR_3[VAR_13]);
  }
 }
done:
 return VAR_10;
}
