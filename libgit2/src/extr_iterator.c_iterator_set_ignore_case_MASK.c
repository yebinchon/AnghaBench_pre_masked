
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_vector_cmp ;
struct TYPE_3__ {scalar_t__ strcomp; int pathlist; int entry_srch; int prefixcomp; int strncomp; int flags; } ;
typedef TYPE_1__ git_iterator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(git_iterator *VAR_9, bool VAR_10)
{
 if (VAR_10)
  VAR_9->flags |= VAR_0;
 else
  VAR_9->flags &= ~VAR_0;

 VAR_9->strcomp = VAR_10 ? VAR_3 : VAR_4;
 VAR_9->strncomp = VAR_10 ? VAR_5 : VAR_6;
 VAR_9->prefixcomp = VAR_10 ? VAR_2 : VAR_1;
 VAR_9->entry_srch = VAR_10 ? VAR_7 : VAR_8;

 FUNC_0(&VAR_9->pathlist, (git_vector_cmp)VAR_9->strcomp);
}
