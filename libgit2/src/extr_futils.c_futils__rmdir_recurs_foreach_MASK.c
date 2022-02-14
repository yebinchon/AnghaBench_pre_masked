
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_9__ {scalar_t__ depth; int flags; int base; } ;
typedef TYPE_2__ futils__rmdir_data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int (*) (void*,TYPE_1__*),TYPE_2__*) ;
 int FUNC_4 (scalar_t__,int ,char*) ;
 int FUNC_5 (int ,struct stat*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void *VAR_11, git_buf *VAR_12)
{
 int VAR_13 = 0;
 futils__rmdir_data *VAR_14 = VAR_11;
 struct stat VAR_15;

 if (VAR_14->depth > VAR_5)
  VAR_13 = FUNC_1(
   VAR_12->ptr, "directory nesting too deep");

 else if ((VAR_13 = FUNC_5(VAR_12->ptr, &VAR_15)) < 0) {
  if (VAR_10 == VAR_2)
   VAR_13 = 0;
  else if (VAR_10 == VAR_3) {

   if ((VAR_14->flags & VAR_6) != 0)
    VAR_13 = FUNC_2(VAR_12, VAR_14->base);
   else
    FUNC_1(
     VAR_12->ptr, "parent is not directory");
  }
  else
   VAR_13 = FUNC_4(VAR_10, VAR_12->ptr, "rmdir");
 }

 else if (FUNC_0(VAR_15.st_mode)) {
  VAR_14->depth++;

  VAR_13 = FUNC_3(VAR_12, 0, FUNC_8, VAR_14);

  VAR_14->depth--;

  if (VAR_13 < 0)
   return VAR_13;

  if (VAR_14->depth == 0 && (VAR_14->flags & VAR_9) != 0)
   return VAR_13;

  if ((VAR_13 = FUNC_6(VAR_12->ptr)) < 0) {
   if ((VAR_14->flags & VAR_8) != 0 &&
    (VAR_10 == VAR_4 || VAR_10 == VAR_1 || VAR_10 == VAR_0))
    VAR_13 = 0;
   else
    VAR_13 = FUNC_4(VAR_10, VAR_12->ptr, "rmdir");
  }
 }

 else if ((VAR_14->flags & VAR_7) != 0) {
  if (FUNC_7(VAR_12->ptr) < 0)
   VAR_13 = FUNC_4(VAR_10, VAR_12->ptr, "remove");
 }

 else if ((VAR_14->flags & VAR_8) == 0)
  VAR_13 = FUNC_1(VAR_12->ptr, "still present");

 return VAR_13;
}
