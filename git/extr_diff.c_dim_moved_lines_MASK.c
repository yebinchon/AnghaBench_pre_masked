
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct emitted_diff_symbol {scalar_t__ s; int flags; } ;
struct diff_options {TYPE_1__* emitted_symbols; } ;
struct TYPE_2__ {int nr; struct emitted_diff_symbol* buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(struct diff_options *VAR_6)
{
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_6->emitted_symbols->nr; VAR_7++) {
  struct emitted_diff_symbol *VAR_8 = (VAR_7 != 0) ?
    &VAR_6->emitted_symbols->buf[VAR_7 - 1] : ((void*)0);
  struct emitted_diff_symbol *VAR_9 = &VAR_6->emitted_symbols->buf[VAR_7];
  struct emitted_diff_symbol *VAR_10 =
    (VAR_7 < VAR_6->emitted_symbols->nr - 1) ?
    &VAR_6->emitted_symbols->buf[VAR_7 + 1] : ((void*)0);


  if (VAR_9->s != VAR_5 && VAR_9->s != VAR_0)
   continue;


  if (!(VAR_9->flags & VAR_1))
   continue;





  if (VAR_8 && VAR_8->s != VAR_5 &&
       VAR_8->s != VAR_0)
   VAR_8 = ((void*)0);
  if (VAR_10 && VAR_10->s != VAR_5 &&
       VAR_10->s != VAR_0)
   VAR_10 = ((void*)0);


  if ((VAR_8 &&
      (VAR_8->flags & VAR_4) ==
      (VAR_9->flags & VAR_4)) &&
      (VAR_10 &&
      (VAR_10->flags & VAR_4) ==
      (VAR_9->flags & VAR_4))) {
   VAR_9->flags |= VAR_3;
   continue;
  }


  if (VAR_8 && (VAR_8->flags & VAR_1) &&
      (VAR_8->flags & VAR_2) !=
         (VAR_9->flags & VAR_2))
   continue;
  if (VAR_10 && (VAR_10->flags & VAR_1) &&
      (VAR_10->flags & VAR_2) !=
         (VAR_9->flags & VAR_2))
   continue;





  VAR_9->flags |= VAR_3;
 }
}
