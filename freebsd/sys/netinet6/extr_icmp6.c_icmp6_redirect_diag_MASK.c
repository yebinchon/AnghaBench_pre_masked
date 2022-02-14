
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 char* FUNC_0 (char*,struct in6_addr*) ;
 int FUNC_1 (char*,int,char*,char*,char*,char*) ;

__attribute__((used)) static const char *
FUNC_2(struct in6_addr *VAR_1, struct in6_addr *VAR_2,
    struct in6_addr *VAR_3)
{
 static char VAR_4[1024];
 char VAR_5[VAR_0];
 char VAR_6[VAR_0];
 char VAR_7[VAR_0];
 FUNC_1(VAR_4, sizeof(VAR_4), "(src=%s dst=%s tgt=%s)",
     FUNC_0(VAR_5, VAR_1), FUNC_0(VAR_6, VAR_2),
     FUNC_0(VAR_7, VAR_3));
 return VAR_4;
}
