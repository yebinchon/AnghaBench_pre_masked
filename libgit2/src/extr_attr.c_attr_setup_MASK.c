
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int git_repository ;
typedef int git_index ;
struct TYPE_12__ {char const* ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_13__ {int init_setup; } ;
typedef TYPE_2__ git_attr_session ;
struct TYPE_14__ {char const* cfg_attr_file; } ;


 int VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_7__* FUNC_3 (int *) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int ) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_2__*,int ,char const*,char const*,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(
 git_repository *VAR_9,
 git_attr_session *VAR_10,
 uint32_t VAR_11)
{
 git_buf VAR_12 = VAR_6;
 git_index *VAR_13 = ((void*)0);
 const char *VAR_14;
 int VAR_15 = 0;

 if (VAR_10 && VAR_10->init_setup)
  return 0;

 if ((VAR_15 = FUNC_0(VAR_9)) < 0)
  return VAR_15;






 if ((VAR_15 = FUNC_8(&VAR_12, VAR_10)) < 0 ||
     (VAR_15 = FUNC_7(VAR_9, VAR_10, VAR_3,
           ((void*)0), VAR_12.ptr, 1)) < 0) {
  if (VAR_15 != VAR_7)
   goto out;
 }

 if ((VAR_15 = FUNC_7(VAR_9, VAR_10, VAR_3,
           ((void*)0), FUNC_3(VAR_9)->cfg_attr_file, 1)) < 0)
  goto out;

 FUNC_1(&VAR_12);
 if ((VAR_15 = FUNC_5(&VAR_12, VAR_9, VAR_8)) < 0 ||
     (VAR_15 = FUNC_7(VAR_9, VAR_10, VAR_3,
           VAR_12.ptr, VAR_2, 1)) < 0) {
  if (VAR_15 != VAR_7)
   goto out;
 }

 if ((VAR_14 = FUNC_6(VAR_9)) != ((void*)0) &&
     (VAR_15 = FUNC_7(VAR_9, VAR_10, VAR_3,
           VAR_14, VAR_1, 1)) < 0)
   goto out;

 if ((VAR_15 = FUNC_4(&VAR_13, VAR_9)) < 0 ||
     (VAR_15 = FUNC_7(VAR_9, VAR_10, VAR_5,
           ((void*)0), VAR_1, 1)) < 0)
   goto out;

 if ((VAR_11 & VAR_0) != 0 &&
     (VAR_15 = FUNC_7(VAR_9, VAR_10, VAR_4,
           ((void*)0), VAR_1, 1)) < 0)
  goto out;

 if (VAR_10)
  VAR_10->init_setup = 1;

out:
 FUNC_2(&VAR_12);

 return VAR_15;
}
