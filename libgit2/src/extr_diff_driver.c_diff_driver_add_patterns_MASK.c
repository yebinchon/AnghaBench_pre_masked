
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int flags; int re; } ;
typedef TYPE_1__ git_diff_driver_pattern ;
struct TYPE_11__ {int fn_patterns; } ;
typedef TYPE_2__ git_diff_driver ;
struct TYPE_12__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char const*,int) ;
 int FUNC_4 (TYPE_3__*,char const*) ;
 int FUNC_5 (int *,int ,int) ;
 char* FUNC_6 (char const*,char) ;

__attribute__((used)) static int FUNC_7(
 git_diff_driver *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 const char *VAR_6, *VAR_7;
 git_diff_driver_pattern *VAR_8 = ((void*)0);
 git_buf VAR_9 = VAR_0;

 for (VAR_6 = VAR_3; VAR_6; VAR_6 = VAR_7) {

  if ((VAR_8 = FUNC_0(VAR_2->fn_patterns)) == ((void*)0)) {
   return -1;
  }

  VAR_8->flags = VAR_4;
  if (*VAR_6 == '!') {
   VAR_8->flags |= VAR_1;
   ++VAR_6;
  }

  if ((VAR_7 = FUNC_6(VAR_6, '\n')) != ((void*)0)) {
   VAR_5 = FUNC_3(&VAR_9, VAR_6, VAR_7 - VAR_6);
   VAR_7++;
  } else {
   VAR_5 = FUNC_4(&VAR_9, VAR_6);
  }
  if (VAR_5 < 0)
   break;

  if ((VAR_5 = FUNC_5(&VAR_8->re, VAR_9.ptr, VAR_4)) != 0) {



  }
 }

 if (VAR_5 && VAR_8 != ((void*)0))
  (void)FUNC_1(VAR_2->fn_patterns);
 FUNC_2(&VAR_9);


 return 0;
}
