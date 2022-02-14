
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct stat {int st_mode; int st_size; } ;
struct ref_store {int dummy; } ;
struct object_id {int dummy; } ;
struct files_ref_store {int packed_ref_store; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 struct strbuf VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 struct files_ref_store* FUNC_4 (struct ref_store*,int ,char*) ;
 int FUNC_5 (struct files_ref_store*,struct strbuf*,char const*) ;
 scalar_t__ FUNC_6 (char const) ;
 scalar_t__ FUNC_7 (char const*,struct stat*) ;
 int FUNC_8 (char const*,int ) ;
 scalar_t__ FUNC_9 (char const*,struct object_id*,char const**) ;
 scalar_t__ FUNC_10 (int ,char const*,struct object_id*,struct strbuf*,unsigned int*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (struct strbuf*,char const*) ;
 scalar_t__ FUNC_13 (struct strbuf*,int,int) ;
 scalar_t__ FUNC_14 (struct strbuf*,char const*,int ) ;
 int FUNC_15 (struct strbuf*) ;
 int FUNC_16 (struct strbuf*) ;
 int FUNC_17 (struct strbuf*) ;
 int FUNC_18 (struct strbuf*,struct strbuf*) ;

__attribute__((used)) static int FUNC_19(struct ref_store *VAR_9,
         const char *VAR_10, struct object_id *VAR_11,
         struct strbuf *VAR_12, unsigned int *VAR_13)
{
 struct files_ref_store *VAR_14 =
  FUNC_4(VAR_9, VAR_6, "read_raw_ref");
 struct strbuf VAR_15 = VAR_7;
 struct strbuf VAR_16 = VAR_7;
 const char *VAR_17;
 const char *VAR_18;
 const char *VAR_19;
 struct stat VAR_20;
 int VAR_21;
 int VAR_22 = -1;
 int VAR_23;
 int VAR_24 = 3;

 *VAR_13 = 0;
 FUNC_16(&VAR_16);

 FUNC_5(VAR_14, &VAR_16, VAR_10);

 VAR_17 = VAR_16.buf;

stat_ref:
 if (VAR_24-- <= 0)
  goto out;

 if (FUNC_7(VAR_17, &VAR_20) < 0) {
  if (VAR_8 != VAR_2)
   goto out;
  if (FUNC_10(VAR_14->packed_ref_store, VAR_10,
          VAR_11, VAR_12, VAR_13)) {
   VAR_8 = VAR_2;
   goto out;
  }
  VAR_22 = 0;
  goto out;
 }


 if (FUNC_1(VAR_20.st_mode)) {
  FUNC_16(&VAR_15);
  if (FUNC_14(&VAR_15, VAR_17, VAR_20.st_size) < 0) {
   if (VAR_8 == VAR_2 || VAR_8 == VAR_0)

    goto stat_ref;
   else
    goto out;
  }
  if (FUNC_11(VAR_15.buf, "refs/") &&
      !FUNC_2(VAR_15.buf, 0)) {
   FUNC_18(&VAR_15, VAR_12);
   *VAR_13 |= VAR_5;
   VAR_22 = 0;
   goto out;
  }





 }


 if (FUNC_0(VAR_20.st_mode)) {





  if (FUNC_10(VAR_14->packed_ref_store, VAR_10,
          VAR_11, VAR_12, VAR_13)) {
   VAR_8 = VAR_1;
   goto out;
  }
  VAR_22 = 0;
  goto out;
 }





 VAR_21 = FUNC_8(VAR_17, VAR_3);
 if (VAR_21 < 0) {
  if (VAR_8 == VAR_2 && !FUNC_1(VAR_20.st_mode))

   goto stat_ref;
  else
   goto out;
 }
 FUNC_16(&VAR_15);
 if (FUNC_13(&VAR_15, VAR_21, 256) < 0) {
  int VAR_25 = VAR_8;
  FUNC_3(VAR_21);
  VAR_8 = VAR_25;
  goto out;
 }
 FUNC_3(VAR_21);
 FUNC_17(&VAR_15);
 VAR_18 = VAR_15.buf;
 if (FUNC_11(VAR_18, "ref:")) {
  VAR_18 += 4;
  while (FUNC_6(*VAR_18))
   VAR_18++;

  FUNC_16(VAR_12);
  FUNC_12(VAR_12, VAR_18);
  *VAR_13 |= VAR_5;
  VAR_22 = 0;
  goto out;
 }





 if (FUNC_9(VAR_18, VAR_11, &VAR_19) ||
     (*VAR_19 != '\0' && !FUNC_6(*VAR_19))) {
  *VAR_13 |= VAR_4;
  VAR_8 = VAR_0;
  goto out;
 }

 VAR_22 = 0;

out:
 VAR_23 = VAR_8;
 FUNC_15(&VAR_16);
 FUNC_15(&VAR_15);
 VAR_8 = VAR_23;
 return VAR_22;
}
