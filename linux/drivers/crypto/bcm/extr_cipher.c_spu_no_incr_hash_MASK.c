
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spu_hw {scalar_t__ spu_type; } ;
struct TYPE_3__ {scalar_t__ alg; scalar_t__ mode; } ;
struct iproc_ctx_s {TYPE_1__ auth; } ;
struct TYPE_4__ {struct spu_hw spu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct iproc_ctx_s *VAR_4)
{
 struct spu_hw *VAR_5 = &VAR_3.spu;

 if (VAR_5->spu_type == VAR_2)
  return 1;

 if ((VAR_4->auth.alg == VAR_0) &&
     (VAR_4->auth.mode == VAR_1))
  return 1;


 return 0;
}
