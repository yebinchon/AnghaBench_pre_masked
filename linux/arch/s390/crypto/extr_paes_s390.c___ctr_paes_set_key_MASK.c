
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct s390_paes_ctx {unsigned long fc; TYPE_1__ pk; int kb; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,unsigned long) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct s390_paes_ctx *VAR_8)
{
 unsigned long VAR_9;

 if (FUNC_0(&VAR_8->kb, &VAR_8->pk))
  return -VAR_3;


 VAR_9 = (VAR_8->pk.type == VAR_4) ? VAR_0 :
  (VAR_8->pk.type == VAR_5) ? VAR_1 :
  (VAR_8->pk.type == VAR_6) ?
  VAR_2 : 0;


 VAR_8->fc = (VAR_9 && FUNC_1(&VAR_7, VAR_9)) ? VAR_9 : 0;

 return VAR_8->fc ? 0 : -VAR_3;
}
