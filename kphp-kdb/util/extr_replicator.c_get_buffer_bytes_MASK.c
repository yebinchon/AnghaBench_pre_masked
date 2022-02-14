
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_server_status {long wptr; long rptr; scalar_t__ buffer_size; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline long FUNC_1 (struct repl_server_status *VAR_0) {
  long VAR_1 = VAR_0->wptr - VAR_0->rptr;
  if (VAR_1 < 0) {
    VAR_1 += VAR_0->buffer_size;
    FUNC_0 (VAR_1 > 0);
  }
  return VAR_1;
}
