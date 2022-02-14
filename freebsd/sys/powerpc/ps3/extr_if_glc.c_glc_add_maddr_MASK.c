
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct glc_softc {int sc_dev; int sc_bus; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static u_int
FUNC_3(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 struct glc_softc *VAR_4 = VAR_1;
 uint64_t VAR_5;






 if (VAR_3 + 1 == 32)
  return (0);

 VAR_5 = 0;
 FUNC_2(&((uint8_t *)(&VAR_5))[2], FUNC_0(VAR_2), VAR_0);
 FUNC_1(VAR_4->sc_bus, VAR_4->sc_dev, VAR_5, 0);

 return (1);
}
