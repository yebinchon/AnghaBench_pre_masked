
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int ai_addrlen; int ai_addr; int ai_socktype; int ai_family; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_socktype; int ai_family; } ;
typedef int sa_family_t ;
typedef int qboolean ;
typedef int hints ;
struct TYPE_2__ {int integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sockaddr* FUNC_1 (struct sockaddr*,int ) ;
 int FUNC_2 (struct sockaddr*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,int *,struct sockaddr*,struct sockaddr**) ;
 int FUNC_5 (struct sockaddr*,int ,int) ;
 int FUNC_6 (struct sockaddr*,char,int) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static qboolean FUNC_7(const char *VAR_10, struct sockaddr *VAR_11, int VAR_12, sa_family_t VAR_13)
{
 struct addrinfo VAR_14;
 struct addrinfo *VAR_15 = ((void*)0);
 struct addrinfo *VAR_16 = ((void*)0);
 struct addrinfo *VAR_17;
 int VAR_18;

 FUNC_6(VAR_11, '\0', sizeof(*VAR_11));
 FUNC_6(&VAR_14, '\0', sizeof(VAR_14));

 VAR_17 = &VAR_14;
 VAR_17->ai_family = VAR_13;
 VAR_17->ai_socktype = VAR_6;

 VAR_18 = FUNC_4(VAR_10, ((void*)0), VAR_17, &VAR_15);

 if(!VAR_18)
 {
  if(VAR_13 == VAR_2)
  {

   if(VAR_7->integer & VAR_5)
   {
    if(VAR_7->integer & VAR_4)
     VAR_16 = FUNC_1(VAR_15, VAR_1);

    if(!VAR_16 && (VAR_7->integer & VAR_3))
     VAR_16 = FUNC_1(VAR_15, VAR_0);
   }
   else
   {
    if(VAR_7->integer & VAR_3)
     VAR_16 = FUNC_1(VAR_15, VAR_0);

    if(!VAR_16 && (VAR_7->integer & VAR_4))
     VAR_16 = FUNC_1(VAR_15, VAR_1);
   }
  }
  else
   VAR_16 = FUNC_1(VAR_15, VAR_13);

  if(VAR_16)
  {
   if(VAR_16->ai_addrlen > VAR_12)
    VAR_16->ai_addrlen = VAR_12;

   FUNC_5(VAR_11, VAR_16->ai_addr, VAR_16->ai_addrlen);
   FUNC_2(VAR_15);

   return VAR_9;
  }
  else
   FUNC_0("Sys_StringToSockaddr: Error resolving %s: No address of required type found.\n", VAR_10);
 }
 else
  FUNC_0("Sys_StringToSockaddr: Error resolving %s: %s\n", VAR_10, FUNC_3(VAR_18));

 if(VAR_15)
  FUNC_2(VAR_15);

 return VAR_8;
}
