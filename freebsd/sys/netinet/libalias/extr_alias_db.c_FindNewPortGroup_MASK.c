
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
struct libalias {int packetAliasMode; } ;
struct in_addr {int dummy; } ;
struct alias_link {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct alias_link* FUNC_0 (struct libalias*,struct in_addr,struct in_addr,int,int,int,int ) ;
 int VAR_4 ;


 int FUNC_1 (struct libalias*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_8 ;

int
FUNC_6(struct libalias *VAR_9,
    struct in_addr VAR_10,
    struct in_addr VAR_11,
    u_short VAR_12,
    u_short VAR_13,
    u_short VAR_14,
    u_char VAR_15,
    u_char VAR_16)
{
 int VAR_17, VAR_18;
 int VAR_19;
 u_short VAR_20;
 int VAR_21;

 FUNC_1(VAR_9);




 switch (VAR_15) {
 case 128:
  VAR_21 = VAR_6;
  break;
 case 129:
  VAR_21 = VAR_5;
  break;
 default:
  return (0);
  break;
 }





 VAR_19 = VAR_4;

 if (VAR_9->packetAliasMode & VAR_7) {





  VAR_20 = FUNC_5(VAR_12);

 } else {


  if (VAR_16 == VAR_3)
   VAR_20 = FUNC_2() & VAR_2;
  else
   VAR_20 = FUNC_2() & VAR_1;

  VAR_20 += VAR_0;
 }


 for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++) {

  struct alias_link *VAR_22;

  for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++)
   if ((VAR_22 = FUNC_0(VAR_9, VAR_10,
       VAR_11, VAR_13, FUNC_4(VAR_20 + VAR_18),
       VAR_21, 0)) != ((void*)0))
    break;


  if (VAR_18 == VAR_14)
   return (FUNC_4(VAR_20));


  if (VAR_16 == VAR_3)
   VAR_20 = FUNC_2() & VAR_2;
  else
   VAR_20 = FUNC_2() & VAR_1;

  VAR_20 += VAR_0;
 }






 return (0);
}
