
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {char* content; int mode; scalar_t__ path; } ;
typedef TYPE_1__ repo_template_item ;
typedef int mode_t ;
struct TYPE_12__ {int flags; scalar_t__ mode; char* template_path; char* description; } ;
typedef TYPE_2__ git_repository_init_options ;
typedef int git_config ;
struct TYPE_13__ {char* ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int *,char*) ;
 int FUNC_4 (int **) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char const*,char const*,int,int ) ;
 int FUNC_8 (scalar_t__,char const*,int ,int,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (char const*,int) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_1__* VAR_15 ;
 scalar_t__ FUNC_12 (char const*,char const*,int) ;
 int FUNC_13 (char const*,int,scalar_t__,int ,int,char const*) ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_15(
 const char *VAR_16,
 const char *VAR_17,
 git_repository_init_options *VAR_18)
{
 int VAR_19 = 0;
 repo_template_item *VAR_20;
 bool VAR_21 =
  ((VAR_18->flags & VAR_10) != 0);
 mode_t VAR_22 = FUNC_11(VAR_18);
 bool VAR_23 = VAR_18->mode != VAR_12;
 if ((VAR_18->flags & VAR_9) == 0 &&
  (VAR_18->flags & VAR_14) == 0)
 {
  if (FUNC_12(VAR_17, VAR_16, VAR_18->flags & VAR_11) < 0)
   return -1;
 }


 if (VAR_21) {
  git_config *VAR_24 = ((void*)0);
  const char *VAR_25 = ((void*)0);
  bool VAR_26 = 0;
  git_buf VAR_27 = VAR_0;

  if (VAR_18->template_path)
   VAR_25 = VAR_18->template_path;
  else if ((VAR_19 = FUNC_4(&VAR_24)) >= 0) {
   if (!FUNC_3(&VAR_27, VAR_24, "init.templatedir"))
    VAR_25 = VAR_27.ptr;
   FUNC_5();
  }

  if (!VAR_25) {
   if (!(VAR_19 = FUNC_9(&VAR_27)))
    VAR_25 = VAR_27.ptr;
   VAR_26 = 1;
  }







  if (VAR_25 && FUNC_0(VAR_25, "") != 0) {
   uint32_t VAR_28 = VAR_3 |
    VAR_4 |
    VAR_2;
   if (VAR_18->mode != VAR_12)
     VAR_28 |= VAR_1;
   VAR_19 = FUNC_7(VAR_25, VAR_16, VAR_28, VAR_22);
  }

  FUNC_1(&VAR_27);
  FUNC_2(VAR_24);

  if (VAR_19 < 0) {
   if (!VAR_26)
    return VAR_19;


   FUNC_5();
   VAR_21 = 0;
   VAR_19 = 0;
  }
 }





 for (VAR_20 = VAR_15; !VAR_19 && VAR_20->path; ++VAR_20) {
  if (!VAR_20->content) {
   uint32_t VAR_29 = VAR_8;
   if (VAR_23)
    VAR_29 |= VAR_7;

   VAR_19 = FUNC_8(
    VAR_20->path, VAR_16, VAR_22, VAR_29, ((void*)0));
  }
  else if (!VAR_21) {
   const char *VAR_30 = VAR_20->content;

   if (VAR_18->description && FUNC_14(VAR_20->path, VAR_5) == 0)
    VAR_30 = VAR_18->description;

   VAR_19 = FUNC_13(
    VAR_16, 0, VAR_20->path, VAR_20->mode, 0, VAR_30);
  }
 }

 return VAR_19;
}
