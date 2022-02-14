
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct statistic {scalar_t__ index; char* desc; int unit; } ;



 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char const*,char*,int*) ;
 int FUNC_5 (char*,int*,int*,int *,int ) ;
 struct statistic* VAR_2 ;

__attribute__((used)) static void
FUNC_6(const char *VAR_3)
{
 static uint32_t VAR_4[256];
 const struct statistic *VAR_5;
 char VAR_6[32];
 int VAR_7, VAR_8;

 if (FUNC_4(VAR_3, "ipw%u", &VAR_7) != 1)
  FUNC_1(VAR_0, "Invalid interface name '%s'", VAR_3);

 VAR_8 = sizeof VAR_4;
 FUNC_3(VAR_6, sizeof VAR_6, "dev.ipw.%u.stats", VAR_7);
 if (FUNC_5(VAR_6, VAR_4, &VAR_8, ((void*)0), 0) == -1)
  FUNC_0(VAR_1, "Can't retrieve statistics");

 for (VAR_5 = VAR_2; VAR_5->index != 0; VAR_5++) {
  FUNC_2("%-60s[", VAR_5->desc);
  switch (VAR_5->unit) {
  case 129:
   FUNC_2("%u", VAR_4[VAR_5->index]);
   break;
  case 131:
   FUNC_2(VAR_4[VAR_5->index] ? "true" : "false");
   break;
  case 128:
   FUNC_2("%u%%", VAR_4[VAR_5->index]);
   break;
  case 130:
  default:
   FUNC_2("0x%08X", VAR_4[VAR_5->index]);
  }
  FUNC_2("]\n");
 }
}
