
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct fhreturn {int fhr_vers; int fhr_numsecflavors; int* fhr_secflavors; int fhr_fh; } ;
typedef scalar_t__ caddr_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_3(XDR *VAR_3, caddr_t VAR_4)
{
 struct fhreturn *VAR_5 = (struct fhreturn *)VAR_4;
 u_long VAR_6 = 0, VAR_7, VAR_8;
 int VAR_9;

 if (!FUNC_1(VAR_3, &VAR_6))
  return (0);
 switch (VAR_5->fhr_vers) {
 case 1:
  return (FUNC_2(VAR_3, (caddr_t)&VAR_5->fhr_fh, VAR_1));
 case 3:
  VAR_7 = VAR_2;
  if (!FUNC_1(VAR_3, &VAR_7))
   return (0);
  if (!FUNC_2(VAR_3, (caddr_t)&VAR_5->fhr_fh, VAR_7))
   return (0);
  if (VAR_5->fhr_numsecflavors) {
   if (!FUNC_0(VAR_3, &VAR_5->fhr_numsecflavors))
    return (0);
   for (VAR_9 = 0; VAR_9 < VAR_5->fhr_numsecflavors; VAR_9++)
    if (!FUNC_0(VAR_3, &VAR_5->fhr_secflavors[VAR_9]))
     return (0);
   return (1);
  } else {
   VAR_8 = VAR_0;
   VAR_7 = 1;
   if (!FUNC_1(VAR_3, &VAR_7))
    return (0);
   return (FUNC_1(VAR_3, &VAR_8));
  }
 }
 return (0);
}
