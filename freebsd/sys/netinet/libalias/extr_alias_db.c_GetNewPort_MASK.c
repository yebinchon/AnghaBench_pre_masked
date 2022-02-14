
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_short ;
struct libalias {int packetAliasMode; } ;
struct alias_link {int flags; void* alias_port; int link_type; int sockfd; int dst_port; int alias_addr; int dst_addr; void* src_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct alias_link* FUNC_0 (struct libalias*,int ,int ,int ,void*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct libalias*,void*,int *,int ) ;
 int FUNC_2 (struct libalias*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (void*) ;
 void* FUNC_6 (void*) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_7(struct libalias *VAR_10, struct alias_link *VAR_11, int VAR_12)
{
 int VAR_13;
 int VAR_14;
 u_short VAR_15;
 u_short VAR_16;

 FUNC_2(VAR_10);
 if (VAR_12 == VAR_2) {




  VAR_14 = VAR_3;

  if (VAR_10->packetAliasMode & VAR_7) {






   VAR_16 = VAR_11->src_port;
   VAR_15 = FUNC_6(VAR_16);
  } else {

   VAR_15 = FUNC_3() & VAR_1;
   VAR_15 += VAR_0;
   VAR_16 = FUNC_5(VAR_15);
  }
 } else if (VAR_12 >= 0 && VAR_12 < 0x10000) {
  VAR_11->alias_port = (u_short) VAR_12;
  return (0);
 } else {




  return (-1);
 }



 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  int VAR_17;
  struct alias_link *VAR_18;

  VAR_18 = FUNC_0(VAR_10, VAR_11->dst_addr, VAR_11->alias_addr,
      VAR_11->dst_port, VAR_16,
      VAR_11->link_type, 0);

  if (VAR_18 == ((void*)0))
   VAR_17 = 1;
  else if (!(VAR_11->flags & VAR_4)
      && (VAR_18->flags & VAR_4))
   VAR_17 = 1;
  else
   VAR_17 = 0;

  if (VAR_17) {

   if ((VAR_10->packetAliasMode & VAR_8)
       && (VAR_11->flags & VAR_4)
       && ((VAR_11->link_type == VAR_5) ||
       (VAR_11->link_type == VAR_6))) {
    if (FUNC_1(VAR_10, VAR_16, &VAR_11->sockfd, VAR_11->link_type)) {
     VAR_11->alias_port = VAR_16;
     return (0);
    }
   } else {

    VAR_11->alias_port = VAR_16;
    return (0);

   }

  }
  VAR_15 = FUNC_3() & VAR_1;
  VAR_15 += VAR_0;
  VAR_16 = FUNC_5(VAR_15);
 }






 return (-1);
}
