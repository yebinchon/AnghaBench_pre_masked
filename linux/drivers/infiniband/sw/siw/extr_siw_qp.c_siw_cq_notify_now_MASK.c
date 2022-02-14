
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int comp_handler; } ;
struct siw_cq {TYPE_2__* notify; TYPE_1__ base_cq; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct siw_cq *VAR_4, u32 VAR_5)
{
 u32 VAR_6;

 if (!VAR_4->base_cq.comp_handler)
  return 0;


 VAR_6 = FUNC_0(VAR_4->notify->flags);

 if ((VAR_6 & VAR_0) ||
     ((VAR_6 & VAR_2) &&
      (VAR_5 & VAR_3))) {






  FUNC_1(VAR_4->notify->flags, VAR_1);

  return 1;
 }
 return 0;
}
