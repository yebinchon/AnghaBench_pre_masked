
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_long ;
typedef void* u_int32_t ;
typedef scalar_t__ u_int ;
struct in6_addr {int dummy; } ;
struct in_conninfo {struct in6_addr inc6_faddr; int inc_flags; } ;
struct ifnet {int dummy; } ;
typedef int inc ;


 int VAR_0 ;
 void* FUNC_0 (struct ifnet*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (struct in_conninfo*,int) ;
 void* FUNC_2 (void*,void*) ;
 void* FUNC_3 (struct in_conninfo*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_4, const struct in6_addr *VAR_5, u_long VAR_6,
    u_long *VAR_7, int *VAR_8, u_int VAR_9)
{
 u_long VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_6 > 0) {
  u_int32_t VAR_13;
  struct in_conninfo VAR_14;

  FUNC_1(&VAR_14, sizeof(VAR_14));
  VAR_14.inc_flags |= VAR_1;
  VAR_14.inc6_faddr = *VAR_5;

  VAR_13 = FUNC_0(VAR_4);


  if (VAR_9 != VAR_2)
   VAR_10 = FUNC_3(&VAR_14);

  if (VAR_10)
   VAR_10 = FUNC_2(VAR_10, VAR_6);
  else
   VAR_10 = VAR_6;
  if (VAR_10 == 0)
   VAR_10 = VAR_13;
  else if (VAR_10 < VAR_3) {
   VAR_11 = 1;
   VAR_10 = VAR_3;
  }
 } else if (VAR_4) {
  VAR_10 = FUNC_0(VAR_4);
 } else
  VAR_12 = VAR_0;

 *VAR_7 = VAR_10;
 if (VAR_8)
  *VAR_8 = VAR_11;
 return (VAR_12);
}
