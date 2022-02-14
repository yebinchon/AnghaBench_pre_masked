
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_iterator ;
struct TYPE_5__ {char* path; size_t mode; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (size_t,size_t) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*,...) ;
 int FUNC_6 (TYPE_1__ const**,int *) ;
 int FUNC_7 (TYPE_1__ const**,int *) ;
 int FUNC_8 (TYPE_1__ const**,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 size_t FUNC_11 (char const*) ;

void FUNC_12(
 git_iterator *VAR_5,
 size_t VAR_6,
 const char **VAR_7,
 size_t VAR_8,
 const char **VAR_9)
{
 const git_index_entry *VAR_10;
 size_t VAR_11;
 int VAR_12 = !(FUNC_9(VAR_5) & VAR_2);
 bool VAR_13 = 0;
 int VAR_14;

 if (VAR_13) FUNC_5(VAR_4, "== %s ==\n", VAR_12 ? "notrees" : "trees");

 VAR_11 = 0;

 while (!FUNC_6(&VAR_10, VAR_5)) {
  if (VAR_13) FUNC_5(VAR_4, "  %s %07o\n", VAR_10->path, (int)VAR_10->mode);

  if (VAR_12)
   FUNC_1(VAR_10->mode != VAR_1);

  if (VAR_7) {
   const char *VAR_15 = VAR_7[VAR_11];
   size_t VAR_16 = FUNC_11(VAR_15);

   FUNC_3(VAR_15, VAR_10->path);

   if (VAR_15[VAR_16 - 1] == '/')
    FUNC_2(VAR_1, VAR_10->mode);
   else
    FUNC_1(VAR_10->mode != VAR_1);
  }

  FUNC_1(++VAR_11 <= VAR_6);
 }

 FUNC_0(VAR_5, VAR_13);
 FUNC_2(VAR_6, VAR_11);

 FUNC_4(FUNC_10(VAR_5));

 VAR_11 = 0;
 FUNC_4(FUNC_8(&VAR_10, VAR_5));

 if (VAR_13) FUNC_5(VAR_4, "-- %s --\n", VAR_12 ? "notrees" : "trees");

 while (VAR_10 != ((void*)0)) {
  if (VAR_13) FUNC_5(VAR_4, "  %s %07o\n", VAR_10->path, (int)VAR_10->mode);

  if (VAR_12)
   FUNC_1(VAR_10->mode != VAR_1);

  if (VAR_9) {
   const char *VAR_17 = VAR_9[VAR_11];
   size_t VAR_18 = FUNC_11(VAR_17);

   FUNC_3(VAR_17, VAR_10->path);

   if (VAR_17[VAR_18 - 1] == '/')
    FUNC_2(VAR_1, VAR_10->mode);
   else
    FUNC_1(VAR_10->mode != VAR_1);
  }

  if (VAR_10->mode == VAR_1) {
   VAR_14 = FUNC_7(&VAR_10, VAR_5);


   FUNC_1(!VAR_14 || VAR_14 == VAR_0);

   if (VAR_14 == VAR_0) {
    VAR_14 = FUNC_6(&VAR_10, VAR_5);
    FUNC_1(!VAR_14 || VAR_14 == VAR_3);
   }
  } else {
   VAR_14 = FUNC_6(&VAR_10, VAR_5);
   FUNC_1(!VAR_14 || VAR_14 == VAR_3);
  }

  if (++VAR_11 >= VAR_8)
   break;
 }

 FUNC_0(VAR_5, VAR_13);
 FUNC_2(VAR_8, VAR_11);
}
