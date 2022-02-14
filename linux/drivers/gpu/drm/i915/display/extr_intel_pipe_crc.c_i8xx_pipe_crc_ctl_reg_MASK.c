
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

__attribute__((used)) static int FUNC_0(enum intel_pipe_crc_source *VAR_4,
     u32 *VAR_5)
{
 if (*VAR_4 == VAR_1)
  *VAR_4 = 128;

 switch (*VAR_4) {
 case 128:
  *VAR_5 = VAR_2 | VAR_3;
  break;
 case 129:
  *VAR_5 = 0;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
