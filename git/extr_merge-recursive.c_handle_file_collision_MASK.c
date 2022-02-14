
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct merge_options {char const* branch1; TYPE_1__* priv; } ;
struct diff_filespec {char* path; scalar_t__ mode; int oid; } ;
struct merge_file_info {int clean; struct diff_filespec blob; } ;
struct TYPE_2__ {int call_depth; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct merge_options*,struct diff_filespec*,struct diff_filespec*,struct diff_filespec*,char const*,char const*,char const*,int,struct merge_file_info*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct merge_options*,int,int ,char const*) ;
 int FUNC_5 (struct merge_options*,int,char const*,int) ;
 char* FUNC_6 (struct merge_options*,char const*,char*) ;
 scalar_t__ FUNC_7 (struct merge_options*,int,struct diff_filespec*,char const*) ;
 scalar_t__ FUNC_8 (struct merge_options*,char const*,int *,struct diff_filespec*,struct diff_filespec*) ;
 scalar_t__ FUNC_9 (struct merge_options*,char const*) ;
 scalar_t__ FUNC_10 (struct merge_options*,char const*) ;

__attribute__((used)) static int FUNC_11(struct merge_options *VAR_1,
     const char *VAR_2,
     const char *VAR_3,
     const char *VAR_4,
     const char *VAR_5, const char *VAR_6,
     struct diff_filespec *VAR_7,
     struct diff_filespec *VAR_8)
{
 struct merge_file_info VAR_9;
 struct diff_filespec VAR_10;
 char *VAR_11 = ((void*)0);
 const char *VAR_12 = VAR_2;







 if (VAR_5 != VAR_1->branch1) {
  return FUNC_11(VAR_1, VAR_2,
          VAR_4, VAR_3,
          VAR_6, VAR_5,
          VAR_8, VAR_7);
 }




 if (VAR_1->priv->call_depth && (VAR_3 || VAR_4)) {

  if (VAR_3) {
   if (FUNC_7(VAR_1, 1, VAR_7, VAR_3))
    return -1;
  } else {
   if (FUNC_7(VAR_1, 1, VAR_7, VAR_2))
    return -1;
  }


  if (VAR_4) {
   if (FUNC_7(VAR_1, 1, VAR_8, VAR_4))
    return -1;
  } else {
   if (FUNC_7(VAR_1, 1, VAR_8, VAR_2))
    return -1;
  }


  if (VAR_3 && VAR_4)
   FUNC_5(VAR_1, 1, VAR_2, 0);

  return 0;
 }


 if (VAR_3)
  FUNC_5(VAR_1, 1, VAR_3,
       VAR_1->priv->call_depth || FUNC_10(VAR_1, VAR_3));
 if (VAR_4)
  FUNC_5(VAR_1, 1, VAR_4,
       VAR_1->priv->call_depth || FUNC_10(VAR_1, VAR_4));






 if (FUNC_9(VAR_1, VAR_2)) {
  FUNC_4(VAR_1, 1, FUNC_0("Refusing to lose dirty file at %s"),
         VAR_2);
  VAR_12 = VAR_11 = FUNC_6(VAR_1, VAR_2, "merged");
 } else if (FUNC_10(VAR_1, VAR_2)) {






  FUNC_4(VAR_1, 1, FUNC_0("Refusing to lose untracked file at "
          "%s, even though it's in the way."),
         VAR_2);
  VAR_12 = VAR_11 = FUNC_6(VAR_1, VAR_2, "merged");
 } else {
  FUNC_5(VAR_1, 0, VAR_2, 0);
 }


 VAR_10.path = (char *)VAR_2;
 FUNC_3(&VAR_10.oid, &VAR_0);
 VAR_10.mode = 0;

 if (FUNC_2(VAR_1, &VAR_10, VAR_7, VAR_8, VAR_2,
        VAR_5, VAR_6, VAR_1->priv->call_depth * 2, &VAR_9))
  return -1;
 VAR_9.clean &= !VAR_11;
 if (FUNC_7(VAR_1, VAR_9.clean, &VAR_9.blob, VAR_12))
  return -1;
 if (!VAR_9.clean && !VAR_1->priv->call_depth &&
     FUNC_8(VAR_1, VAR_2, ((void*)0), VAR_7, VAR_8))
  return -1;
 FUNC_1(VAR_11);







 return VAR_9.clean;
}
