
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int prga_len; int mtu; int data_len; int state; scalar_t__ frag; int seq; scalar_t__ data_try; int data; int data_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(struct params *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->prga_len;
 VAR_2 -= 4;
 FUNC_0(VAR_2 > 0);

 VAR_2 *= 4;
 if (VAR_2 > VAR_1->mtu)
  VAR_2 = VAR_1->mtu;

 VAR_1->data_len = VAR_2;
 FUNC_2(VAR_1->data, 0, VAR_1->data_len);
 FUNC_1(VAR_1->data, "\xaa\xaa\x03\x00\x00\x00\x08\x06", 8);
 VAR_1->data_ptr = VAR_1->data;
 VAR_1->data_try = 0;
 VAR_1->seq++;
 VAR_1->frag = 0;
 VAR_1->state = VAR_0;
}
