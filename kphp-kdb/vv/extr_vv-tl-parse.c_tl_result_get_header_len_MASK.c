
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_query_header {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1 (struct tl_query_header *VAR_2) {
  if (!VAR_2->flags) { return 0; }
  int VAR_3 = FUNC_0 (VAR_2->flags);
  int VAR_4 = 8;
  if (VAR_3 & VAR_0) {
    VAR_4 += 8;
  }
  if (VAR_3 & VAR_1) {
    VAR_4 += 8;
  }
  return VAR_4;
}
