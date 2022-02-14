
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct occ {int (* send_cmd ) (struct occ*,int*) ;int lock; } ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct occ*,int*) ;

__attribute__((used)) static int FUNC_5(struct occ *VAR_0, u16 VAR_1)
{
 int VAR_2;
 u8 VAR_3[8];
 u16 VAR_4 = 0x24;
 __be16 VAR_5 = FUNC_0(VAR_1);

 VAR_3[0] = 0;
 VAR_3[1] = 0x22;
 VAR_3[2] = 0;
 VAR_3[3] = 2;

 FUNC_1(&VAR_3[4], &VAR_5, 2);

 VAR_4 += VAR_3[4] + VAR_3[5];
 VAR_3[6] = VAR_4 >> 8;
 VAR_3[7] = VAR_4 & 0xFF;

 VAR_2 = FUNC_2(&VAR_0->lock);
 if (VAR_2)
  return VAR_2;

 VAR_2 = VAR_0->send_cmd(VAR_0, VAR_3);

 FUNC_3(&VAR_0->lock);

 return VAR_2;
}
