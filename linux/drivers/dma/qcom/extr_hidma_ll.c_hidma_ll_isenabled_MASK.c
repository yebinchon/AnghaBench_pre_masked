
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hidma_lldev {void* evch_state; void* trch_state; scalar_t__ evca; scalar_t__ trca; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (scalar_t__) ;

bool FUNC_3(struct hidma_lldev *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_2(VAR_2->trca + VAR_1);
 VAR_2->trch_state = FUNC_0(VAR_3);
 VAR_3 = FUNC_2(VAR_2->evca + VAR_0);
 VAR_2->evch_state = FUNC_0(VAR_3);


 if (FUNC_1(VAR_2->trch_state) &&
     FUNC_1(VAR_2->evch_state))
  return 1;

 return 0;
}
