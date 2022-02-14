
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeh_pe {int type; int state; } ;
struct TYPE_2__ {int (* get_log ) (struct eeh_pe*,int,scalar_t__*,size_t) ;int (* configure_bridge ) (struct eeh_pe*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (struct eeh_pe*,int ) ;
 int FUNC_2 (struct eeh_pe*) ;
 int FUNC_3 (struct eeh_pe*,int ,size_t*) ;
 scalar_t__* VAR_7 ;
 int FUNC_4 (struct eeh_pe*) ;
 int FUNC_5 (struct eeh_pe*,int,scalar_t__*,size_t) ;

void FUNC_6(struct eeh_pe *VAR_8, int VAR_9)
{
 size_t VAR_10 = 0;
 if (!(VAR_8->type & VAR_4)) {
  if (FUNC_0(VAR_0) ||
      VAR_9 == VAR_1)
   FUNC_1(VAR_8, VAR_2);
  VAR_6->configure_bridge(VAR_8);
  if (!(VAR_8->state & VAR_3)) {
   FUNC_2(VAR_8);

   VAR_7[0] = 0;
   FUNC_3(VAR_8, VAR_5, &VAR_10);
  }
 }

 VAR_6->get_log(VAR_8, VAR_9, VAR_7, VAR_10);
}
