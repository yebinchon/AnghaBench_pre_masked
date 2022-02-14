
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct statistic {int index; char* desc; } ;
typedef int stats ;
typedef int oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char const*,char*,int*) ;
 int FUNC_5 (char*,int*,size_t*,int *,int ) ;
 struct statistic* VAR_2 ;

__attribute__((used)) static void
FUNC_6(const char *VAR_3)
{
 static uint32_t VAR_4[256];
 const struct statistic *VAR_5;
 char VAR_6[32];
 size_t VAR_7;
 int VAR_8;

 if (FUNC_4(VAR_3, "iwi%u", &VAR_8) != 1)
  FUNC_1(VAR_0, "Invalid interface name '%s'", VAR_3);

 VAR_7 = sizeof(VAR_4);
 (void)FUNC_3(VAR_6, sizeof(VAR_6), "dev.iwi.%u.stats", VAR_8);
 if (FUNC_5(VAR_6, VAR_4, &VAR_7, ((void*)0), 0) == -1)
  FUNC_0(VAR_1, "Can't retrieve statistics");

 for (VAR_5 = VAR_2; VAR_5->index != -1; VAR_5++)
  (void)FUNC_2("%-60s[%u]\n", VAR_5->desc, VAR_4[VAR_5->index]);
}
