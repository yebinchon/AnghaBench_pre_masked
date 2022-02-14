
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {scalar_t__ ignore_missing; int prefix; int repo; } ;
struct object_id {int dummy; } ;
struct object_context {int path; int mode; } ;
struct object {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct rev_info*,char const*,int,int) ;
 int FUNC_1 (struct rev_info*,struct object*,char const*,int ,int ) ;
 int FUNC_2 (struct rev_info*,struct object*,char const*,int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char const*,unsigned int,struct object_id*,struct object_context*) ;
 struct object* FUNC_5 (struct rev_info*,char const*,struct object_id*,int) ;
 int FUNC_6 (char const*,struct rev_info*,int,unsigned int) ;
 int FUNC_7 (char const*,char*) ;
 char* FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*,char**,int) ;
 int FUNC_10 (int ,char const*) ;

int FUNC_11(const char *VAR_7, struct rev_info *VAR_8, int VAR_9, unsigned VAR_10)
{
 struct object_context VAR_11;
 char *VAR_12;
 struct object *VAR_13;
 struct object_id VAR_14;
 int VAR_15;
 const char *VAR_16 = VAR_7;
 int VAR_17 = VAR_10 & VAR_3;
 unsigned VAR_18 = VAR_2;

 VAR_9 = VAR_9 & VAR_6 ? VAR_9 | VAR_0 : VAR_9 & ~VAR_0;

 if (!VAR_17 && !FUNC_7(VAR_16, "..")) {




  return -1;
 }

 if (!FUNC_6(VAR_16, VAR_8, VAR_9, VAR_10))
  return 0;

 VAR_12 = FUNC_8(VAR_16, "^@");
 if (VAR_12 && !VAR_12[2]) {
  *VAR_12 = 0;
  if (FUNC_0(VAR_8, VAR_16, VAR_9, 0))
   return 0;
  *VAR_12 = '^';
 }
 VAR_12 = FUNC_8(VAR_16, "^!");
 if (VAR_12 && !VAR_12[2]) {
  *VAR_12 = 0;
  if (!FUNC_0(VAR_8, VAR_16, VAR_9 ^ (VAR_6 | VAR_0), 0))
   *VAR_12 = '^';
 }
 VAR_12 = FUNC_8(VAR_16, "^-");
 if (VAR_12) {
  int VAR_19 = 1;

  if (VAR_12[2]) {
   char *VAR_20;
   VAR_19 = FUNC_9(VAR_12 + 2, &VAR_20, 10);
   if (*VAR_20 != '\0' || !VAR_19)
    return -1;
  }

  *VAR_12 = 0;
  if (!FUNC_0(VAR_8, VAR_16, VAR_9 ^ (VAR_6 | VAR_0), VAR_19))
   *VAR_12 = '^';
 }

 VAR_15 = 0;
 if (*VAR_16 == '^') {
  VAR_15 = VAR_6 | VAR_0;
  VAR_16++;
 }

 if (VAR_10 & VAR_4)
  VAR_18 |= VAR_1;

 if (FUNC_4(VAR_8->repo, VAR_16, VAR_18, &VAR_14, &VAR_11))
  return VAR_8->ignore_missing ? 0 : -1;
 if (!VAR_17)
  FUNC_10(VAR_8->prefix, VAR_16);
 VAR_13 = FUNC_5(VAR_8, VAR_16, &VAR_14, VAR_9 ^ VAR_15);
 if (!VAR_13)
  return VAR_8->ignore_missing ? 0 : -1;
 FUNC_2(VAR_8, VAR_13, VAR_7, VAR_5, VAR_9 ^ VAR_15);
 FUNC_1(VAR_8, VAR_13, VAR_16, VAR_11.mode, VAR_11.path);
 FUNC_3(VAR_11.path);
 return 0;
}
