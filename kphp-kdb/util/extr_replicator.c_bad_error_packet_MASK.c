
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_error {int* error_message; } ;



__attribute__((used)) static int FUNC_0 (struct repl_error *VAR_0, int VAR_1) {
  return VAR_0->error_message[VAR_1 - sizeof (struct repl_error) - 1];
}
