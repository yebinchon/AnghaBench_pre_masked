
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tm {int dummy; } ;
struct TYPE_5__ {int tv_nsec; } ;
struct TYPE_8__ {int st_mtime; TYPE_1__ st_mtim; } ;
struct TYPE_6__ {int tv_nsec; } ;
struct TYPE_7__ {int st_mtime; TYPE_2__ st_mtim; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,char const*,...) ;
 int ** VAR_3 ;
 struct tm* FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (char*,char*,char*,int,char*) ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_3 (char*,int,char const*,struct tm*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_6, const char *VAR_7)
{
 const char *VAR_8;
 char VAR_9[256];
 char VAR_10[256];
 char VAR_11[10];
 char VAR_12[10];
 struct tm VAR_13, VAR_14, *VAR_15, *VAR_16;
 int VAR_17 = VAR_4;
 int VAR_18 = VAR_5;

 VAR_8 = "%Y-%m-%d %H:%M:%S";

 if (VAR_1)
  VAR_8 = "%c";
 VAR_15 = FUNC_1(&VAR_4, &VAR_13);
 VAR_16 = FUNC_1(&VAR_5, &VAR_14);
 FUNC_3(VAR_9, 256, VAR_8, VAR_15);
 FUNC_3(VAR_10, 256, VAR_8, VAR_16);
 if (!VAR_1) {
  FUNC_3(VAR_11, 10, "%z", VAR_15);
  FUNC_3(VAR_12, 10, "%z", VAR_16);
  FUNC_2(VAR_9, "%s.%.9d %s", VAR_9, VAR_17, VAR_11);
  FUNC_2(VAR_10, "%s.%.9d %s", VAR_10, VAR_18, VAR_12);
 }
 if (VAR_3[0] != ((void*)0))
  FUNC_0("%s %s\n", VAR_2 == VAR_0 ? "***" : "---",
      VAR_3[0]);
 else
  FUNC_0("%s %s\t%s\n", VAR_2 == VAR_0 ? "***" : "---",
      VAR_6, VAR_9);
 if (VAR_3[1] != ((void*)0))
  FUNC_0("%s %s\n", VAR_2 == VAR_0 ? "---" : "+++",
      VAR_3[1]);
 else
  FUNC_0("%s %s\t%s\n", VAR_2 == VAR_0 ? "---" : "+++",
      VAR_7, VAR_10);
}
