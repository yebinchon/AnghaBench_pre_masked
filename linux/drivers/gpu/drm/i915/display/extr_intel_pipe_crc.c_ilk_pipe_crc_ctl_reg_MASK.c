
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum intel_pipe_crc_source { ____Placeholder_intel_pipe_crc_source } intel_pipe_crc_source ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(enum intel_pipe_crc_source *VAR_6,
    u32 *VAR_7)
{
 if (*VAR_6 == VAR_1)
  *VAR_6 = 130;

 switch (*VAR_6) {
 case 129:
  *VAR_7 = VAR_2 | VAR_4;
  break;
 case 128:
  *VAR_7 = VAR_2 | VAR_5;
  break;
 case 130:
  *VAR_7 = VAR_2 | VAR_3;
  break;
 case 131:
  *VAR_7 = 0;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
