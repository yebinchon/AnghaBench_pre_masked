
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dl {int sdl_nlen; int sdl_data; } ;
struct if_msghdr {scalar_t__ ifm_type; int ifm_msglen; } ;
typedef int ULONG ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int*,int,char*,size_t*,int *,int ) ;

int
FUNC_6(CHAR *VAR_6, ULONG *VAR_7)
{
 int VAR_8[6];
 size_t VAR_9;
 struct if_msghdr *VAR_10;
 struct sockaddr_dl *VAR_11;
 char *VAR_12, *VAR_13, *VAR_14;
 char *VAR_15;
 int VAR_16;
 int VAR_17, VAR_18 = 0;

 VAR_15 = VAR_6;
 VAR_16 = 0;

 FUNC_0(VAR_15, *VAR_7);

 VAR_9 = 0;
 VAR_8[0] = VAR_0;
 VAR_8[1] = VAR_3;
 VAR_8[2] = 0;
 VAR_8[3] = 0;
 VAR_8[4] = VAR_2;
 VAR_8[5] = 0;

 if (FUNC_5 (VAR_8, 6, ((void*)0), &VAR_9, ((void*)0), 0) < 0)
  return(VAR_1);

 VAR_12 = FUNC_2 (VAR_9);
 if (VAR_12 == ((void*)0))
  return(VAR_1);

 if (FUNC_5 (VAR_8, 6, VAR_12, &VAR_9, ((void*)0), 0) < 0) {
  FUNC_1(VAR_12);
  return(VAR_1);
 }

 VAR_13 = VAR_12 + VAR_9;



 VAR_14 = VAR_12;
 while (VAR_14 < VAR_13) {
  VAR_10 = (struct if_msghdr *)VAR_14;
  if (VAR_10->ifm_type == VAR_4) {
   VAR_11 = (struct sockaddr_dl *)(VAR_10 + 1);
   if (FUNC_4(VAR_11->sdl_data, "wlan", VAR_11->sdl_nlen)) {
    if ((VAR_16 + VAR_11->sdl_nlen) > *VAR_7) {
     FUNC_1(VAR_12);
     return(VAR_1);
    }
    FUNC_3(VAR_15, VAR_11->sdl_data, VAR_11->sdl_nlen);
    VAR_15 += (VAR_11->sdl_nlen + 1);
    VAR_16 += (VAR_11->sdl_nlen + 1);
    VAR_18++;
   }
  }
  VAR_14 += VAR_10->ifm_msglen;
 }




 VAR_15++;
 VAR_16++;
 VAR_14 = VAR_12;
 while (VAR_14 < VAR_13) {
  VAR_10 = (struct if_msghdr *)VAR_14;
  if (VAR_10->ifm_type == VAR_4) {
   VAR_11 = (struct sockaddr_dl *)(VAR_10 + 1);
   if (FUNC_4(VAR_11->sdl_data, "wlan", VAR_11->sdl_nlen)) {
    if ((VAR_16 + VAR_11->sdl_nlen) > *VAR_7) {
     FUNC_1(VAR_12);
     return(VAR_1);
    }
    FUNC_3(VAR_15, VAR_11->sdl_data, VAR_11->sdl_nlen);
    VAR_15 += (VAR_11->sdl_nlen + 1);
    VAR_16 += (VAR_11->sdl_nlen + 1);
    VAR_18++;
   }
  }
  VAR_14 += VAR_10->ifm_msglen;
 }

 FUNC_1 (VAR_12);

 *VAR_7 = VAR_16 + 1;

 return(VAR_5);
}
