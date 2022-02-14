
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ms_ht_dev {int lock; int client; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int) ;

ssize_t FUNC_4(struct ms_ht_dev *VAR_0,
          char *VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 FUNC_1(&VAR_0->lock);
 VAR_3 = FUNC_0(VAR_0->client, &VAR_2);
 FUNC_2(&VAR_0->lock);
 if (VAR_3)
  return VAR_3;

 return FUNC_3(VAR_1, "%d\n", (VAR_2 & 0x4) >> 2);
}
