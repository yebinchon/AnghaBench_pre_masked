
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eeh_pe {int state; TYPE_1__* parent; } ;
struct TYPE_4__ {int (* get_state ) (struct eeh_pe*,int *) ;} ;
struct TYPE_3__ {int state; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int FUNC_0 (struct eeh_pe*,int *) ;

int FUNC_1(struct eeh_pe *VAR_14)
{
 int VAR_15, VAR_16 = 0;
 bool VAR_17, VAR_18, VAR_19;


 if (!VAR_14)
  return -VAR_11;

 if (!VAR_13 || !VAR_13->get_state)
  return -VAR_12;







 if (VAR_14->parent &&
     !(VAR_14->state & VAR_2) &&
     (VAR_14->parent->state & (VAR_0 | VAR_1)))
  return VAR_7;

 VAR_15 = VAR_13->get_state(VAR_14, ((void*)0));
 VAR_17 = !!(VAR_15 & VAR_10);
 VAR_18 = !!(VAR_15 & VAR_8);
 VAR_19 = !!(VAR_15 & VAR_9);

 if (VAR_17)
  VAR_16 = VAR_4;
 else if (VAR_18 && VAR_19)
  VAR_16 = VAR_3;
 else if (!VAR_18 && !VAR_19)
  VAR_16 = VAR_6;
 else if (!VAR_18 && VAR_19)
  VAR_16 = VAR_5;
 else
  VAR_16 = VAR_7;

 return VAR_16;
}
