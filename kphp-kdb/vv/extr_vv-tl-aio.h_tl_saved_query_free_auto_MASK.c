
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_saved_query {scalar_t__ extra; } ;
struct saved_data_auto {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_1 (struct tl_saved_query *VAR_0) {
  if (*(int *)(VAR_0->extra) > 0) { return; };
  FUNC_0 (VAR_0->extra, sizeof (struct saved_data_auto));
}
