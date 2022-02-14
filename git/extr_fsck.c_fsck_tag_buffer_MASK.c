
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int oid; } ;
struct tag {TYPE_1__ object; } ;
struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
struct fsck_options {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct strbuf VAR_12 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const**,TYPE_1__*,struct fsck_options*) ;
 scalar_t__ FUNC_3 (char const*,struct object_id*,char const**) ;
 char* FUNC_4 (int *,int*,unsigned long*) ;
 int FUNC_5 (struct fsck_options*,TYPE_1__*,int ,char*,...) ;
 int FUNC_6 (char const*,char*,char const**) ;
 int FUNC_7 (struct strbuf*,char*,int,char const*) ;
 int FUNC_8 (struct strbuf*) ;
 char* FUNC_9 (char const*,char) ;
 scalar_t__ FUNC_10 (char const*,int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char const*,unsigned long,TYPE_1__*,struct fsck_options*) ;

__attribute__((used)) static int FUNC_13(struct tag *VAR_13, const char *VAR_14,
 unsigned long VAR_15, struct fsck_options *VAR_16)
{
 struct object_id VAR_17;
 int VAR_18 = 0;
 const char *VAR_19;
 char *VAR_20 = ((void*)0), *VAR_21;
 struct strbuf VAR_22 = VAR_12;
 const char *VAR_23;

 if (VAR_14)
  VAR_19 = VAR_14;
 else {
  enum object_type VAR_24;

  VAR_19 = VAR_20 =
   FUNC_4(&VAR_13->object.oid, &VAR_24, &VAR_15);
  if (!VAR_19)
   return FUNC_5(VAR_16, &VAR_13->object,
    VAR_7,
    "cannot read tag object");

  if (VAR_24 != VAR_11) {
   VAR_18 = FUNC_5(VAR_16, &VAR_13->object,
    VAR_10,
    "expected tag got %s",
       FUNC_11(VAR_24));
   goto done;
  }
 }

 VAR_18 = FUNC_12(VAR_19, VAR_15, &VAR_13->object, VAR_16);
 if (VAR_18)
  goto done;

 if (!FUNC_6(VAR_19, "object ", &VAR_19)) {
  VAR_18 = FUNC_5(VAR_16, &VAR_13->object, VAR_3, "invalid format - expected 'object' line");
  goto done;
 }
 if (FUNC_3(VAR_19, &VAR_17, &VAR_23) || *VAR_23 != '\n') {
  VAR_18 = FUNC_5(VAR_16, &VAR_13->object, VAR_0, "invalid 'object' line format - bad sha1");
  if (VAR_18)
   goto done;
 }
 VAR_19 = VAR_23 + 1;

 if (!FUNC_6(VAR_19, "type ", &VAR_19)) {
  VAR_18 = FUNC_5(VAR_16, &VAR_13->object, VAR_9, "invalid format - expected 'type' line");
  goto done;
 }
 VAR_21 = FUNC_9(VAR_19, '\n');
 if (!VAR_21) {
  VAR_18 = FUNC_5(VAR_16, &VAR_13->object, VAR_8, "invalid format - unexpected end after 'type' line");
  goto done;
 }
 if (FUNC_10(VAR_19, VAR_21 - VAR_19, 1) < 0)
  VAR_18 = FUNC_5(VAR_16, &VAR_13->object, VAR_2, "invalid 'type' value");
 if (VAR_18)
  goto done;
 VAR_19 = VAR_21 + 1;

 if (!FUNC_6(VAR_19, "tag ", &VAR_19)) {
  VAR_18 = FUNC_5(VAR_16, &VAR_13->object, VAR_6, "invalid format - expected 'tag' line");
  goto done;
 }
 VAR_21 = FUNC_9(VAR_19, '\n');
 if (!VAR_21) {
  VAR_18 = FUNC_5(VAR_16, &VAR_13->object, VAR_4, "invalid format - unexpected end after 'type' line");
  goto done;
 }
 FUNC_7(&VAR_22, "refs/tags/%.*s", (int)(VAR_21 - VAR_19), VAR_19);
 if (FUNC_0(VAR_22.buf, 0)) {
  VAR_18 = FUNC_5(VAR_16, &VAR_13->object, VAR_1,
      "invalid 'tag' name: %.*s",
      (int)(VAR_21 - VAR_19), VAR_19);
  if (VAR_18)
   goto done;
 }
 VAR_19 = VAR_21 + 1;

 if (!FUNC_6(VAR_19, "tagger ", &VAR_19)) {

  VAR_18 = FUNC_5(VAR_16, &VAR_13->object, VAR_5, "invalid format - expected 'tagger' line");
  if (VAR_18)
   goto done;
 }
 else
  VAR_18 = FUNC_2(&VAR_19, &VAR_13->object, VAR_16);

done:
 FUNC_8(&VAR_22);
 FUNC_1(VAR_20);
 return VAR_18;
}
