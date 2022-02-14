
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_socktype; int ai_family; int ai_flags; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char const*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int ,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (struct addrinfo*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static struct addrinfo *
FUNC_4(char const *VAR_6, int VAR_7)
{
 struct addrinfo VAR_8, *VAR_9;
 int VAR_10;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.ai_flags = VAR_1;
 VAR_8.ai_family = VAR_0;
 VAR_8.ai_socktype = VAR_4;
 VAR_9 = ((void*)0);
 VAR_10 = FUNC_2(VAR_6, VAR_5, &VAR_8, &VAR_9);
 if (VAR_10 && (VAR_7 || VAR_10 != VAR_2))
  FUNC_0(VAR_3, "%s: %s", VAR_6, FUNC_1(VAR_10));
 return (VAR_9);
}
