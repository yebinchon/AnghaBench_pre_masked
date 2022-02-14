
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct camdd_buf_data {int fill_len; } ;
struct TYPE_2__ {struct camdd_buf_data data; } ;
struct camdd_buf {scalar_t__ buf_type; int src_count; int src_list; TYPE_1__ buf_type_spec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct camdd_buf*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct camdd_buf*) ;
 int VAR_1 ;

void
FUNC_3(struct camdd_buf *VAR_2, struct camdd_buf *VAR_3)
{
 struct camdd_buf_data *VAR_4;

 FUNC_1(VAR_2->buf_type == VAR_0);

 VAR_4 = &VAR_2->buf_type_spec.data;

 FUNC_0(&VAR_2->src_list, VAR_3, VAR_1);
 VAR_2->src_count++;

 VAR_4->fill_len += FUNC_2(VAR_3);
}
