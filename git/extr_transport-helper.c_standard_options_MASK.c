
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {int verbose; int family; scalar_t__ progress; } ;
typedef int buf ;





 int FUNC_0 (struct transport*,char*,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_2(struct transport *VAR_0)
{
 char VAR_1[16];
 int VAR_2 = VAR_0->verbose;

 FUNC_0(VAR_0, "progress", VAR_0->progress ? "true" : "false");

 FUNC_1(VAR_1, sizeof(VAR_1), "%d", VAR_2 + 1);
 FUNC_0(VAR_0, "verbosity", VAR_1);

 switch (VAR_0->family) {
 case 130:




  break;
 case 129:
  FUNC_0(VAR_0, "family", "ipv4");
  break;
 case 128:
  FUNC_0(VAR_0, "family", "ipv6");
  break;
 }
}
