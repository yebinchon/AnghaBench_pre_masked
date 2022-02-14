
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_query_header {int ref_cnt; } ;



struct tl_query_header *FUNC_0 (struct tl_query_header *VAR_0) {
  VAR_0->ref_cnt ++;
  return VAR_0;
}
