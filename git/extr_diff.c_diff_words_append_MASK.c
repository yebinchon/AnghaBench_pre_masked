
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* ptr; unsigned long size; } ;
struct diff_words_buffer {TYPE_1__ text; int alloc; } ;


 int FUNC_0 (char*,unsigned long,int ) ;
 int FUNC_1 (char*,char*,unsigned long) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, unsigned long VAR_1,
  struct diff_words_buffer *VAR_2)
{
 FUNC_0(VAR_2->text.ptr, VAR_2->text.size + VAR_1, VAR_2->alloc);
 VAR_0++;
 VAR_1--;
 FUNC_1(VAR_2->text.ptr + VAR_2->text.size, VAR_0, VAR_1);
 VAR_2->text.size += VAR_1;
 VAR_2->text.ptr[VAR_2->text.size] = '\0';
}
