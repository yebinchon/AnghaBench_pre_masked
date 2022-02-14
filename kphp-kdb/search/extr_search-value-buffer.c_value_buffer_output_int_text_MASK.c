
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_buffer {int w; int wptr; } ;


 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static void FUNC_1 (struct value_buffer *VAR_0, int VAR_1) {
  VAR_0->w += VAR_1 = FUNC_0 (VAR_0->wptr, "%d", VAR_1);
  VAR_0->wptr += VAR_1;
}
