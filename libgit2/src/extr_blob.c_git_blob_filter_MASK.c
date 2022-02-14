
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_filter_list ;
typedef int git_filter_flag_t ;
typedef int git_buf ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ git_blob_filter_options ;
typedef int git_blob ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,char const*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int) ;

int FUNC_9(
 git_buf *VAR_9,
 git_blob *VAR_10,
 const char *VAR_11,
 git_blob_filter_options *VAR_12)
{
 int VAR_13 = 0;
 git_filter_list *VAR_14 = ((void*)0);
 git_blob_filter_options VAR_15 = VAR_3;
 git_filter_flag_t VAR_16 = VAR_6;

 FUNC_1(VAR_10 && VAR_11 && VAR_9);

 FUNC_4(VAR_9);

 FUNC_0(
  VAR_12, VAR_4, "git_blob_filter_options");

 if (VAR_12 != ((void*)0))
  FUNC_8(&VAR_15, VAR_12, sizeof(git_blob_filter_options));

 if ((VAR_15.flags & VAR_1) != 0 &&
     FUNC_2(VAR_10))
  return 0;

 if ((VAR_15.flags & VAR_2) != 0)
  VAR_16 |= VAR_7;

 if ((VAR_15.flags & VAR_0) != 0)
  VAR_16 |= VAR_5;

 if (!(VAR_13 = FUNC_7(
   &VAR_14, FUNC_3(VAR_10), VAR_10, VAR_11,
   VAR_8, VAR_16))) {

  VAR_13 = FUNC_5(VAR_9, VAR_14, VAR_10);

  FUNC_6(VAR_14);
 }

 return VAR_13;
}
