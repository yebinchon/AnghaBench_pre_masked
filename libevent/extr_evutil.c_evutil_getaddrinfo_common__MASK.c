
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct TYPE_3__ {int* s6_addr; } ;
struct sockaddr_in6 {unsigned int sin6_scope_id; void* sin_port; void* sin_family; TYPE_2__ sin_addr; void* sin6_port; void* sin6_family; TYPE_1__ sin6_addr; } ;
struct sockaddr_in {unsigned int sin6_scope_id; void* sin_port; void* sin_family; TYPE_2__ sin_addr; void* sin6_port; void* sin6_family; TYPE_1__ sin6_addr; } ;
struct sockaddr {int dummy; } ;
struct evutil_addrinfo {scalar_t__ ai_family; int ai_flags; int ai_protocol; } ;
typedef int sin6 ;
typedef int sin ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct evutil_addrinfo* FUNC_0 (struct evutil_addrinfo*,struct evutil_addrinfo*) ;
 int FUNC_1 (struct evutil_addrinfo*) ;
 int FUNC_2 (struct evutil_addrinfo*) ;
 int FUNC_3 (void*,char const*,TYPE_2__*) ;
 int FUNC_4 (void*,char const*,TYPE_1__*,unsigned int*) ;
 struct evutil_addrinfo* FUNC_5 (struct sockaddr*,int,struct evutil_addrinfo*) ;
 int FUNC_6 (char const*,char const*,struct evutil_addrinfo*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct sockaddr_in6*,int ,int) ;

int
FUNC_11(const char *VAR_11, const char *VAR_12,
    struct evutil_addrinfo *VAR_13, struct evutil_addrinfo **VAR_14, int *VAR_15)
{
 int VAR_16 = 0;
 unsigned int VAR_17;
 const char *VAR_18;

 if (VAR_11 == ((void*)0) && VAR_12 == ((void*)0))
  return VAR_7;


 if (VAR_13->ai_family != VAR_10 && VAR_13->ai_family != VAR_8 &&
     VAR_13->ai_family != VAR_9)
  return VAR_4;

 FUNC_2(VAR_13);


 VAR_18 = FUNC_7(VAR_13->ai_protocol);
 if (VAR_12) {


  VAR_16 = FUNC_6(VAR_12, VAR_18, VAR_13);
  if (VAR_16 < 0) {
   return VAR_7;
  }
 }



 if (VAR_11 == ((void*)0)) {
  struct evutil_addrinfo *VAR_19=((void*)0), *VAR_20=((void*)0);
  if (VAR_13->ai_family != VAR_8) {
   struct sockaddr_in6 VAR_21;
   FUNC_10(&VAR_21, 0, sizeof(VAR_21));
   VAR_21 = VAR_1;
   VAR_21 = FUNC_9(VAR_16);
   if (VAR_13->ai_flags & VAR_3) {

   } else {

    VAR_21[15] = 1;
   }
   VAR_20 = FUNC_5((struct sockaddr*)&VAR_21,
       sizeof(VAR_21), VAR_13);
   if (!VAR_20)
    return VAR_5;
  }

  if (VAR_13->ai_family != VAR_9) {
   struct sockaddr_in VAR_22;
   FUNC_10(&VAR_22, 0, sizeof(VAR_22));
   VAR_22.sin_family = VAR_0;
   VAR_22.sin_port = FUNC_9(VAR_16);
   if (VAR_13->ai_flags & VAR_3) {

   } else {

    VAR_22.sin_addr.s_addr = FUNC_8(0x7f000001);
   }
   VAR_19 = FUNC_5((struct sockaddr*)&VAR_22,
       sizeof(VAR_22), VAR_13);
   if (!VAR_19) {
    if (VAR_20)
     FUNC_1(VAR_20);
    return VAR_5;
   }
  }
  *VAR_14 = FUNC_0(VAR_19, VAR_20);
  return 0;
 }




 if (VAR_13->ai_family == VAR_9 || VAR_13->ai_family == VAR_10) {
  struct sockaddr_in6 VAR_23;
  FUNC_10(&VAR_23, 0, sizeof(VAR_23));
  if (1 == FUNC_4(
   VAR_1, VAR_11, &VAR_23, &VAR_17)) {

   VAR_23 = VAR_1;
   VAR_23 = FUNC_9(VAR_16);
   VAR_23 = VAR_17;
   *VAR_14 = FUNC_5((struct sockaddr*)&VAR_23,
       sizeof(VAR_23), VAR_13);
   if (!*VAR_14)
    return VAR_5;
   return 0;
  }
 }


 if (VAR_13->ai_family == VAR_8 || VAR_13->ai_family == VAR_10) {
  struct sockaddr_in VAR_24;
  FUNC_10(&VAR_24, 0, sizeof(VAR_24));
  if (1==FUNC_3(VAR_0, VAR_11, &VAR_24.sin_addr)) {

   VAR_24.sin_family = VAR_0;
   VAR_24.sin_port = FUNC_9(VAR_16);
   *VAR_14 = FUNC_5((struct sockaddr*)&VAR_24,
       sizeof(VAR_24), VAR_13);
   if (!*VAR_14)
    return VAR_5;
   return 0;
  }
 }




 if ((VAR_13->ai_flags & VAR_2)) {

  return VAR_7;
 }
 *VAR_15 = VAR_16;
 return VAR_6;
}
