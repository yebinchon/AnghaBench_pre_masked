
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,int) ;

int FUNC_1 (char *VAR_5) {
  if (!FUNC_0 (VAR_5, "short_urls", 9)) {
    return VAR_3;
  } else if (!FUNC_0 (VAR_5, "api_uvars", 9)) {
    return VAR_0;
  } else if (!FUNC_0 (VAR_5, "storage_img", 11) || !FUNC_0 (VAR_5, "keyvalue", 9)) {
    return VAR_4;
  } else if (!FUNC_0 (VAR_5, "kad", 4)) {
    return VAR_1;
  }
  return VAR_2;
}
