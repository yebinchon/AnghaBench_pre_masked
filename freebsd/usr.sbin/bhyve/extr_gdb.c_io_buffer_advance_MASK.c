
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_buffer {size_t len; size_t start; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct io_buffer *VAR_0, size_t VAR_1)
{

 FUNC_0(VAR_1 <= VAR_0->len);
 VAR_0->start += VAR_1;
 VAR_0->len -= VAR_1;
}
