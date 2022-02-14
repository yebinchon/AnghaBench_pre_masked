
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dce_audio {int dummy; } ;
struct audio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dce_audio* FUNC_0 (struct audio*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct audio *VAR_4,
 uint32_t VAR_5,
 uint32_t VAR_6)
{
 struct dce_audio *VAR_7 = FUNC_0(VAR_4);


 FUNC_2(VAR_3, 0,
   VAR_1, VAR_5);


 FUNC_2(VAR_2, 0,
   VAR_0, VAR_6);

 FUNC_1("AUDIO:write_indirect_azalia_reg: index: %u  data: %u\n",
  VAR_5, VAR_6);
}
