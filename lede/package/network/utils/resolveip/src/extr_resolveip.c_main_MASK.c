
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sigaction {int * sa_handler; } ;
struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_addr; struct addrinfo* ai_next; int ai_flags; int ai_protocol; int ai_socktype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct addrinfo*) ;
 scalar_t__ FUNC_4 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (scalar_t__,void*,char*,int) ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,struct sigaction*,int *) ;

int FUNC_10(int VAR_10, char **VAR_11)
{
 int VAR_12 = 3;
 int VAR_13;
 char VAR_14[VAR_3];
 void *VAR_15;
 struct addrinfo *VAR_16, *VAR_17;
 struct sigaction VAR_18 = { .sa_handler = &VAR_7 };
 struct addrinfo VAR_19 = {
  .ai_family = VAR_2,
  .ai_socktype = VAR_6,
  .ai_protocol = VAR_4,
  .ai_flags = 0
 };

 while ((VAR_13 = FUNC_5(VAR_10, VAR_11, "46t:h")) > -1)
 {
  switch ((char)VAR_13)
  {
   case '4':
    VAR_19.ai_family = VAR_0;
    break;

   case '6':
    VAR_19.ai_family = VAR_1;
    break;

   case 't':
    VAR_12 = FUNC_1(VAR_8);
    if (VAR_12 <= 0)
     FUNC_8();
    break;

   case 'h':
    FUNC_8();
    break;
  }
 }

 if (!VAR_11[VAR_9])
  FUNC_8();

 FUNC_9(VAR_5, &VAR_18, ((void*)0));
 FUNC_0(VAR_12);

 if (FUNC_4(VAR_11[VAR_9], ((void*)0), &VAR_19, &VAR_16))
  FUNC_2(2);

 for (VAR_17 = VAR_16; VAR_17 != ((void*)0); VAR_17 = VAR_17->ai_next)
 {
  VAR_15 = (VAR_17->ai_family == VAR_0)
   ? (void *)&((struct sockaddr_in *)VAR_17->ai_addr)->sin_addr
   : (void *)&((struct sockaddr_in6 *)VAR_17->ai_addr)->sin6_addr
  ;

  if (!FUNC_6(VAR_17->ai_family, VAR_15, VAR_14, VAR_3 - 1))
   FUNC_2(3);

  FUNC_7("%s\n", VAR_14);
 }

 FUNC_3(VAR_16);
 FUNC_2(0);
}
