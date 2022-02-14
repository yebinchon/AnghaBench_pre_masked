
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ad5272_data {int* buf; int lock; int client; } ;


 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ad5272_data *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_0->buf[0] = (VAR_1 << 2) | ((VAR_2 >> 8) & 0x3);
 VAR_0->buf[1] = (u8)VAR_2;

 FUNC_1(&VAR_0->lock);
 VAR_3 = FUNC_0(VAR_0->client, VAR_0->buf, sizeof(VAR_0->buf));
 FUNC_2(&VAR_0->lock);
 return VAR_3 < 0 ? VAR_3 : 0;
}
