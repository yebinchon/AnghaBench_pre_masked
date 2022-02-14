
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct qib_devdata {TYPE_1__* cspec; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ cntrnamelen; int ncntrs; int * cntrs; } ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qib_devdata*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct qib_devdata *VAR_2, loff_t VAR_3, char **VAR_4,
         u64 **VAR_5)
{
 u32 VAR_6;

 if (VAR_4) {
  VAR_6 = VAR_2->cspec->cntrnamelen;
  if (VAR_3 >= VAR_6)
   VAR_6 = 0;
  else
   *VAR_4 = (char *)VAR_1;
 } else {
  u64 *VAR_7 = VAR_2->cspec->cntrs;
  int VAR_8;

  VAR_6 = VAR_2->cspec->ncntrs * sizeof(u64);
  if (!VAR_7 || VAR_3 >= VAR_6) {

   VAR_6 = 0;
   goto done;
  }
  if (VAR_3 >= VAR_6) {
   VAR_6 = 0;
   goto done;
  }
  *VAR_5 = VAR_7;
  for (VAR_8 = 0; VAR_8 < VAR_2->cspec->ncntrs; VAR_8++)
   *VAR_7++ = FUNC_0(VAR_2, VAR_0[VAR_8]);
 }
done:
 return VAR_6;
}
