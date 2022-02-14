
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_1__ git_regmatch ;
struct TYPE_14__ {int flags; int re; } ;
typedef TYPE_2__ git_diff_driver_pattern ;
struct TYPE_15__ {int fn_patterns; } ;
typedef TYPE_3__ git_diff_driver ;
struct TYPE_16__ {int ptr; } ;
typedef TYPE_4__ git_buf ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,scalar_t__) ;
 int FUNC_6 (int *,int ,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(
 git_diff_driver *VAR_1, git_buf *VAR_2)
{
 size_t VAR_3, VAR_4 = FUNC_1(VAR_1->fn_patterns);
 git_regmatch VAR_5[2];

 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
  git_diff_driver_pattern *VAR_6 = FUNC_0(VAR_1->fn_patterns, VAR_3);

  if (!FUNC_6(&VAR_6->re, VAR_2->ptr, 2, VAR_5)) {
   if (VAR_6->flags & VAR_0)
    return 0;


   VAR_3 = (VAR_5[1].start >= 0) ? 1 : 0;
   FUNC_2(VAR_2, FUNC_3(VAR_2) + VAR_5[VAR_3].start);
   FUNC_5(VAR_2, VAR_5[VAR_3].end - VAR_5[VAR_3].start);
   FUNC_4(VAR_2);

   return 1;
  }
 }

 return 0;
}
