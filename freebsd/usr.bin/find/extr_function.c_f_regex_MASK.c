
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;
struct TYPE_9__ {char* fts_path; } ;
struct TYPE_8__ {int flags; int * re_data; } ;
typedef TYPE_2__ PLAN ;
typedef TYPE_3__ FTSENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,char*,char*) ;
 int FUNC_1 (int,int *,char*,int) ;
 int FUNC_2 (int *,char*,int,TYPE_1__*,int ) ;
 int FUNC_3 (char*) ;

int
FUNC_4(PLAN *VAR_4, FTSENT *VAR_5)
{
 char *VAR_6;
 int VAR_7;
 regex_t *VAR_8;
 regmatch_t VAR_9;
 int VAR_10;
 char VAR_11[VAR_1];
 int VAR_12;

 VAR_8 = VAR_4->re_data;
 VAR_6 = VAR_5->fts_path;
 VAR_7 = FUNC_3(VAR_6);
 VAR_12 = 0;

 VAR_9.rm_so = 0;
 VAR_9.rm_eo = VAR_7;

 VAR_10 = FUNC_2(VAR_8, VAR_6, 1, &VAR_9, VAR_3);

 if (VAR_10 != 0 && VAR_10 != VAR_2) {
  FUNC_1(VAR_10, VAR_8, VAR_11, sizeof VAR_11);
  FUNC_0(1, "%s: %s",
       VAR_4->flags & VAR_0 ? "-iregex" : "-regex", VAR_11);
 }

 if (VAR_10 == 0 && VAR_9.rm_so == 0 && VAR_9.rm_eo == VAR_7)
  VAR_12 = 1;

 return VAR_12;
}
