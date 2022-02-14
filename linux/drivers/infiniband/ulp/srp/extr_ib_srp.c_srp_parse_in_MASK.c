
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net*,int ,char*,char*,struct sockaddr_storage*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,char const*,struct sockaddr_storage*) ;
 scalar_t__ FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_4, struct sockaddr_storage *VAR_5,
   const char *VAR_6, bool *VAR_7)
{
 char *VAR_8, *VAR_9 = FUNC_2(VAR_6, VAR_3);
 char *VAR_10;
 int VAR_11;

 if (!VAR_9)
  return -VAR_2;
 VAR_10 = FUNC_6(VAR_9, ':');
 if (VAR_10 && FUNC_4(VAR_10, ']'))
  VAR_10 = ((void*)0);
 if (VAR_10)
  *VAR_10++ = '\0';
 if (VAR_7)
  *VAR_7 = VAR_10 != ((void*)0);
 VAR_11 = FUNC_0(VAR_4, VAR_0, VAR_9, VAR_10, VAR_5);
 if (VAR_11 && VAR_9[0]) {
  VAR_8 = VAR_9 + FUNC_5(VAR_9) - 1;
  if (VAR_9[0] == '[' && *VAR_8 == ']') {
   *VAR_8 = '\0';
   VAR_11 = FUNC_0(VAR_4, VAR_1, VAR_9 + 1,
         VAR_10, VAR_5);
  }
 }
 FUNC_1(VAR_9);
 FUNC_3("%s -> %pISpfsc\n", VAR_6, VAR_5);
 return VAR_11;
}
