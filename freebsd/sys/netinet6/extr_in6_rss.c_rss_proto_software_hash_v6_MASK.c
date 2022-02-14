
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_short ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (struct in6_addr const*,struct in6_addr const*) ;
 int FUNC_3 (struct in6_addr const*,int ,struct in6_addr const*,int ) ;

int
FUNC_4(const struct in6_addr *VAR_8, const struct in6_addr *VAR_9,
    u_short VAR_10, u_short VAR_11, int VAR_12,
    uint32_t *VAR_13, uint32_t *VAR_14)
{
 uint32_t VAR_15;





 if ((VAR_12 == VAR_0) &&
     (FUNC_1() & VAR_6)) {
  VAR_15 = FUNC_3(VAR_8, VAR_10, VAR_9, VAR_11);
  *VAR_13 = VAR_15;
  *VAR_14 = VAR_3;
  return (0);
 } else if ((VAR_12 == VAR_1) &&
     (FUNC_1() & VAR_7)) {
  VAR_15 = FUNC_3(VAR_8, VAR_10, VAR_9, VAR_11);
  *VAR_13 = VAR_15;
  *VAR_14 = VAR_4;
  return (0);
 } else if (FUNC_1() & VAR_5) {

  VAR_15 = FUNC_2(VAR_8, VAR_9);
  *VAR_13 = VAR_15;
  *VAR_14 = VAR_2;
  return (0);
 }


 FUNC_0("no available hashtypes!\n");
 return (-1);
}
