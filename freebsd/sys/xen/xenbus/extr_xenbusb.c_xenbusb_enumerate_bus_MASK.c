
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct xenbusb_softc {int xbs_dev; int xbs_node; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int VAR_1 ;
 int FUNC_1 (char const**,int ) ;
 int FUNC_2 (int ,int ,char*,size_t*,char const***) ;

__attribute__((used)) static int
FUNC_3(struct xenbusb_softc *VAR_2)
{
 const char **VAR_3;
 u_int VAR_4;
 u_int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2->xbs_node, "", &VAR_5, &VAR_3);
 if (VAR_6)
  return (VAR_6);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_0(VAR_2->xbs_dev, VAR_3[VAR_4]);

 FUNC_1(VAR_3, VAR_0);

 return (0);
}
