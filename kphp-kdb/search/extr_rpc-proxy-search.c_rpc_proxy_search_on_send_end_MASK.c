
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct search_extra {int mode; } ;
struct gather {int saved_query_len; struct search_extra* extra; } ;


 int VAR_0 ;
 int FUNC_0 (struct gather*) ;
 int FUNC_1 (int,char*,int ) ;

void FUNC_2 (struct gather *VAR_1) {
  struct search_extra *VAR_2 = VAR_1->extra;
  if (VAR_2->mode & VAR_0) {
    FUNC_0 (VAR_1);
    FUNC_1 (3, "saved_query_len = %d\n", VAR_1->saved_query_len);
  }
}
