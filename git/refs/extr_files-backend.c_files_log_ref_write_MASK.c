
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
struct files_ref_store {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct files_ref_store*,struct strbuf*,char const*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct files_ref_store*,char const*,int,int*,struct strbuf*) ;
 int FUNC_5 (int,struct object_id const*,struct object_id const*,int ,char const*) ;
 int FUNC_6 (struct strbuf*,char*,int ,int ) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct files_ref_store *VAR_7,
          const char *VAR_8, const struct object_id *VAR_9,
          const struct object_id *VAR_10, const char *VAR_11,
          int VAR_12, struct strbuf *VAR_13)
{
 int VAR_14, VAR_15;

 if (VAR_6 == VAR_2)
  VAR_6 = FUNC_3() ? VAR_0 : VAR_1;

 VAR_15 = FUNC_4(VAR_7, VAR_8,
          VAR_12 & VAR_3,
          &VAR_14, VAR_13);

 if (VAR_15)
  return VAR_15;

 if (VAR_14 < 0)
  return 0;
 VAR_15 = FUNC_5(VAR_14, VAR_9, VAR_10,
      FUNC_2(0), VAR_11);
 if (VAR_15) {
  struct strbuf VAR_16 = VAR_4;
  int VAR_17 = VAR_5;

  FUNC_1(VAR_7, &VAR_16, VAR_8);
  FUNC_6(VAR_13, "unable to append to '%s': %s",
       VAR_16.buf, FUNC_8(VAR_17));
  FUNC_7(&VAR_16);
  FUNC_0(VAR_14);
  return -1;
 }
 if (FUNC_0(VAR_14)) {
  struct strbuf VAR_18 = VAR_4;
  int VAR_19 = VAR_5;

  FUNC_1(VAR_7, &VAR_18, VAR_8);
  FUNC_6(VAR_13, "unable to append to '%s': %s",
       VAR_18.buf, FUNC_8(VAR_19));
  FUNC_7(&VAR_18);
  return -1;
 }
 return 0;
}
