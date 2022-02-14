
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;
struct TYPE_3__ {int value; int offset; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_1 (struct adreno_gpu*) ;
 int FUNC_2 (struct msm_gpu*,int ,int) ;
 struct adreno_gpu* FUNC_3 (struct msm_gpu*) ;

void FUNC_4(struct msm_gpu *VAR_5, bool VAR_6)
{
 struct adreno_gpu *VAR_7 = FUNC_3(VAR_5);
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++)
  FUNC_2(VAR_5, VAR_4[VAR_8].offset,
   VAR_6 ? VAR_4[VAR_8].value : 0);

 if (FUNC_1(VAR_7)) {
  FUNC_2(VAR_5, VAR_1, VAR_6 ? 0x00000770 : 0);
  FUNC_2(VAR_5, VAR_2, VAR_6 ? 0x00000004 : 0);
 }

 FUNC_2(VAR_5, VAR_0, VAR_6 ? 0xAAA8AA00 : 0);
 FUNC_2(VAR_5, VAR_3, VAR_6 ? 0x182 : 0x180);
}
