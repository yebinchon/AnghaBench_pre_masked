
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {scalar_t__ tail_data; scalar_t__ head_data; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1 (struct file_info *VAR_0) {
  if (VAR_0->head_data) {
    FUNC_0 (VAR_0->head_data);
    VAR_0->head_data = 0;
  }
  if (VAR_0->tail_data) {
    FUNC_0 (VAR_0->tail_data);
    VAR_0->tail_data = 0;
  }
}
