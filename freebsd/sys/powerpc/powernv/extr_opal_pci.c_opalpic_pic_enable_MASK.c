
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct opalpci_softc {int phb_id; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,void**) ;
 struct opalpci_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,void**) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(device_t VAR_2, u_int VAR_3, u_int VAR_4, void **VAR_5)
{
 struct opalpci_softc *VAR_6 = FUNC_1(VAR_2);

 FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_0, VAR_6->phb_id, VAR_3, VAR_5);
}
