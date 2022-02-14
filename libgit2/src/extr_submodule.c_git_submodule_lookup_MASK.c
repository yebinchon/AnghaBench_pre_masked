
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int path; scalar_t__ name; } ;
typedef TYPE_1__ git_submodule ;
struct TYPE_23__ {int * submodule_cache; scalar_t__ is_bare; } ;
typedef TYPE_2__ git_repository ;
typedef int git_config_backend ;
struct TYPE_24__ {char* ptr; int size; } ;
typedef TYPE_3__ git_buf ;
struct TYPE_25__ {char* path; scalar_t__ name; int * member_1; int * member_0; } ;
typedef TYPE_4__ fbp_data ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,char,scalar_t__,char const*,int ) ;
 int FUNC_6 (TYPE_3__*,char const*) ;
 int FUNC_7 (int *,char const*,int ,TYPE_4__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 TYPE_1__* FUNC_12 (int *,char const*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (unsigned int*,TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int * FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (TYPE_1__**,TYPE_2__*,char const*) ;
 int FUNC_18 (int,char const*) ;

int FUNC_19(
 git_submodule **VAR_8,
 git_repository *VAR_9,
 const char *VAR_10)
{
 int VAR_11;
 unsigned int VAR_12;
 git_submodule *VAR_13;

 FUNC_1(VAR_9 && VAR_10);

 if (VAR_9->is_bare) {
  FUNC_9(VAR_5, "cannot get submodules without a working tree");
  return -1;
 }

 if (VAR_9->submodule_cache != ((void*)0)) {
  if ((VAR_13 = FUNC_12(VAR_9->submodule_cache, VAR_10)) != ((void*)0)) {
   if (VAR_8) {
    *VAR_8 = VAR_13;
    FUNC_0(*VAR_8);
   }
   return 0;
  }
 }

 if ((VAR_11 = FUNC_17(&VAR_13, VAR_9, VAR_10)) < 0)
  return VAR_11;

 if ((VAR_11 = FUNC_15(VAR_13, 0)) < 0) {
  FUNC_13(VAR_13);
  return VAR_11;
 }

 if ((VAR_11 = FUNC_14(&VAR_12, VAR_13)) < 0) {
  FUNC_13(VAR_13);
  return VAR_11;
 }


 if (VAR_12 == 0 || VAR_12 == VAR_6) {
  git_config_backend *VAR_14;
  const char *VAR_15 = "submodule\\..*\\.path";
  git_buf VAR_16 = VAR_2;
  fbp_data VAR_17 = { ((void*)0), ((void*)0) };

  FUNC_6(&VAR_16, VAR_10);
  while (VAR_16.ptr[VAR_16.size-1] == '/') {
   VAR_16.ptr[--VAR_16.size] = '\0';
  }
  VAR_17.path = VAR_16.ptr;

  VAR_14 = FUNC_16(VAR_9, VAR_1);

  if (VAR_14)
   VAR_11 = FUNC_7(VAR_14, VAR_15, VAR_7, &VAR_17);

  FUNC_8(VAR_14);

  if (VAR_11 < 0) {
   FUNC_13(VAR_13);
   FUNC_4(&VAR_16);
   return VAR_11;
  }

  if (VAR_17.name) {
   FUNC_2(VAR_13->name);
   VAR_13->name = VAR_17.name;
   VAR_13->path = FUNC_3(&VAR_16);


   if ((VAR_11 = FUNC_15(VAR_13, 0)) < 0) {
    FUNC_13(VAR_13);
    return VAR_11;
   }
  }

  FUNC_4(&VAR_16);
 }

 if ((VAR_11 = FUNC_14(&VAR_12, VAR_13)) < 0) {
  FUNC_13(VAR_13);
  return VAR_11;
 }


 if (VAR_12 == 0 || VAR_12 == VAR_6) {
  FUNC_13(VAR_13);
  VAR_11 = VAR_4;


  if (FUNC_11(VAR_9)) {
   git_buf VAR_18 = VAR_2;
   if (FUNC_5(&VAR_18,
       '/', FUNC_11(VAR_9), VAR_10, VAR_0) < 0)
    return -1;

   if (FUNC_10(VAR_18.ptr))
    VAR_11 = VAR_3;

   FUNC_4(&VAR_18);
  }

  FUNC_18(VAR_11, VAR_10);
  return VAR_11;
 }

 if (VAR_8)
  *VAR_8 = VAR_13;
 else
  FUNC_13(VAR_13);

 return 0;
}
