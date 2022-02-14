
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum amdgpu_dm_pipe_crc_source { ____Placeholder_amdgpu_dm_pipe_crc_source } amdgpu_dm_pipe_crc_source ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static enum amdgpu_dm_pipe_crc_source FUNC_1(const char *VAR_6)
{
 if (!VAR_6 || !FUNC_0(VAR_6, "none"))
  return VAR_5;
 if (!FUNC_0(VAR_6, "auto") || !FUNC_0(VAR_6, "crtc"))
  return VAR_0;
 if (!FUNC_0(VAR_6, "dprx"))
  return VAR_2;
 if (!FUNC_0(VAR_6, "crtc dither"))
  return VAR_1;
 if (!FUNC_0(VAR_6, "dprx dither"))
  return VAR_3;

 return VAR_4;
}
