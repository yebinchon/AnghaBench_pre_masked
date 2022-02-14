
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct audio {int inst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,int,int ,int ) ;

void FUNC_5(struct audio *VAR_3)
{
 uint32_t VAR_4 = FUNC_0(VAR_1);
 FUNC_2();

 FUNC_4(VAR_4, 1,
       VAR_1,
       VAR_2);
 FUNC_4(VAR_4, 1,
       VAR_1,
       VAR_0);

 FUNC_1(VAR_1, VAR_4);
 FUNC_4(VAR_4, 0,
   VAR_1,
   VAR_2);
 FUNC_1(VAR_1, VAR_4);

 FUNC_3("\n\t========= AUDIO:dce_aud_az_enable: index: %u  data: 0x%x\n",
   VAR_3->inst, VAR_4);
}
