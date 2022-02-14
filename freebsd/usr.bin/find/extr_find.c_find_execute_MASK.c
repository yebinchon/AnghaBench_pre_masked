
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int fts_level; int fts_info; int fts_errno; int fts_path; } ;
struct TYPE_8__ {struct TYPE_8__* next; scalar_t__ (* execute ) (TYPE_1__*,TYPE_2__*) ;} ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ FTSENT ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int * VAR_6 ;
 int FUNC_3 () ;
 int * FUNC_4 (char**,int,int *) ;
 TYPE_2__* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int * VAR_15 ;
 int FUNC_10 (char*,int ,...) ;

int
FUNC_11(PLAN *VAR_16, char *VAR_17[])
{
 FTSENT *VAR_18;
 PLAN *VAR_19;
 int VAR_20;

 VAR_15 = FUNC_4(VAR_17, VAR_7, (VAR_10 ? VAR_6 : ((void*)0)));
 if (VAR_15 == ((void*)0))
  FUNC_0(1, "ftsopen");

 VAR_5 = 0;
 while (VAR_4 = 0, (VAR_18 = FUNC_5(VAR_15)) != ((void*)0)) {
  if (VAR_12 != -1 && VAR_18->fts_level >= VAR_12) {
   if (FUNC_6(VAR_15, VAR_18, VAR_2))
    FUNC_0(1, "%s", VAR_18->fts_path);
  }

  switch (VAR_18->fts_info) {
  case 133:
   if (VAR_9)
    continue;
   break;
  case 131:
   if (!VAR_9)
    continue;
   break;
  case 132:
  case 129:
   if (VAR_8 &&
       VAR_18->fts_errno == VAR_1 && VAR_18->fts_level > 0)
    continue;

  case 130:
   (void)FUNC_2(VAR_14);
   FUNC_10("%s: %s",
       VAR_18->fts_path, FUNC_7(VAR_18->fts_errno));
   VAR_5 = 1;
   continue;






  }

  if (VAR_11 && FUNC_8(VAR_18->fts_path, " \t\n\\'\"")) {
   (void)FUNC_2(VAR_14);
   FUNC_10("%s: illegal path", VAR_18->fts_path);
   VAR_5 = 1;
   continue;
  }

  if (VAR_13 != -1 && VAR_18->fts_level < VAR_13)
   continue;






  for (VAR_19 = VAR_16; VAR_19 && (VAR_19->execute)(VAR_19, VAR_18); VAR_19 = VAR_19->next);
 }
 VAR_20 = VAR_4;
 FUNC_3();
 if (VAR_20 && (!VAR_8 || VAR_20 != VAR_1))
  FUNC_1(1, VAR_20, "fts_read");
 return (VAR_5);
}
