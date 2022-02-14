
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct fsck_options {int dummy; } ;
struct commit_graft {int nr_parent; } ;
struct TYPE_4__ {int oid; } ;
struct commit {TYPE_1__ object; int parents; } ;


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
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (char const**,TYPE_1__*,struct fsck_options*) ;
 int FUNC_2 (struct commit*) ;
 struct commit_graft* FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (char const*,char,unsigned long) ;
 int FUNC_5 (struct object_id*) ;
 scalar_t__ FUNC_6 (char const*,struct object_id*,char const**) ;
 int FUNC_7 (struct fsck_options*,TYPE_1__*,int ,char*,...) ;
 scalar_t__ FUNC_8 (char const*,char*,char const**) ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (char const*,unsigned long,TYPE_1__*,struct fsck_options*) ;

__attribute__((used)) static int FUNC_10(struct commit *VAR_11, const char *VAR_12,
 unsigned long VAR_13, struct fsck_options *VAR_14)
{
 struct object_id VAR_15, VAR_16;
 struct commit_graft *VAR_17;
 unsigned VAR_18, VAR_19 = 0, VAR_20;
 int VAR_21;
 const char *VAR_22 = VAR_12;
 const char *VAR_23;

 if (FUNC_9(VAR_12, VAR_13, &VAR_11->object, VAR_14))
  return -1;

 if (!FUNC_8(VAR_12, "tree ", &VAR_12))
  return FUNC_7(VAR_14, &VAR_11->object, VAR_7, "invalid format - expected 'tree' line");
 if (FUNC_6(VAR_12, &VAR_15, &VAR_23) || *VAR_23 != '\n') {
  VAR_21 = FUNC_7(VAR_14, &VAR_11->object, VAR_2, "invalid 'tree' line format - bad sha1");
  if (VAR_21)
   return VAR_21;
 }
 VAR_12 = VAR_23 + 1;
 while (FUNC_8(VAR_12, "parent ", &VAR_12)) {
  if (FUNC_6(VAR_12, &VAR_16, &VAR_23) || *VAR_23 != '\n') {
   VAR_21 = FUNC_7(VAR_14, &VAR_11->object, VAR_0, "invalid 'parent' line format - bad sha1");
   if (VAR_21)
    return VAR_21;
  }
  VAR_12 = VAR_23 + 1;
  VAR_19++;
 }
 VAR_17 = FUNC_3(VAR_10, &VAR_11->object.oid);
 VAR_18 = FUNC_0(VAR_11->parents);
 if (VAR_17) {
  if (VAR_17->nr_parent == -1 && !VAR_18)
   ;
  else if (VAR_17->nr_parent != VAR_18) {
   VAR_21 = FUNC_7(VAR_14, &VAR_11->object, VAR_5, "graft objects missing");
   if (VAR_21)
    return VAR_21;
  }
 } else {
  if (VAR_18 != VAR_19) {
   VAR_21 = FUNC_7(VAR_14, &VAR_11->object, VAR_6, "parent objects missing");
   if (VAR_21)
    return VAR_21;
  }
 }
 VAR_20 = 0;
 while (FUNC_8(VAR_12, "author ", &VAR_12)) {
  VAR_20++;
  VAR_21 = FUNC_1(&VAR_12, &VAR_11->object, VAR_14);
  if (VAR_21)
   return VAR_21;
 }
 if (VAR_20 < 1)
  VAR_21 = FUNC_7(VAR_14, &VAR_11->object, VAR_3, "invalid format - expected 'author' line");
 else if (VAR_20 > 1)
  VAR_21 = FUNC_7(VAR_14, &VAR_11->object, VAR_8, "invalid format - multiple 'author' lines");
 if (VAR_21)
  return VAR_21;
 if (!FUNC_8(VAR_12, "committer ", &VAR_12))
  return FUNC_7(VAR_14, &VAR_11->object, VAR_4, "invalid format - expected 'committer' line");
 VAR_21 = FUNC_1(&VAR_12, &VAR_11->object, VAR_14);
 if (VAR_21)
  return VAR_21;
 if (!FUNC_2(VAR_11)) {
  VAR_21 = FUNC_7(VAR_14, &VAR_11->object, VAR_1, "could not load commit's tree %s", FUNC_5(&VAR_15));
  if (VAR_21)
   return VAR_21;
 }
 if (FUNC_4(VAR_22, '\0', VAR_13)) {
  VAR_21 = FUNC_7(VAR_14, &VAR_11->object, VAR_9,
        "NUL byte in the commit object body");
  if (VAR_21)
   return VAR_21;
 }
 return 0;
}
