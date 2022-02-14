
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dl {scalar_t__ sdl_nlen; size_t sdl_len; int * sdl_data; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct if_msghdr {scalar_t__ ifm_type; int ifm_addrs; int ifm_msglen; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct sockaddr*,struct sockaddr**) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_7 (int*,int ,char*,size_t*,int *,int ) ;

struct sockaddr_dl *
FUNC_8(char *VAR_7)
{
 int VAR_8[] = {VAR_2, VAR_1, 0, 0, VAR_3, 0};
 char *VAR_9, *VAR_10, *VAR_11;
 size_t VAR_12;
 struct if_msghdr *VAR_13;
 struct sockaddr *VAR_14, *VAR_15[VAR_5];
 struct sockaddr_dl *VAR_16 = ((void*)0), *VAR_17;

 if (FUNC_7(VAR_8, FUNC_4(VAR_8), ((void*)0), &VAR_12, ((void*)0), 0) < 0)
  return(((void*)0));
 if ((VAR_9 = FUNC_2(VAR_12)) == ((void*)0))
  return(((void*)0));
 if (FUNC_7(VAR_8, FUNC_4(VAR_8), VAR_9, &VAR_12, ((void*)0), 0) < 0) {
  FUNC_0(VAR_9);
  return (((void*)0));
 }

 VAR_11 = VAR_9 + VAR_12;
 for (VAR_10 = VAR_9; VAR_10 < VAR_11; VAR_10 += VAR_13->ifm_msglen) {
  VAR_13 = (struct if_msghdr *)(void *)VAR_10;
  if (VAR_13->ifm_type == VAR_6) {
   VAR_14 = (struct sockaddr *)(VAR_13 + 1);
   FUNC_1(VAR_13->ifm_addrs, VAR_14, VAR_15);
   if ((VAR_14 = VAR_15[VAR_4]) != ((void*)0)) {
    if (VAR_14->sa_family == VAR_0) {
     VAR_16 = (struct sockaddr_dl *)(void *)VAR_14;
     if (FUNC_5(VAR_7) != VAR_16->sdl_nlen)
      continue;
     if (FUNC_6(&VAR_16->sdl_data[0],
          VAR_7,
          VAR_16->sdl_nlen) == 0) {
      break;
     }
    }
   }
  }
 }
 if (VAR_10 == VAR_11) {

  FUNC_0(VAR_9);
  return (((void*)0));
 }

 if ((VAR_17 = FUNC_2(VAR_16->sdl_len)) == ((void*)0)) {
  FUNC_0(VAR_9);
  return (((void*)0));
 }
 FUNC_3((caddr_t)VAR_17, (caddr_t)VAR_16, VAR_16->sdl_len);

 FUNC_0(VAR_9);
 return (VAR_17);
}
