
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ms_ht_dev {int client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int*) ;

ssize_t FUNC_2(struct ms_ht_dev *VAR_1,
        u8 VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->client, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_3 &= 0x7E;
 VAR_3 |= ((VAR_2 & 1) << 7) + ((VAR_2 & 2) >> 1);

 return FUNC_0(VAR_1->client,
      VAR_0,
      VAR_3);
}
