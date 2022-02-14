
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mif6 {int m6_flags; struct ifnet* m6_ifp; } ;
struct ifnet {int dummy; } ;
typedef int mifi_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct ifnet*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mif6* VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(mifi_t *VAR_7)
{
 struct mif6 *VAR_8 = VAR_3 + *VAR_7;
 mifi_t VAR_9;
 struct ifnet *VAR_10;

 FUNC_0();

 if (*VAR_7 >= VAR_5)
  return (VAR_1);
 if (VAR_8->m6_ifp == ((void*)0))
  return (VAR_1);

 if (!(VAR_8->m6_flags & VAR_2)) {

  VAR_10 = VAR_8->m6_ifp;
  FUNC_3(VAR_10, 0);
 } else {
  if (VAR_6 != (mifi_t)-1 &&
      VAR_4 != ((void*)0)) {
   FUNC_4(VAR_4);
   FUNC_5(VAR_4);
   VAR_6 = (mifi_t)-1;
   VAR_4 = ((void*)0);
  }
 }

 FUNC_2((caddr_t)VAR_8, sizeof(*VAR_8));


 for (VAR_9 = VAR_5; VAR_9 > 0; VAR_9--)
  if (VAR_3[VAR_9 - 1].m6_ifp)
   break;
 VAR_5 = VAR_9;
 FUNC_1(VAR_0, "mif %d, nummifs %d", *VAR_7, VAR_5);

 return (0);
}
