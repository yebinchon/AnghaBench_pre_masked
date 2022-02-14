
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; scalar_t__ h_addr; } ;
typedef int bdaddr_t ;
typedef int ba ;


 int VAR_0 ;
 int FUNC_0 (char const*,int *) ;
 struct hostent* FUNC_1 (char const*,int,int ) ;
 struct hostent* FUNC_2 (char const*) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_6(char const *VAR_1, int VAR_2)
{
 struct hostent *VAR_3 = ((void*)0);
 bdaddr_t VAR_4;
 char VAR_5[32];
 int VAR_6;

 if (FUNC_0(VAR_1, &VAR_4) == 1) {
  VAR_6 = 1;
  VAR_3 = FUNC_1((char const *) &VAR_4, sizeof(VAR_4),
     VAR_0);
 } else {
  VAR_6 = 0;
  VAR_3 = FUNC_2(VAR_1);
 }

 if (VAR_3 == ((void*)0)) {
  FUNC_4(VAR_6? FUNC_3(&VAR_4, VAR_5) : VAR_1);
  return (1);
 }

 if (VAR_2)
  FUNC_5("%s", VAR_6? VAR_3->h_name :
    FUNC_3((bdaddr_t *)(VAR_3->h_addr), VAR_5));
 else
  FUNC_5("Host %s has %s %s\n",
   VAR_6? FUNC_3(&VAR_4, VAR_5) : VAR_1,
   VAR_6? "name" : "address",
   VAR_6? VAR_3->h_name :
    FUNC_3((bdaddr_t *)(VAR_3->h_addr), VAR_5));

 return (0);
}
