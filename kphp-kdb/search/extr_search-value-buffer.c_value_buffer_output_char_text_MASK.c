
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_buffer {char* wptr; int w; } ;



__attribute__((used)) static void FUNC_0 (struct value_buffer *VAR_0, char VAR_1 ) {
  *(VAR_0->wptr) = VAR_1;
  VAR_0->w++;
  VAR_0->wptr++;
}
