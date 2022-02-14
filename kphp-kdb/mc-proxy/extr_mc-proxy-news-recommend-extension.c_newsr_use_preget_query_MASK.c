
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct newsr_gather_extra {int request_tag; } ;


 int FUNC_0 (int,char*,int) ;

int FUNC_1 (void *VAR_0) {
  FUNC_0 (4, "newsr: request_tag = %d\n", ((struct newsr_gather_extra *)VAR_0)->request_tag);
  return ((struct newsr_gather_extra *)VAR_0)->request_tag;
}
