
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum intel_pipe_crc_source { ____Placeholder_intel_pipe_crc_source } intel_pipe_crc_source ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char const*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, enum intel_pipe_crc_source *VAR_3)
{
 int VAR_4;

 if (!VAR_2) {
  *VAR_3 = VAR_0;
  return 0;
 }

 VAR_4 = FUNC_1(VAR_1, FUNC_0(VAR_1), VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_3 = VAR_4;
 return 0;
}
