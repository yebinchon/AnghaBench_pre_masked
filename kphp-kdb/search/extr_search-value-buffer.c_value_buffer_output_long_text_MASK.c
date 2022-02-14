
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_buffer {int w; int wptr; } ;


 int FUNC_0 (int,char*,long long) ;

__attribute__((used)) static void FUNC_1 (struct value_buffer *VAR_0, long long VAR_1) {
  int VAR_2;
  VAR_0->w += VAR_2 = FUNC_0 (VAR_0->wptr, "%lld", VAR_1);
  VAR_0->wptr += VAR_2;
}
