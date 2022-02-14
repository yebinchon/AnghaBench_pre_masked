
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct camdd_buf_indirect {int len; } ;
struct camdd_buf_data {int fill_len; } ;
struct TYPE_2__ {struct camdd_buf_data data; struct camdd_buf_indirect indirect; } ;
struct camdd_buf {scalar_t__ buf_type; TYPE_1__ buf_type_spec; } ;


 scalar_t__ VAR_0 ;

uint32_t
FUNC_0(struct camdd_buf *VAR_1)
{
 uint32_t VAR_2 = 0;

 if (VAR_1->buf_type != VAR_0) {
  struct camdd_buf_indirect *VAR_3;

  VAR_3 = &VAR_1->buf_type_spec.indirect;
  VAR_2 = VAR_3->len;
 } else {
  struct camdd_buf_data *VAR_4;

  VAR_4 = &VAR_1->buf_type_spec.data;
  VAR_2 = VAR_4->fill_len;
 }

 return (VAR_2);
}
