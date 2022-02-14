
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct ucred {int dummy; } ;
struct msdosfsmount {scalar_t__ pm_freeclustercount; } ;
struct denode {int de_Attributes; scalar_t__ de_FileSize; int de_flag; int * de_vnode; struct msdosfsmount* de_pmp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct msdosfsmount*) ;
 scalar_t__ FUNC_1 (struct msdosfsmount*,scalar_t__) ;
 int FUNC_2 (struct denode*,scalar_t__,int ,struct ucred*) ;
 int FUNC_3 (struct denode*,scalar_t__,int *,int *,int ) ;

int
FUNC_4(struct denode *VAR_8, u_long VAR_9, struct ucred *VAR_10)
{
 struct msdosfsmount *VAR_11 = VAR_8->de_pmp;
 u_long VAR_12;
 int VAR_13;




 if (VAR_8->de_vnode != ((void*)0) && !FUNC_0(VAR_11))
  return (VAR_5);




 if (VAR_8->de_Attributes & VAR_0)
  return (VAR_6);

 if (VAR_9 <= VAR_8->de_FileSize)
  return (VAR_4);




 VAR_12 = FUNC_1(VAR_11, VAR_9) - FUNC_1(VAR_11, VAR_8->de_FileSize);
 if (VAR_12 > 0) {
  if (VAR_12 > VAR_11->pm_freeclustercount)
   return (VAR_7);
  VAR_13 = FUNC_3(VAR_8, VAR_12, ((void*)0), ((void*)0), VAR_1);
  if (VAR_13) {

   (void) FUNC_2(VAR_8, VAR_8->de_FileSize, 0, VAR_10);
   return (VAR_13);
  }
 }






 VAR_8->de_FileSize = VAR_9;
 VAR_8->de_flag |= VAR_3 | VAR_2;
 return 0;
}
