
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_4__ {int ptr; int size; } ;
typedef TYPE_1__ git_buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,char const*) ;
 int FUNC_5 (TYPE_1__*,char) ;
 scalar_t__ FUNC_6 (int ,struct stat*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(git_buf *VAR_3, const char *VAR_4)
{
 int VAR_5 = VAR_1;
 struct stat VAR_6;

 while (VAR_5 == VAR_1) {
  FUNC_5(VAR_3, '/');

  if (!VAR_3->size || FUNC_4(VAR_3->ptr, VAR_4) != 0)
   VAR_5 = 0;
  else if (FUNC_6(VAR_3->ptr, &VAR_6) == 0) {
   if (FUNC_2(VAR_6.st_mode) || FUNC_1(VAR_6.st_mode))
    VAR_5 = FUNC_7(VAR_3->ptr);
   else if (!FUNC_0(VAR_6.st_mode))
    VAR_5 = -1;
  } else if (VAR_2 != VAR_0)
   VAR_5 = -1;
 }

 if (VAR_5)
  FUNC_3(VAR_3->ptr, "cannot remove parent");

 return VAR_5;
}
