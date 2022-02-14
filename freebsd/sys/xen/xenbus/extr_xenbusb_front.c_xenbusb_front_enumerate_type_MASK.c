
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbusb_softc {int xbs_node; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct xenbusb_softc* FUNC_0 (int ) ;
 int FUNC_1 (char const**,int ) ;
 int FUNC_2 (int ,char const*,char const*) ;
 int FUNC_3 (int ,int ,char const*,unsigned int*,char const***) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, const char *VAR_3)
{
 struct xenbusb_softc *VAR_4;
 const char **VAR_5;
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 VAR_4 = FUNC_0(VAR_2);
 VAR_8 = FUNC_3(VAR_1, VAR_4->xbs_node, VAR_3, &VAR_7, &VAR_5);
 if (VAR_8)
  return (VAR_8);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  FUNC_2(VAR_2, VAR_3, VAR_5[VAR_6]);

 FUNC_1(VAR_5, VAR_0);

 return (0);
}
