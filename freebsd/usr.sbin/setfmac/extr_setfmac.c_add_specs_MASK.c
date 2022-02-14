
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label_specs {int head; } ;
struct label_spec {size_t nentries; int * entries; } ;
typedef int FILE ;


 int FUNC_0 (int *,struct label_spec*,int ) ;
 int FUNC_1 (char const*,int,int *,char*) ;
 int * FUNC_2 (size_t,int) ;
 int FUNC_3 (char**,size_t*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int,char*,char const*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 char* FUNC_9 (int *,size_t*) ;
 int * FUNC_10 (char const*,char*) ;
 int FUNC_11 (char*) ;
 int VAR_0 ;
 struct label_spec* FUNC_12 (int) ;
 int VAR_1 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,char const*,long) ;

void
FUNC_15(struct label_specs *VAR_2, const char *VAR_3, int VAR_4)
{
 struct label_spec *VAR_5;
 FILE *VAR_6;
 char *VAR_7;
 size_t VAR_8 = 0, VAR_9;
 int VAR_10;

 VAR_5 = FUNC_12(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  FUNC_4(1, "malloc");
 VAR_6 = FUNC_10(VAR_3, "r");
 if (VAR_6 == ((void*)0))
  FUNC_4(1, "opening %s", VAR_3);
 while ((VAR_7 = FUNC_9(VAR_6, &VAR_9)) != ((void*)0)) {
  VAR_10 = FUNC_3(&VAR_7, &VAR_9);
  if (VAR_9 > 0)
   VAR_8++;
  if (VAR_10)
   FUNC_11(VAR_7);
 }
 if (FUNC_8(VAR_6))
  FUNC_4(1, "fgetln on %s", VAR_3);
 FUNC_13(VAR_6);
 VAR_5->entries = FUNC_2(VAR_8, sizeof(*VAR_5->entries));
 if (VAR_5->entries == ((void*)0))
  FUNC_4(1, "malloc");
 VAR_5->nentries = VAR_8;
 while (VAR_8 > 0) {
  VAR_7 = FUNC_9(VAR_6, &VAR_9);
  if (VAR_7 == ((void*)0)) {
   if (FUNC_7(VAR_6))
    FUNC_5(1, "%s ended prematurely", VAR_3);
   else
    FUNC_4(1, "failure reading %s", VAR_3);
  }
  VAR_10 = FUNC_3(&VAR_7, &VAR_9);
  if (VAR_9 == 0) {
   if (VAR_10)
    FUNC_11(VAR_7);
   continue;
  }
  FUNC_1(VAR_3, VAR_4, &VAR_5->entries[--VAR_8], VAR_7);
  if (VAR_10)
   FUNC_11(VAR_7);
 }
 FUNC_6(VAR_6);
 if (!VAR_1)
  FUNC_14("%s: read %lu specifications", VAR_3,
      (long)VAR_5->nentries);
 FUNC_0(&VAR_2->head, VAR_5, VAR_0);
}
