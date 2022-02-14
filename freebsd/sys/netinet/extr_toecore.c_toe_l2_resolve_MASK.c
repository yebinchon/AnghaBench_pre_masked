
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct toedev {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct ifnet {scalar_t__ if_type; scalar_t__ if_pcp; } ;




 int VAR_0 ;
 int FUNC_0 (int,int,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ifnet*,int*) ;
 int FUNC_2 (struct ifnet*,int*) ;
 int FUNC_3 (struct ifnet*,int ,int *,struct sockaddr*,int *,int *,int *) ;
 int FUNC_4 (struct ifnet*,int ,int *,struct sockaddr*,int *,int *,int *) ;

int
FUNC_5(struct toedev *VAR_3, struct ifnet *VAR_4, struct sockaddr *VAR_5,
    uint8_t *VAR_6, uint16_t *VAR_7)
{
 int VAR_8;
 uint16_t VAR_9, VAR_10;

 switch (VAR_5->sa_family) {
 default:
  return (VAR_0);
 }

 if (VAR_8 == 0) {
  VAR_9 = 0xfff;
  VAR_10 = 0;
  if (VAR_4->if_type == VAR_2) {
   FUNC_2(VAR_4, &VAR_9);
   FUNC_1(VAR_4, &VAR_10);
  } else if (VAR_4->if_pcp != VAR_1) {
   VAR_9 = 0;
   VAR_10 = VAR_4->if_pcp;
  }
  *VAR_7 = FUNC_0(VAR_9, VAR_10, 0);
 }

 return (VAR_8);
}
