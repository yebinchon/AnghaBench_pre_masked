
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_buffer {scalar_t__ buff; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tl_buffer*,int ,int) ;

void FUNC_2 (struct tl_buffer *VAR_0) {
  if (VAR_0->buff) {
    FUNC_0 (VAR_0->buff);
  }
  FUNC_1 (VAR_0, 0, sizeof (*VAR_0));
}
