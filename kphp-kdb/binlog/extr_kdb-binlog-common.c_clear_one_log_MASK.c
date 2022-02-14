
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_buffer {char* log_rptr; char* log_wptr; char* log_start; char* log_end; char* log_wcrypt_ptr; scalar_t__ log_start_pos; scalar_t__ log_last_endw; scalar_t__ log_endw; } ;


 int FUNC_0 (struct log_buffer*,int ,int) ;

__attribute__((used)) static void FUNC_1 (struct log_buffer *VAR_0, char *VAR_1, int VAR_2) {
  if (!VAR_1 || !VAR_2) {
    FUNC_0 (VAR_0, 0, sizeof (struct log_buffer));
    return;
  }
  VAR_0->log_rptr = VAR_0->log_wptr = VAR_0->log_start = VAR_1 + ((16 - (long) VAR_1) & 15);
  VAR_0->log_end = VAR_0->log_start + VAR_2;
  VAR_0->log_endw = 0;
  VAR_0->log_last_endw = 0;
  VAR_0->log_start_pos = 0;
  VAR_0->log_wcrypt_ptr = VAR_0->log_start;
}
