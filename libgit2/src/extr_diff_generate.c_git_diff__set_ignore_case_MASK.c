
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {int deltas; int entrycomp; int pfxcomp; int strncomp; int strcomp; TYPE_1__ opts; } ;
typedef TYPE_2__ git_diff ;


 int VAR_0 ;
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
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(git_diff *VAR_11, bool VAR_12)
{
 if (!VAR_12) {
  VAR_11->opts.flags &= ~VAR_0;

  VAR_11->strcomp = VAR_4;
  VAR_11->strncomp = VAR_6;
  VAR_11->pfxcomp = VAR_1;
  VAR_11->entrycomp = VAR_7;

  FUNC_0(&VAR_11->deltas, VAR_10);
 } else {
  VAR_11->opts.flags |= VAR_0;

  VAR_11->strcomp = VAR_3;
  VAR_11->strncomp = VAR_5;
  VAR_11->pfxcomp = VAR_2;
  VAR_11->entrycomp = VAR_8;

  FUNC_0(&VAR_11->deltas, VAR_9);
 }

 FUNC_1(&VAR_11->deltas);
}
