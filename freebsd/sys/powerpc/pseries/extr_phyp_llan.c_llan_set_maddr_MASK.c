
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct llan_softc {int unit; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static u_int
FUNC_3(void *VAR_2, struct sockaddr_dl *VAR_3, u_int VAR_4)
{
 struct llan_softc *VAR_5 = VAR_2;
 uint64_t VAR_6 = 0;

 FUNC_1((uint8_t *)&VAR_6 + 2, FUNC_0(VAR_3), 6);
 FUNC_2(VAR_0, VAR_5->unit, VAR_1, VAR_6);

 return (1);
}
