
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_ng {int sg_data; } ;
struct sockaddr_dl {char* sdl_data; int sdl_nlen; } ;
struct sockaddr {int sa_family; int sa_len; scalar_t__ sa_data; } ;
typedef int buf ;






 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (struct sockaddr*,struct sockaddr*) ;
 int VAR_1 ;
 char* FUNC_2 (struct sockaddr*,int) ;
 int FUNC_3 (struct sockaddr*) ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static const char *
FUNC_7(struct sockaddr *VAR_2, struct sockaddr *VAR_3, int VAR_4)
{
 static char VAR_5[128];
 const char *VAR_6;

 if (VAR_2 == ((void*)0))
  return ("null");

 switch(VAR_2->sa_family) {
 case 131:
  if (VAR_4 & VAR_0)
   VAR_6 = FUNC_2(VAR_2, VAR_1);
  else if (VAR_3)
   VAR_6 = FUNC_1(VAR_2, VAR_3);
  else
   VAR_6 = FUNC_1(VAR_2, ((void*)0));
  break;
 case 128:
     {
  FUNC_5(VAR_5, ((struct sockaddr_ng *)VAR_2)->sg_data,
      sizeof(VAR_5));
  VAR_6 = VAR_5;
  break;
     }
 case 129:
     {
   VAR_6 = FUNC_2(VAR_2, 1);
  break;
     }
 default:
     {
  u_char *VAR_7 = (u_char *)VAR_2->sa_data, *VAR_8;
  char *VAR_9, *VAR_10;

  VAR_9 = VAR_5;
  VAR_8 = VAR_2->sa_len + (u_char *) VAR_2;
  VAR_10 = VAR_9 + sizeof(VAR_5) - sizeof(" ffff");
  FUNC_4(VAR_9, sizeof(VAR_5), "(%d)", VAR_2->sa_family);
  VAR_9 += FUNC_6(VAR_9);
  while (VAR_7 < VAR_8 && VAR_9 < VAR_10) {
   FUNC_4(VAR_9, sizeof(" ff"), " %02x", *VAR_7++);
   VAR_9 += FUNC_6(VAR_9);
   if (VAR_7 < VAR_8) {
       FUNC_4(VAR_9, sizeof("ff"), "%02x", *VAR_7++);
       VAR_9 += FUNC_6(VAR_9);
   }
  }
  VAR_6 = VAR_5;
     }
 }

 return (VAR_6);
}
