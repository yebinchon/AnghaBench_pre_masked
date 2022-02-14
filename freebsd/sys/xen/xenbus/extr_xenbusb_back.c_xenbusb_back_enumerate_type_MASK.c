
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct xenbusb_softc {int xbs_node; } ;
struct sbuf {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct xenbusb_softc* FUNC_0 (int ) ;
 int FUNC_1 (char const**,int ) ;
 char const* FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (int ,char const*,char const*) ;
 int FUNC_5 (int ,int ,char const*,size_t*,char const***) ;
 struct sbuf* FUNC_6 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, const char *VAR_3)
{
 struct xenbusb_softc *VAR_4;
 const char **VAR_5;
 u_int VAR_6;
 u_int VAR_7;
 int VAR_8;

 VAR_4 = FUNC_0(VAR_2);
 VAR_8 = FUNC_5(VAR_1, VAR_4->xbs_node, VAR_3, &VAR_7, &VAR_5);
 if (VAR_8)
  return (VAR_8);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct sbuf *VAR_9;
  const char *VAR_10;
  const char **VAR_11;
  u_int VAR_12;
  u_int VAR_13;

  VAR_10 = VAR_5[VAR_6];

  VAR_9 = FUNC_6(VAR_3, VAR_10);
  VAR_8 = FUNC_5(VAR_1, VAR_4->xbs_node, FUNC_2(VAR_9),
      &VAR_13, &VAR_11);
  FUNC_3(VAR_9);
  if (VAR_8)
   break;

  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
   const char *VAR_14;
   struct sbuf *VAR_15;

   VAR_14 = VAR_11[VAR_12];
   VAR_15 = FUNC_6(VAR_10, VAR_14);
   FUNC_4(VAR_2, VAR_3, FUNC_2(VAR_15));
   FUNC_3(VAR_15);
  }
  FUNC_1(VAR_11, VAR_0);
 }

 FUNC_1(VAR_5, VAR_0);

 return (0);
}
