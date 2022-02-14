
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int free; int write; int read; } ;
struct fuzzer_stream {TYPE_1__ base; scalar_t__ endp; scalar_t__ readp; } ;
struct fuzzer_buffer {scalar_t__ size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fuzzer_stream* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(
 struct fuzzer_stream **VAR_3,
 const struct fuzzer_buffer *VAR_4)
{
 struct fuzzer_stream *VAR_5 = FUNC_0(sizeof(*VAR_5));
 if (!VAR_5)
  return -1;

 VAR_5->readp = VAR_4->data;
 VAR_5->endp = VAR_4->data + VAR_4->size;
 VAR_5->base.read = VAR_1;
 VAR_5->base.write = VAR_2;
 VAR_5->base.free = VAR_0;

 *VAR_3 = VAR_5;

 return 0;
}
