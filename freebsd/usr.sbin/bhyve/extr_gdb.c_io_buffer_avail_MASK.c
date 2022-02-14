
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_buffer {size_t capacity; size_t start; size_t len; } ;



__attribute__((used)) static size_t
FUNC_0(struct io_buffer *VAR_0)
{

 return (VAR_0->capacity - (VAR_0->start + VAR_0->len));
}
