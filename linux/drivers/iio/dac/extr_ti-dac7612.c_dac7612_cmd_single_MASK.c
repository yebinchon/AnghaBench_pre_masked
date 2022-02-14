
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dac7612 {int* data; int* cache; int loaddacs; int spi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct dac7612 *VAR_2, int VAR_3, u16 VAR_4)
{
 int VAR_5;

 VAR_2->data[0] = FUNC_0(VAR_1) | (VAR_3 << VAR_0);
 VAR_2->data[0] |= VAR_4 >> 8;
 VAR_2->data[1] = VAR_4 & 0xff;

 VAR_2->cache[VAR_3] = VAR_4;

 VAR_5 = FUNC_2(VAR_2->spi, VAR_2->data, sizeof(VAR_2->data));
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_2->loaddacs, 1);
 FUNC_1(VAR_2->loaddacs, 0);

 return 0;
}
