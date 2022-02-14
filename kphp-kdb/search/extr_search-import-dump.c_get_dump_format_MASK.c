
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_1 (char *VAR_12) {

  if (!strncmp(VAR_12,"audio",sizeof("audio")-1)) {
    return VAR_1;
  }

  if (!FUNC_0(VAR_12,"video",sizeof("video")-1)) {
    return VAR_11;
  }

  if (!FUNC_0(VAR_12,"applications",sizeof("applications")-1)) {
    return VAR_0;
  }

  if (!FUNC_0(VAR_12,"groups",sizeof("groups")-1)) {
    return VAR_4;
  }

  if (!FUNC_0(VAR_12,"events",sizeof("events")-1)) {
    return VAR_3;
  }

  if (!FUNC_0(VAR_12,"blog_posts",sizeof("blog_posts")-1)) {
    return VAR_2;
  }

  if (!FUNC_0(VAR_12,"memlite",sizeof("memlite")-1)) {
    return VAR_6;
  }

  if (!FUNC_0(VAR_12,"members_lite",sizeof("members_lite")-1)) {
    return VAR_6;
  }

  if (!FUNC_0(VAR_12,"market_items",sizeof("market_items")-1)) {
    return VAR_5;
  }

  if (!FUNC_0(VAR_12,"question",sizeof("question")-1)) {
    return VAR_9;
  }

  if (!FUNC_0(VAR_12,"topics",sizeof("topics")-1)) {
    return VAR_10;
  }

  if (!FUNC_0(VAR_12,"minifeed",sizeof("minifeed")-1)) {
    return VAR_7;
  }

  return VAR_8;
}
