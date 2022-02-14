
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dce_hwseq {TYPE_1__* masks; } ;
typedef enum blnd_mode { ____Placeholder_blnd_mode } blnd_mode ;
struct TYPE_2__ {scalar_t__ BLND_ALPHA_MODE; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int,int ,int) ;

void FUNC_3(struct dce_hwseq *VAR_6,
 unsigned int VAR_7,
 enum blnd_mode VAR_8)
{
 uint32_t VAR_9 = 1;
 uint32_t VAR_10 = 0;
 uint32_t VAR_11 = 0;
 uint32_t VAR_12 = 2;

 switch (VAR_8) {
 case 128:
  VAR_9 = 0;
  VAR_10 = 1;
  VAR_12 = 0;
  break;
 case 130:
  VAR_9 = 0;
  VAR_10 = 2;
  VAR_12 = 0;
  VAR_11 = 1;
  break;
 case 129:
 default:
  if (FUNC_0(VAR_2[VAR_7]) == FUNC_0(VAR_0) ||
    VAR_7 == 0)
   VAR_9 = 0;
  break;
 }

 FUNC_1(VAR_2[VAR_7],
  VAR_4, VAR_10);

 if (VAR_6->masks->BLND_ALPHA_MODE != 0) {
  FUNC_2(VAR_2[VAR_7],
   VAR_3, VAR_9,
   VAR_1, VAR_12,
   VAR_5, VAR_11);
 }
}
