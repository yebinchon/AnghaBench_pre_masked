
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_patch ;
typedef int git_diff_options ;
struct TYPE_8__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_9__ {void* payload; int hunk_cb; } ;
typedef TYPE_2__ git_apply_options ;
typedef int git_apply_hunk_cb ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char**,unsigned int*,char const*,size_t,int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char const*,size_t,char const*,char const*,size_t,char const*,int const*) ;
 size_t FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(
 const char *VAR_2,
 const char *VAR_3,
 const char *VAR_4,
 const char *VAR_5,
 const char *VAR_6,
 const git_diff_options *VAR_7,
 git_apply_hunk_cb VAR_8,
 void *VAR_9)
{
 git_patch *VAR_10;
 git_buf VAR_11 = VAR_1;
 git_buf VAR_12 = VAR_1;
 git_apply_options VAR_13 = VAR_0;
 char *VAR_14;
 unsigned int VAR_15;
 int VAR_16;
 size_t VAR_17 = FUNC_8(VAR_2);
 size_t VAR_18 = FUNC_8(VAR_4);

 VAR_13.hunk_cb = VAR_8;
 VAR_13.payload = VAR_9;

 FUNC_2(FUNC_7(&VAR_10, VAR_2, VAR_17, VAR_3, VAR_4, VAR_18, VAR_5, VAR_7));
 if ((VAR_16 = FUNC_4(&VAR_11, &VAR_14, &VAR_15, VAR_2, VAR_17, VAR_10, &VAR_13)) == 0) {
  FUNC_1(VAR_6, VAR_11.ptr);
  FUNC_1(VAR_5, VAR_14);
  FUNC_0(0100644, VAR_15);
 }

 FUNC_3(VAR_14);
 FUNC_5(&VAR_11);
 FUNC_5(&VAR_12);
 FUNC_6(VAR_10);

 return VAR_16;
}
