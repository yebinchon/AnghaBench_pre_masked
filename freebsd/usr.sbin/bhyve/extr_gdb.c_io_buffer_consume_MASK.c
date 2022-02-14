
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_buffer {scalar_t__ len; scalar_t__ start; int data; } ;


 int FUNC_0 (struct io_buffer*,size_t) ;
 int FUNC_1 (struct io_buffer*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct io_buffer *VAR_0, size_t VAR_1)
{

 FUNC_0(VAR_0, VAR_1);
 if (VAR_0->len == 0) {
  VAR_0->start = 0;
  return;
 }





 FUNC_2(VAR_0->data, FUNC_1(VAR_0), VAR_0->len);
 VAR_0->start = 0;
}
