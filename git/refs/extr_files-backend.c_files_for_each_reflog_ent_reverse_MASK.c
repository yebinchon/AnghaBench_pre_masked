
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; int buf; } ;
struct ref_store {int dummy; } ;
struct files_ref_store {int dummy; } ;
typedef int each_reflog_ent_fn ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 struct files_ref_store* FUNC_3 (struct ref_store*,int ,char*) ;
 int FUNC_4 (struct files_ref_store*,struct strbuf*,char const*) ;
 char* FUNC_5 (char*,char*) ;
 int * FUNC_6 (int ,char*) ;
 size_t FUNC_7 (char*,int,int,int *) ;
 scalar_t__ FUNC_8 (int *,long,int ) ;
 long FUNC_9 (int *) ;
 int FUNC_10 (struct strbuf*,int ,void*) ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 (struct strbuf*) ;
 int FUNC_13 (struct strbuf*,int ,int ,char*,int) ;
 char* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct ref_store *VAR_6,
          const char *VAR_7,
          each_reflog_ent_fn VAR_8,
          void *VAR_9)
{
 struct files_ref_store *VAR_10 =
  FUNC_3(VAR_6, VAR_1,
          "for_each_reflog_ent_reverse");
 struct strbuf VAR_11 = VAR_4;
 FILE *VAR_12;
 long VAR_13;
 int VAR_14 = 0, VAR_15 = 1;

 FUNC_4(VAR_10, &VAR_11, VAR_7);
 VAR_12 = FUNC_6(VAR_11.buf, "r");
 FUNC_11(&VAR_11);
 if (!VAR_12)
  return -1;


 if (FUNC_8(VAR_12, 0, VAR_2) < 0)
  VAR_14 = FUNC_1("cannot seek back reflog for %s: %s",
       VAR_7, FUNC_14(VAR_5));
 VAR_13 = FUNC_9(VAR_12);
 while (!VAR_14 && 0 < VAR_13) {
  int VAR_16;
  size_t VAR_17;
  char VAR_18[VAR_0];
  char *VAR_19, *VAR_20;


  VAR_16 = (sizeof(VAR_18) < VAR_13) ? sizeof(VAR_18) : VAR_13;
  if (FUNC_8(VAR_12, VAR_13 - VAR_16, VAR_3)) {
   VAR_14 = FUNC_1("cannot seek back reflog for %s: %s",
        VAR_7, FUNC_14(VAR_5));
   break;
  }
  VAR_17 = FUNC_7(VAR_18, VAR_16, 1, VAR_12);
  if (VAR_17 != 1) {
   VAR_14 = FUNC_1("cannot read %d bytes from reflog for %s: %s",
        VAR_16, VAR_7, FUNC_14(VAR_5));
   break;
  }
  VAR_13 -= VAR_16;

  VAR_20 = VAR_19 = VAR_18 + VAR_16;
  if (VAR_15 && VAR_20[-1] == '\n')

   VAR_20--;
  VAR_15 = 0;

  while (VAR_18 < VAR_20) {




   char *VAR_21;

   VAR_21 = FUNC_5(VAR_18, VAR_20);

   if (*VAR_21 == '\n') {






    FUNC_13(&VAR_11, 0, 0, VAR_21 + 1, VAR_19 - (VAR_21 + 1));
    VAR_20 = VAR_21;
    VAR_19 = VAR_21 + 1;
    VAR_14 = FUNC_10(&VAR_11, VAR_8, VAR_9);
    FUNC_12(&VAR_11);
    if (VAR_14)
     break;
   } else if (!VAR_13) {






    FUNC_13(&VAR_11, 0, 0, VAR_18, VAR_19 - VAR_18);
    VAR_14 = FUNC_10(&VAR_11, VAR_8, VAR_9);
    FUNC_12(&VAR_11);
    break;
   }

   if (VAR_21 == VAR_18) {
    FUNC_13(&VAR_11, 0, 0, VAR_18, VAR_19 - VAR_18);
    break;
   }
  }

 }
 if (!VAR_14 && VAR_11.len)
  FUNC_0("reverse reflog parser had leftover data");

 FUNC_2(VAR_12);
 FUNC_11(&VAR_11);
 return VAR_14;
}
