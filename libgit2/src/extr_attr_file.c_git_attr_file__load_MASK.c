
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct stat {int st_size; int st_mode; } ;
typedef int git_tree_entry ;
typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_off_t ;
typedef int git_buf ;
typedef scalar_t__ git_bom_t ;
typedef int git_blob ;
struct TYPE_14__ {int key; } ;
typedef TYPE_2__ git_attr_session ;
typedef int const git_attr_file_source ;
typedef int (* git_attr_file_parser ) (int *,TYPE_3__*,char const*,int) ;
struct TYPE_16__ {int path; int fullpath; } ;
typedef TYPE_4__ git_attr_file_entry ;
struct TYPE_13__ {int stamp; int oid; } ;
struct TYPE_15__ {int nonexistent; TYPE_1__ cache_data; int session_key; } ;
typedef TYPE_3__ git_attr_file ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__**,TYPE_4__*,int const) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,size_t) ;
 int FUNC_13 (scalar_t__*,int *) ;
 int FUNC_14 (int ,char*,int const) ;
 int FUNC_15 (int *,struct stat*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int,size_t) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int **,int *) ;
 int FUNC_20 (int **,int *,int ) ;
 int FUNC_21 (int *) ;
 int * FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int ,struct stat*) ;

int FUNC_27(
 git_attr_file **VAR_3,
 git_repository *VAR_4,
 git_attr_session *VAR_5,
 git_attr_file_entry *VAR_6,
 git_attr_file_source VAR_7,
 git_attr_file_parser VAR_8,
 bool VAR_9)
{
 int VAR_10 = 0;
 git_tree *VAR_11 = ((void*)0);
 git_tree_entry *VAR_12 = ((void*)0);
 git_blob *VAR_13 = ((void*)0);
 git_buf VAR_14 = VAR_1;
 const char *VAR_15;
 git_attr_file *VAR_16;
 struct stat VAR_17;
 bool VAR_18 = 0;
 int VAR_19;
 git_bom_t VAR_20;
 git_oid VAR_21;
 git_off_t VAR_22;

 *VAR_3 = ((void*)0);

 switch (VAR_7) {
 case 128:

  break;
 case 129: {
  if ((VAR_10 = FUNC_2(&VAR_21, VAR_4, VAR_6->path)) < 0 ||
   (VAR_10 = FUNC_7(&VAR_13, VAR_4, &VAR_21)) < 0)
   return VAR_10;



  VAR_22 = FUNC_9(VAR_13);

  FUNC_0(VAR_22);
  FUNC_12(&VAR_14, FUNC_8(VAR_13), (size_t)VAR_22);
  break;
 }
 case 131: {
  int VAR_23 = -1;




  if (FUNC_26(VAR_6->fullpath, &VAR_17) < 0 ||
   FUNC_1(VAR_17.st_mode) ||
   (VAR_23 = FUNC_16(VAR_6->fullpath)) < 0 ||
   (VAR_10 = FUNC_17(&VAR_14, VAR_23, (size_t)VAR_17.st_size)) < 0)
   VAR_18 = 1;

  if (VAR_23 >= 0)
   FUNC_25(VAR_23);

  break;
 }
 case 130: {
  if ((VAR_10 = FUNC_19(&VAR_11, VAR_4)) < 0 ||
      (VAR_10 = FUNC_20(&VAR_12, VAR_11, VAR_6->path)) < 0 ||
      (VAR_10 = FUNC_7(&VAR_13, VAR_4, FUNC_22(VAR_12))) < 0)
   goto cleanup;





  VAR_22 = FUNC_9(VAR_13);

  FUNC_0(VAR_22);
  if ((VAR_10 = FUNC_12(&VAR_14,
   FUNC_8(VAR_13), (size_t)VAR_22)) < 0)
   goto cleanup;

  break;
 }
 default:
  FUNC_14(VAR_2, "unknown file source %d", VAR_7);
  return -1;
 }

 if ((VAR_10 = FUNC_4(&VAR_16, VAR_6, VAR_7)) < 0)
  goto cleanup;


 VAR_15 = FUNC_10(&VAR_14);
 VAR_19 = FUNC_13(&VAR_20, &VAR_14);

 if (VAR_20 == VAR_0)
  VAR_15 += VAR_19;




 if (VAR_5)
  VAR_16->session_key = VAR_5->key;

 if (VAR_8 && (VAR_10 = VAR_8(VAR_4, VAR_16, VAR_15, VAR_9)) < 0) {
  FUNC_3(VAR_16);
  goto cleanup;
 }


 if (VAR_18)
  VAR_16->nonexistent = 1;
 else if (VAR_7 == 129)
  FUNC_18(&VAR_16->cache_data.oid, FUNC_6(VAR_13));
 else if (VAR_7 == 130)
  FUNC_18(&VAR_16->cache_data.oid, FUNC_24(VAR_11));
 else if (VAR_7 == 131)
  FUNC_15(&VAR_16->cache_data.stamp, &VAR_17);


 *VAR_3 = VAR_16;

cleanup:
 FUNC_5(VAR_13);
 FUNC_21(VAR_12);
 FUNC_23(VAR_11);
 FUNC_11(&VAR_14);

 return VAR_10;
}
