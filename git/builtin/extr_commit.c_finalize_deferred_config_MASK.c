
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wt_status {scalar_t__ show_branch; scalar_t__ ahead_behind_flags; scalar_t__ null_termination; } ;
struct TYPE_2__ {scalar_t__ status_format; scalar_t__ show_branch; scalar_t__ ahead_behind; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_2(struct wt_status *VAR_9)
{
 int VAR_10 = (VAR_8 != VAR_4 &&
       VAR_8 != VAR_5 &&
       !VAR_9->null_termination);

 if (VAR_9->null_termination) {
  if (VAR_8 == VAR_3 ||
      VAR_8 == VAR_6)
   VAR_8 = VAR_4;
  else if (VAR_8 == VAR_2)
   FUNC_1(FUNC_0("--long and -z are incompatible"));
 }

 if (VAR_10 && VAR_8 == VAR_6)
  VAR_8 = VAR_7.status_format;
 if (VAR_8 == VAR_6)
  VAR_8 = VAR_3;

 if (VAR_10 && VAR_9->show_branch < 0)
  VAR_9->show_branch = VAR_7.show_branch;
 if (VAR_9->show_branch < 0)
  VAR_9->show_branch = 0;
 if (VAR_10 &&
     VAR_9->ahead_behind_flags == VAR_1)
  VAR_9->ahead_behind_flags = VAR_7.ahead_behind;

 if (VAR_9->ahead_behind_flags == VAR_1)
  VAR_9->ahead_behind_flags = VAR_0;
}
