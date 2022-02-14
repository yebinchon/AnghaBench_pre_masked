
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct io_buffer {size_t capacity; int * data; } ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (struct io_buffer*) ;
 int * FUNC_2 (int *,size_t) ;

__attribute__((used)) static void
FUNC_3(struct io_buffer *VAR_0, size_t VAR_1)
{
 uint8_t *VAR_2;
 size_t VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_1 <= VAR_3)
  return;

 VAR_4 = VAR_0->capacity + (VAR_1 - VAR_3);
 VAR_2 = FUNC_2(VAR_0->data, VAR_4);
 if (VAR_2 == ((void*)0))
  FUNC_0(1, "Failed to grow GDB I/O buffer");
 VAR_0->data = VAR_2;
 VAR_0->capacity = VAR_4;
}
