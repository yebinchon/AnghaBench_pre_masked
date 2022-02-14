
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
typedef int git_vector ;
typedef int git_repository ;
struct TYPE_14__ {int * ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int git_attr_session ;
struct TYPE_15__ {int flags; char const* workdir; int * files; int index; int * attr_session; int * repo; int * member_0; } ;
typedef TYPE_2__ attr_walk_up_info ;
struct TYPE_16__ {int * cfg_attr_file; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (TYPE_1__*,char const*,char const*) ;
 int FUNC_5 (TYPE_1__*,char const*,int (*) (TYPE_2__*,char*),TYPE_2__*) ;
 TYPE_6__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_1__*,int *,int ) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *,int ,int *,int *,int) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_15(
 git_repository *VAR_6,
 git_attr_session *VAR_7,
 uint32_t VAR_8,
 const char *VAR_9,
 git_vector *VAR_10)
{
 int VAR_11 = 0;
 git_buf VAR_12 = VAR_3, VAR_13 = VAR_3;
 const char *VAR_14 = FUNC_9(VAR_6);
 attr_walk_up_info VAR_15 = { ((void*)0) };

 if ((VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_8)) < 0)
  return VAR_11;


 if (VAR_14 != ((void*)0))
  VAR_11 = FUNC_4(&VAR_12, VAR_9, VAR_14);
 else
  VAR_11 = FUNC_3(&VAR_12, VAR_9);
 if (VAR_11 < 0)
  goto cleanup;
 if ((VAR_11 = FUNC_8(&VAR_13, VAR_6, VAR_5)) < 0 ||
     (VAR_11 = FUNC_10(VAR_6, VAR_7, VAR_10, VAR_2,
        VAR_13.ptr, VAR_1, 1)) < 0) {
  if (VAR_11 != VAR_4)
   goto cleanup;
 }

 VAR_15.repo = VAR_6;
 VAR_15.attr_session = VAR_7;
 VAR_15.flags = VAR_8;
 VAR_15.workdir = VAR_14;
 if (FUNC_7(&VAR_15.index, VAR_6) < 0)
  FUNC_2();
 VAR_15.files = VAR_10;

 if (!FUNC_13(VAR_12.ptr, "."))
  VAR_11 = FUNC_11(&VAR_15, "");
 else
  VAR_11 = FUNC_5(&VAR_12, VAR_14, FUNC_11, &VAR_15);

 if (VAR_11 < 0)
  goto cleanup;

 if (FUNC_6(VAR_6)->cfg_attr_file != ((void*)0)) {
  VAR_11 = FUNC_10(VAR_6, VAR_7, VAR_10, VAR_2,
           ((void*)0), FUNC_6(VAR_6)->cfg_attr_file, 1);
  if (VAR_11 < 0)
   goto cleanup;
 }

 if ((VAR_8 & VAR_0) == 0) {
  VAR_11 = FUNC_14(&VAR_12, VAR_7);

  if (!VAR_11)
   VAR_11 = FUNC_10(VAR_6, VAR_7, VAR_10, VAR_2,
            ((void*)0), VAR_12.ptr, 1);
  else if (VAR_11 == VAR_4)
   VAR_11 = 0;
 }

 cleanup:
 if (VAR_11 < 0)
  FUNC_12(VAR_10);
 FUNC_1(&VAR_13);
 FUNC_1(&VAR_12);

 return VAR_11;
}
