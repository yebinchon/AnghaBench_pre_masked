
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hgsmi_buffer_tail {int dummy; } ;
struct hgsmi_buffer_header {int data_size; } ;
struct gen_pool {int dummy; } ;


 int FUNC_0 (struct gen_pool*,unsigned long,size_t) ;

void FUNC_1(struct gen_pool *VAR_0, void *VAR_1)
{
 struct hgsmi_buffer_header *VAR_2 =
  (struct hgsmi_buffer_header *)((u8 *)VAR_1 - sizeof(*VAR_2));
 size_t VAR_3 = VAR_2->data_size + sizeof(*VAR_2) +
          sizeof(struct hgsmi_buffer_tail);

 FUNC_0(VAR_0, (unsigned long)VAR_2, VAR_3);
}
