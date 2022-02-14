
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_next; char* ai_canonname; int ai_socktype; int ai_family; int ai_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (char*,struct addrinfo*) ;
 int VAR_5 ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,int ) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (struct addrinfo*) ;
 int FUNC_9 (char*,char*,int ) ;

void
FUNC_10(char *VAR_6)
{
 int VAR_7, VAR_8;
 char *VAR_9;
 struct addrinfo *VAR_10, *VAR_11;
 static struct addrinfo VAR_12;

 VAR_9 = FUNC_7(VAR_6, '@');
 if (VAR_9 == ((void*)0))
  return;
 *VAR_9++ = '\0';
 FUNC_6(VAR_1, VAR_4);
 FUNC_0(VAR_3);

 VAR_12.ai_flags = VAR_0;
 VAR_12.ai_family = VAR_5;
 VAR_12.ai_socktype = VAR_2;

 VAR_7 = FUNC_4(VAR_9, "finger", &VAR_12, &VAR_11);
 if (VAR_7) {
  FUNC_9("%s: %s", VAR_9, FUNC_3(VAR_7));
  return;
 }

 VAR_8 = (VAR_11->ai_next) != 0;


 if (VAR_11->ai_canonname == 0)
  FUNC_5("[%s]\n", VAR_9);
 else
  FUNC_5("[%s]\n", VAR_11->ai_canonname);

 for (VAR_10 = VAR_11; VAR_10 != ((void*)0); VAR_10 = VAR_10->ai_next) {
  if (VAR_8)
   FUNC_8(VAR_10);

  VAR_7 = FUNC_1(VAR_6, VAR_10);
  if (!VAR_7)
   break;
 }
 FUNC_0(0);
 FUNC_2(VAR_11);
}
