
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83627ehf_data {int have_temp; char** temp_label; size_t* temp_src; int* temp_type; int * reg_temp_config; } ;
typedef enum kinds { ____Placeholder_kinds } kinds ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

 int FUNC_1 (struct w83627ehf_data*,int ) ;
 int FUNC_2 (struct w83627ehf_data*,int ,int) ;


__attribute__((used)) static inline void FUNC_3(struct w83627ehf_data *VAR_4,
         enum kinds VAR_5)
{
 int VAR_6;
 u8 VAR_7, VAR_8;


 VAR_7 = FUNC_1(VAR_4, VAR_1);
 if (!(VAR_7 & 0x01))
  FUNC_2(VAR_4, VAR_1,
          VAR_7 | 0x01);


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!(VAR_4->have_temp & (1 << VAR_6)))
   continue;
  if (!VAR_4->reg_temp_config[VAR_6])
   continue;
  VAR_7 = FUNC_1(VAR_4,
        VAR_4->reg_temp_config[VAR_6]);
  if (VAR_7 & 0x01)
   FUNC_2(VAR_4,
           VAR_4->reg_temp_config[VAR_6],
           VAR_7 & 0xfe);
 }


 VAR_7 = FUNC_1(VAR_4, VAR_3);
 if (!(VAR_7 & 0x01))
  FUNC_2(VAR_4, VAR_3, VAR_7 | 0x01);


 switch (VAR_5) {
 case 129:
  VAR_8 = FUNC_1(VAR_4, VAR_2);
  break;
 case 128:
  VAR_8 = 0x00;
  break;
 default:
  VAR_8 = 0x70;
 }
 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  const char *VAR_9 = ((void*)0);

  if (VAR_4->temp_label)
   VAR_9 = VAR_4->temp_label[VAR_4->temp_src[VAR_6]];


  if (VAR_9 && FUNC_0(VAR_9, "PECI", 4) == 0)
   VAR_4->temp_type[VAR_6] = 6;
  else if (VAR_9 && FUNC_0(VAR_9, "AMD", 3) == 0)
   VAR_4->temp_type[VAR_6] = 5;
  else if ((VAR_7 & (0x02 << VAR_6)))
   VAR_4->temp_type[VAR_6] = (VAR_8 & (0x10 << VAR_6)) ? 1 : 3;
  else
   VAR_4->temp_type[VAR_6] = 4;
 }
}
