
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hgsmi_host_flags {int dummy; } ;
struct hgsmi_buffer_location {int buf_len; int buf_location; } ;
struct gen_pool {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hgsmi_buffer_location* FUNC_0 (struct gen_pool*,int,int ,int ) ;
 int FUNC_1 (struct gen_pool*,struct hgsmi_buffer_location*) ;
 int FUNC_2 (struct gen_pool*,struct hgsmi_buffer_location*) ;

int FUNC_3(struct gen_pool *VAR_3, u32 VAR_4)
{
 struct hgsmi_buffer_location *VAR_5;

 VAR_5 = FUNC_0(VAR_3, sizeof(*VAR_5), VAR_2,
          VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->buf_location = VAR_4;
 VAR_5->buf_len = sizeof(struct hgsmi_host_flags);

 FUNC_2(VAR_3, VAR_5);
 FUNC_1(VAR_3, VAR_5);

 return 0;
}
