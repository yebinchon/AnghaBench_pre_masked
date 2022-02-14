
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; int buf; } ;
struct stat {int st_mode; } ;
struct ref_store {int dummy; } ;
struct ref_dir {int cache; } ;
struct object_id {int dummy; } ;
struct files_ref_store {int base; } ;
struct dirent {char* d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct strbuf VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ref_dir*,int ) ;
 int FUNC_2 (struct ref_dir*,char const*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,size_t,int) ;
 int FUNC_6 (int ,struct object_id*,int) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 struct files_ref_store* FUNC_9 (struct ref_store*,int ,char*) ;
 int FUNC_10 (struct files_ref_store*,struct strbuf*,char const*) ;
 scalar_t__ FUNC_11 (struct object_id*) ;
 int FUNC_12 (struct object_id*) ;
 int * FUNC_13 (int ) ;
 struct dirent* FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,int ,int ,struct object_id*,int*) ;
 scalar_t__ FUNC_17 (int ,struct stat*) ;
 int FUNC_18 (struct strbuf*,char const*,int) ;
 int FUNC_19 (struct strbuf*,char) ;
 int FUNC_20 (struct strbuf*,char*) ;
 int FUNC_21 (struct strbuf*,int) ;
 int FUNC_22 (struct strbuf*) ;
 int FUNC_23 (struct strbuf*,size_t) ;
 int FUNC_24 (char const*) ;

__attribute__((used)) static void FUNC_25(struct ref_store *VAR_6,
          struct ref_dir *VAR_7, const char *VAR_8)
{
 struct files_ref_store *VAR_9 =
  FUNC_9(VAR_6, VAR_3, "fill_ref_dir");
 DIR *VAR_10;
 struct dirent *VAR_11;
 int VAR_12 = FUNC_24(VAR_8);
 struct strbuf VAR_13;
 struct strbuf VAR_14 = VAR_5;
 size_t VAR_15;

 FUNC_10(VAR_9, &VAR_14, VAR_8);
 VAR_15 = VAR_14.len;

 VAR_10 = FUNC_13(VAR_14.buf);
 if (!VAR_10) {
  FUNC_22(&VAR_14);
  return;
 }

 FUNC_21(&VAR_13, VAR_12 + 257);
 FUNC_18(&VAR_13, VAR_8, VAR_12);

 while ((VAR_11 = FUNC_14(VAR_10)) != ((void*)0)) {
  struct object_id VAR_16;
  struct stat VAR_17;
  int VAR_18;

  if (VAR_11->d_name[0] == '.')
   continue;
  if (FUNC_8(VAR_11->d_name, ".lock"))
   continue;
  FUNC_20(&VAR_13, VAR_11->d_name);
  FUNC_20(&VAR_14, VAR_11->d_name);
  if (FUNC_17(VAR_14.buf, &VAR_17) < 0) {
   ;
  } else if (FUNC_0(VAR_17.st_mode)) {
   FUNC_19(&VAR_13, '/');
   FUNC_1(VAR_7,
      FUNC_5(VAR_7->cache, VAR_13.buf,
         VAR_13.len, 1));
  } else {
   if (!FUNC_16(&VAR_9->base,
           VAR_13.buf,
           VAR_4,
           &VAR_16, &VAR_18)) {
    FUNC_12(&VAR_16);
    VAR_18 |= VAR_2;
   } else if (FUNC_11(&VAR_16)) {
    VAR_18 |= VAR_2;
   }

   if (FUNC_3(VAR_13.buf,
       VAR_0)) {
    if (!FUNC_15(VAR_13.buf))
     FUNC_7("loose refname is dangerous: %s", VAR_13.buf);
    FUNC_12(&VAR_16);
    VAR_18 |= VAR_1 | VAR_2;
   }
   FUNC_1(VAR_7,
      FUNC_6(VAR_13.buf, &VAR_16, VAR_18));
  }
  FUNC_23(&VAR_13, VAR_12);
  FUNC_23(&VAR_14, VAR_15);
 }
 FUNC_22(&VAR_13);
 FUNC_22(&VAR_14);
 FUNC_4(VAR_10);

 FUNC_2(VAR_7, VAR_8);
}
