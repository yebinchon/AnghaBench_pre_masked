
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_buffer {int wptr; int w; } ;


 int FUNC_0 (int,long long*,int) ;

__attribute__((used)) static void FUNC_1 (struct value_buffer *VAR_0, long long VAR_1) {
  FUNC_0 (VAR_0->wptr, &VAR_1, 8);
  VAR_0->w += 8;
  VAR_0->wptr += 8;
}
