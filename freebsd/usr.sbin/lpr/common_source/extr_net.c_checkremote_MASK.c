
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int remote; char* remote_host; int rp_matches_local; } ;
struct addrinfo {int ai_addrlen; int ai_addr; struct addrinfo* ai_next; void* ai_flags; void* ai_socktype; void* ai_family; } ;
typedef int lclhost ;
typedef int hints ;
typedef int h2 ;
typedef int h1 ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (char**,char*,char*,int ) ;
 void* VAR_5 ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int ,int ,char*,int,int *,int ,int ) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 scalar_t__ FUNC_7 (char*,char*) ;

char *
FUNC_8(struct printer *VAR_6)
{
 char VAR_7[VAR_1];
 struct addrinfo VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 char *VAR_13;
 int VAR_14, VAR_15;
 char VAR_16[VAR_2], VAR_17[VAR_2];

 if (!VAR_6->rp_matches_local) {
  VAR_6->remote = 1;
  return ((void*)0);
 }

 VAR_6->remote = 0;
 if (VAR_6->remote_host == ((void*)0))
  return ((void*)0);


 FUNC_4(VAR_7, sizeof(VAR_7));
 VAR_7[sizeof(VAR_7) - 1] = '\0';

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.ai_family = VAR_5;
 VAR_8.ai_socktype = VAR_4;
 VAR_8.ai_flags = VAR_0;
 if ((VAR_15 = FUNC_3(VAR_7, ((void*)0), &VAR_8, &VAR_9)) != 0) {
  FUNC_0(&VAR_13, "unable to get official name "
    "for local machine %s: %d",
    VAR_7, FUNC_2(VAR_15));
  return VAR_13;
 }


 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.ai_family = VAR_5;
 VAR_8.ai_socktype = VAR_4;
 VAR_8.ai_flags = VAR_0;
 if ((VAR_15 = FUNC_3(VAR_6->remote_host, ((void*)0),
     &VAR_8, &VAR_10)) != 0) {
  FUNC_0(&VAR_13, "unable to get address list for "
    "remote machine %s: %d",
    VAR_6->remote_host, FUNC_2(VAR_15));
  FUNC_1(VAR_9);
  return VAR_13;
 }

 VAR_14 = 0;
 for (VAR_11 = VAR_9; VAR_11; VAR_11 = VAR_11->ai_next) {
  VAR_16[0] = '\0';
  if (FUNC_5(VAR_11->ai_addr, VAR_11->ai_addrlen, VAR_16, sizeof(VAR_16),
    ((void*)0), 0, VAR_3) != 0)
   continue;
  for (VAR_12 = VAR_10; VAR_12; VAR_12 = VAR_12->ai_next) {
   VAR_17[0] = '\0';
   if (FUNC_5(VAR_12->ai_addr, VAR_12->ai_addrlen,
     VAR_17, sizeof(VAR_17), ((void*)0), 0,
     VAR_3) != 0)
    continue;
   if (FUNC_7(VAR_16, VAR_17) == 0)
    VAR_14++;
  }
 }





 if (VAR_14 == 0)
  VAR_6->remote = 1;
 FUNC_1(VAR_9);
 FUNC_1(VAR_10);
 return ((void*)0);
}
