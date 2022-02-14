
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int repo; int prefix; } ;
struct object_id {int dummy; } ;
struct object_context {int path; int mode; } ;
struct object {unsigned int flags; int oid; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rev_info*,struct commit_list*,unsigned int) ;
 int FUNC_1 (struct rev_info*,struct object*,char const*,int ,int ) ;
 int FUNC_2 (struct rev_info*,struct object*,char const*,int ,unsigned int) ;
 int FUNC_3 (struct rev_info*,struct commit_list*,int ,unsigned int) ;
 int FUNC_4 (char const*,char*,struct rev_info*,int) ;
 int FUNC_5 (struct commit_list*) ;
 struct commit_list* FUNC_6 (struct commit*,struct commit*) ;
 scalar_t__ FUNC_7 (int ,char const*,unsigned int,struct object_id*,struct object_context*) ;
 struct commit* FUNC_8 (int ,int *) ;
 struct object* FUNC_9 (int ,struct object_id*) ;
 int FUNC_10 (int ,char const*) ;

__attribute__((used)) static int FUNC_11(const char *VAR_8, char *VAR_9,
      struct rev_info *VAR_10, int VAR_11,
      int VAR_12,
      struct object_context *VAR_13,
      struct object_context *VAR_14)
{
 const char *VAR_15, *VAR_16;
 struct object_id VAR_17, VAR_18;
 struct object *VAR_19, *VAR_20;
 unsigned int VAR_21, VAR_22;
 int VAR_23 = 0;
 unsigned int VAR_24 = VAR_11 ^ (VAR_7 | VAR_0);
 unsigned int VAR_25 = VAR_1 | VAR_2;

 VAR_15 = VAR_8;
 if (!*VAR_15)
  VAR_15 = "HEAD";

 VAR_16 = VAR_9 + 2;
 if (*VAR_16 == '.') {
  VAR_23 = 1;
  VAR_16++;
 }
 if (!*VAR_16)
  VAR_16 = "HEAD";

 if (FUNC_7(VAR_10->repo, VAR_15, VAR_25, &VAR_17, VAR_13) ||
     FUNC_7(VAR_10->repo, VAR_16, VAR_25, &VAR_18, VAR_14))
  return -1;

 if (!VAR_12) {
  *VAR_9 = '.';
  FUNC_10(VAR_10->prefix, VAR_8);
  *VAR_9 = '\0';
 }

 VAR_19 = FUNC_9(VAR_10->repo, &VAR_17);
 VAR_20 = FUNC_9(VAR_10->repo, &VAR_18);
 if (!VAR_19 || !VAR_20)
  return FUNC_4(VAR_8, VAR_9, VAR_10, VAR_23);

 if (!VAR_23) {

  VAR_22 = VAR_11;
  VAR_21 = VAR_24;
 } else {

  struct commit *VAR_26, *VAR_27;
  struct commit_list *VAR_28;

  VAR_26 = FUNC_8(VAR_10->repo, &VAR_19->oid);
  VAR_27 = FUNC_8(VAR_10->repo, &VAR_20->oid);
  if (!VAR_26 || !VAR_27)
   return FUNC_4(VAR_8, VAR_9, VAR_10, VAR_23);

  VAR_28 = FUNC_6(VAR_26, VAR_27);
  FUNC_3(VAR_10, VAR_28, VAR_4,
         VAR_24);
  FUNC_0(VAR_10, VAR_28, VAR_24);
  FUNC_5(VAR_28);

  VAR_22 = VAR_11;
  VAR_21 = VAR_11 | VAR_6;
 }

 VAR_19->flags |= VAR_21;
 VAR_20->flags |= VAR_22;
 FUNC_2(VAR_10, VAR_19, VAR_15, VAR_3, VAR_21);
 FUNC_2(VAR_10, VAR_20, VAR_16, VAR_5, VAR_22);
 FUNC_1(VAR_10, VAR_19, VAR_15, VAR_13->mode, VAR_13->path);
 FUNC_1(VAR_10, VAR_20, VAR_16, VAR_14->mode, VAR_14->path);
 return 0;
}
