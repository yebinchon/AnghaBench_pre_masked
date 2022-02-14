
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ magic; char* title; void* process_send_error; void* process_error_msg; void* process_msg; } ;
typedef TYPE_1__ udp_type_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;

int FUNC_0 (udp_type_t *VAR_2) {
  if (VAR_2->magic != VAR_0) {
    return -1;
  }
  if (!VAR_2->title) {
    VAR_2->title = "(unknown)";
  }
  if (!VAR_2->process_msg) {
    VAR_2->process_msg = VAR_1;
  }
  if (!VAR_2->process_error_msg) {
    VAR_2->process_error_msg = VAR_1;
  }
  if (!VAR_2->process_send_error) {
    VAR_2->process_send_error= VAR_1;
  }





  return 0;
}
