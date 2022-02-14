
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s390_pxts_ctx {unsigned long fc; TYPE_1__* pk; int * kb; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,unsigned long) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct s390_pxts_ctx *VAR_6)
{
 unsigned long VAR_7;

 if (FUNC_0(&VAR_6->kb[0], &VAR_6->pk[0]) ||
     FUNC_0(&VAR_6->kb[1], &VAR_6->pk[1]))
  return -VAR_2;

 if (VAR_6->pk[0].type != VAR_6->pk[1].type)
  return -VAR_2;


 VAR_7 = (VAR_6->pk[0].type == VAR_3) ? VAR_0 :
  (VAR_6->pk[0].type == VAR_4) ?
  VAR_1 : 0;


 VAR_6->fc = (VAR_7 && FUNC_1(&VAR_5, VAR_7)) ? VAR_7 : 0;

 return VAR_6->fc ? 0 : -VAR_2;
}
