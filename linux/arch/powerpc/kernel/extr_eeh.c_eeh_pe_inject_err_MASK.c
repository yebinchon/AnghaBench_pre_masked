
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeh_pe {int dummy; } ;
struct TYPE_2__ {int (* err_inject ) (struct eeh_pe*,int,int,unsigned long,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (struct eeh_pe*,int,int,unsigned long,unsigned long) ;

int FUNC_1(struct eeh_pe *VAR_8, int VAR_9, int VAR_10,
        unsigned long VAR_11, unsigned long VAR_12)
{

 if (!VAR_8)
  return -VAR_5;


 if (!VAR_7 || !VAR_7->err_inject)
  return -VAR_6;


 if (VAR_9 != VAR_2 && VAR_9 != VAR_3)
  return -VAR_4;


 if (VAR_10 < VAR_1 || VAR_10 > VAR_0)
  return -VAR_4;

 return VAR_7->err_inject(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
}
