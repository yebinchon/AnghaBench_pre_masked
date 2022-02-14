
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ magic; char* title; scalar_t__ check_ready; void* flush; void* connected; void* alarm; void* wakeup; void* init_outbound; scalar_t__ writer; int parse_execute; scalar_t__ reader; scalar_t__ close; scalar_t__ free_buffers; void* init_accepted; scalar_t__ accept; scalar_t__ run; } ;
typedef TYPE_1__ conn_type_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

int FUNC_0 (conn_type_t *VAR_9) {
  if (VAR_9->magic != VAR_0) {
    return -1;
  }
  if (!VAR_9->title) {
    VAR_9->title = "(unknown)";
  }
  if (!VAR_9->run) {
    VAR_9->run = VAR_6;
  }
  if (!VAR_9->accept) {
    VAR_9->accept = VAR_1;
  }
  if (!VAR_9->init_accepted) {
    VAR_9->init_accepted = VAR_5;
  }
  if (!VAR_9->free_buffers) {
    VAR_9->free_buffers = VAR_2;
  }
  if (!VAR_9->close) {
    VAR_9->close = VAR_4;
  }
  if (!VAR_9->reader) {
    VAR_9->reader = VAR_7;
    if (!VAR_9->parse_execute) {
      return -1;
    }
  }
  if (!VAR_9->writer) {
    VAR_9->writer = VAR_8;
  }
  if (!VAR_9->init_outbound) {
    VAR_9->init_outbound = VAR_5;
  }
  if (!VAR_9->wakeup) {
    VAR_9->wakeup = VAR_5;
  }
  if (!VAR_9->alarm) {
    VAR_9->alarm = VAR_5;
  }
  if (!VAR_9->connected) {
    VAR_9->connected = VAR_5;
  }
  if (!VAR_9->flush) {
    VAR_9->flush = VAR_5;
  }
  if (!VAR_9->check_ready) {
    VAR_9->check_ready = VAR_3;
  }
  return 0;
}
