
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*,int) ;

int FUNC_1 (char *VAR_8) {
  if (!FUNC_0 (VAR_8, "inbox", 5)) {
    return VAR_0;
  }
  if (!FUNC_0 (VAR_8, "outbox", 6)) {
    return VAR_2;
  }
  if (!FUNC_0 (VAR_8, "status", 6)) {
    return VAR_4;
  }
  if (!FUNC_0 (VAR_8, "minifeed", 8)) {
    return VAR_4;
  }
  if (!FUNC_0 (VAR_8, "wall", 4)) {
    return VAR_7;
  }
  if (!FUNC_0 (VAR_8, "voting", 6)) {
    return VAR_6;
  }
  if (!FUNC_0 (VAR_8, "photos_comments", 15)) {
    return VAR_3;
  }
  if (!FUNC_0 (VAR_8, "videos_comments", 15)) {
    return VAR_5;
  }

  return VAR_1;
}
