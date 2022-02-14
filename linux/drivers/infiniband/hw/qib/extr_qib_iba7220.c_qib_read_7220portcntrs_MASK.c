
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct qib_pportdata {int dummy; } ;
struct qib_devdata {TYPE_1__* cspec; struct qib_pportdata* pport; } ;
typedef size_t loff_t ;
struct TYPE_2__ {size_t portcntrnamelen; int nportcntrs; int * portcntrs; } ;


 int VAR_0 ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct qib_pportdata*,int) ;
 int FUNC_1 (struct qib_devdata*,int) ;

__attribute__((used)) static u32 FUNC_2(struct qib_devdata *VAR_3, loff_t VAR_4, u32 VAR_5,
      char **VAR_6, u64 **VAR_7)
{
 u32 VAR_8;

 if (!VAR_3->cspec->portcntrs) {
  VAR_8 = 0;
  goto done;
 }
 if (VAR_6) {
  *VAR_6 = (char *)VAR_2;
  VAR_8 = VAR_3->cspec->portcntrnamelen;
  if (VAR_4 >= VAR_8)
   VAR_8 = 0;
 } else {
  u64 *VAR_9 = VAR_3->cspec->portcntrs;
  struct qib_pportdata *VAR_10 = &VAR_3->pport[VAR_5];
  int VAR_11;

  VAR_8 = VAR_3->cspec->nportcntrs * sizeof(u64);
  if (!VAR_9 || VAR_4 >= VAR_8) {

   VAR_8 = 0;
   goto done;
  }
  *VAR_7 = VAR_9;
  for (VAR_11 = 0; VAR_11 < VAR_3->cspec->nportcntrs; VAR_11++) {
   if (VAR_1[VAR_11] & VAR_0)
    *VAR_9++ = FUNC_0(VAR_10,
     VAR_1[VAR_11] &
     ~VAR_0);
   else
    *VAR_9++ = FUNC_1(VAR_3,
        VAR_1[VAR_11]);
  }
 }
done:
 return VAR_8;
}
