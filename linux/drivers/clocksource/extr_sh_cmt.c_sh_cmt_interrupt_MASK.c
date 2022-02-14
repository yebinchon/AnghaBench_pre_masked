
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* event_handler ) (TYPE_3__*) ;} ;
struct sh_cmt_channel {int flags; scalar_t__ match_value; scalar_t__ next_match_value; scalar_t__ max_match_value; TYPE_3__ ced; int total_cycles; TYPE_2__* cmt; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {TYPE_1__* info; } ;
struct TYPE_6__ {int clear_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct sh_cmt_channel*,int) ;
 int FUNC_3 (struct sh_cmt_channel*) ;
 int FUNC_4 (struct sh_cmt_channel*,int) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct sh_cmt_channel *VAR_8 = VAR_7;


 FUNC_4(VAR_8, FUNC_3(VAR_8) &
      VAR_8->cmt->info->clear_bits);





 if (VAR_8->flags & VAR_1)
  VAR_8->total_cycles += VAR_8->match_value + 1;

 if (!(VAR_8->flags & VAR_3))
  VAR_8->next_match_value = VAR_8->max_match_value;

 VAR_8->flags |= VAR_2;

 if (VAR_8->flags & VAR_0) {
  if (!(VAR_8->flags & VAR_4)) {
   if (FUNC_0(&VAR_8->ced)) {
    VAR_8->next_match_value = VAR_8->max_match_value;
    VAR_8->flags |= VAR_3;
   }

   VAR_8->ced.event_handler(&VAR_8->ced);
  }
 }

 VAR_8->flags &= ~VAR_4;

 if (VAR_8->flags & VAR_3) {
  VAR_8->flags &= ~VAR_3;
  FUNC_2(VAR_8, 1);

  if (VAR_8->flags & VAR_0)
   if ((FUNC_1(&VAR_8->ced))
       || (VAR_8->match_value == VAR_8->next_match_value))
    VAR_8->flags &= ~VAR_3;
 }

 VAR_8->flags &= ~VAR_2;

 return VAR_5;
}
