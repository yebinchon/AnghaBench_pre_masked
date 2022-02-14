
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {unsigned int max_xmit_msg_size; unsigned int data_len; scalar_t__ data; int retries_left; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,unsigned char*,unsigned int) ;
 int FUNC_1 (struct ssif_info*) ;

__attribute__((used)) static int FUNC_2(struct ssif_info *VAR_3,
        unsigned char *VAR_4,
        unsigned int VAR_5)
{
 if (VAR_5 > VAR_1)
  return -VAR_0;
 if (VAR_5 > VAR_3->max_xmit_msg_size)
  return -VAR_0;

 VAR_3->retries_left = VAR_2;
 FUNC_0(VAR_3->data + 1, VAR_4, VAR_5);
 VAR_3->data_len = VAR_5;
 return FUNC_1(VAR_3);
}
