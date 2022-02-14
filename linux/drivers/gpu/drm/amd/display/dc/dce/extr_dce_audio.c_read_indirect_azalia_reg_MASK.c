
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
 struct dce_audio* FUNC_0 (struct audio*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static uint32_t FUNC_4(struct audio *VAR_3, uint32_t VAR_4)
{
 struct dce_audio *VAR_5 = FUNC_0(VAR_3);

 uint32_t VAR_6 = 0;


 FUNC_3(VAR_2, 0,
   VAR_0, VAR_4);


 VAR_6 = FUNC_2(VAR_1);

 FUNC_1("AUDIO:read_indirect_azalia_reg: index: %u  data: %u\n",
  VAR_4, VAR_6);

 return VAR_6;
}
