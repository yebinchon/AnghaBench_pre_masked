
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ baselen; int flags; } ;
typedef TYPE_1__ futils__rmdir_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char const*,char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(void *VAR_8, const char *VAR_9)
{
 futils__rmdir_data *VAR_10 = VAR_8;
 int VAR_11 = 0;

 if (FUNC_2(VAR_9) <= VAR_10->baselen)
  VAR_11 = VAR_5;

 else if (FUNC_1(VAR_9) < 0) {
  int VAR_12 = VAR_7;

  if (VAR_12 == VAR_2 || VAR_12 == VAR_3) {

  } else if ((VAR_10->flags & VAR_6) == 0 &&
   VAR_12 == VAR_0) {
   VAR_11 = FUNC_0(VAR_7, VAR_9, "rmdir");
  } else if (VAR_12 == VAR_4 || VAR_12 == VAR_1 || VAR_12 == VAR_0) {
   VAR_11 = VAR_5;
  } else {
   VAR_11 = FUNC_0(VAR_7, VAR_9, "rmdir");
  }
 }

 return VAR_11;
}
