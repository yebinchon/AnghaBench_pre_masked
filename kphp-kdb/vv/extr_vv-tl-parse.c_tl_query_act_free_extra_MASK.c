
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_saved_query {scalar_t__ extra; } ;
struct tl_act_extra {int (* free ) (scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1 (struct tl_saved_query *VAR_0) {
  ((struct tl_act_extra *)(VAR_0->extra))->free (VAR_0->extra);
}
