
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int,char*,int ,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(const struct addrinfo *VAR_2)
{
 char VAR_3[VAR_0];

 if (FUNC_0(VAR_2->ai_addr, VAR_2->ai_addrlen, VAR_3, sizeof VAR_3,
   (char *)0, 0, VAR_1) != 0)
  return;

 FUNC_1("Trying %s...\n", VAR_3);
}
