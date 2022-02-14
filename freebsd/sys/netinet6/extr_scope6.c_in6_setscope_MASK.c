
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct scope6_id {int* s6id_list; } ;
struct in6_addr {int * s6_addr16; } ;
struct ifnet {int if_flags; int if_index; } ;
struct epoch_tracker {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct epoch_tracker) ;
 int FUNC_2 (struct epoch_tracker) ;
 struct scope6_id* FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct in6_addr*) ;

int
FUNC_6(struct in6_addr *VAR_5, struct ifnet *VAR_6, u_int32_t *VAR_7)
{
 int VAR_8;
 u_int32_t VAR_9 = 0;
 struct scope6_id *VAR_10;





 if (FUNC_0(VAR_5)) {
  if (!(VAR_6->if_flags & VAR_1))
   return (VAR_0);
 } else {
  VAR_8 = FUNC_5(VAR_5);
  if (VAR_8 == VAR_3 ||
      VAR_8 == VAR_4) {





   VAR_9 = VAR_6->if_index;
   VAR_5->s6_addr16[1] = FUNC_4(VAR_9 & 0xffff);
  } else if (VAR_8 != VAR_2) {
   struct epoch_tracker VAR_11;

   FUNC_1(VAR_11);
   VAR_10 = FUNC_3(VAR_6);
   VAR_9 = VAR_10->s6id_list[VAR_8];
   FUNC_2(VAR_11);
  }
 }

 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_9;

 return (0);
}
