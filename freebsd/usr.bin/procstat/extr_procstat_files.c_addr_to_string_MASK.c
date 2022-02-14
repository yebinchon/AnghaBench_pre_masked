
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_un {char* sun_path; } ;
struct sockaddr_storage {int ss_family; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in6 {int sin6_port; TYPE_1__ sin6_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
typedef int buffer2 ;





 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int const,TYPE_1__*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct sockaddr_storage *VAR_2, char *VAR_3, int VAR_4)
{
 char VAR_5[VAR_1];
 struct sockaddr_in6 *VAR_6;
 struct sockaddr_in *VAR_7;
 struct sockaddr_un *VAR_8;

 switch (VAR_2->ss_family) {
 case 128:
  VAR_8 = (struct sockaddr_un *)VAR_2;
  if (FUNC_4(VAR_8->sun_path) == 0)
   FUNC_3(VAR_3, "-", VAR_4);
  else
   FUNC_3(VAR_3, VAR_8->sun_path, VAR_4);
  break;

 case 130:
  VAR_7 = (struct sockaddr_in *)VAR_2;
  if (VAR_7->sin_addr.s_addr == VAR_0)
      FUNC_2(VAR_3, VAR_4, "%s:%d", "*",
          FUNC_1(VAR_7->sin_port));
  else if (FUNC_0(130, &VAR_7->sin_addr, VAR_5,
      sizeof(VAR_5)) != ((void*)0))
   FUNC_2(VAR_3, VAR_4, "%s:%d", VAR_5,
              FUNC_1(VAR_7->sin_port));
  break;

 case 129:
  VAR_6 = (struct sockaddr_in6 *)VAR_2;
  if (FUNC_0(129, &VAR_6->sin6_addr, VAR_5,
      sizeof(VAR_5)) != ((void*)0))
   FUNC_2(VAR_3, VAR_4, "%s.%d", VAR_5,
       FUNC_1(VAR_6->sin6_port));
  else
   FUNC_3(VAR_3, "-", VAR_4);
  break;

 default:
  FUNC_3(VAR_3, "", VAR_4);
  break;
 }
}
