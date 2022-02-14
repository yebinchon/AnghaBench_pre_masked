
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_server_status {char* buffer; int buffer_size; } ;



inline unsigned char FUNC_0 (struct repl_server_status *VAR_0, char **VAR_1) {
  --*VAR_1;
  if (*VAR_1 < VAR_0->buffer) {
    *VAR_1 += VAR_0->buffer_size;
  }
  return (unsigned char)**VAR_1;
}
