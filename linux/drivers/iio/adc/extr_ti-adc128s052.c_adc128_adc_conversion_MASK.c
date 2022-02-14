
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adc128 {int* buffer; int lock; int spi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int**,int) ;
 int FUNC_3 (int ,int**,int) ;

__attribute__((used)) static int FUNC_4(struct adc128 *VAR_0, u8 VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->lock);

 VAR_0->buffer[0] = VAR_1 << 3;
 VAR_0->buffer[1] = 0;

 VAR_2 = FUNC_3(VAR_0->spi, &VAR_0->buffer, 2);
 if (VAR_2 < 0) {
  FUNC_1(&VAR_0->lock);
  return VAR_2;
 }

 VAR_2 = FUNC_2(VAR_0->spi, &VAR_0->buffer, 2);

 FUNC_1(&VAR_0->lock);

 if (VAR_2 < 0)
  return VAR_2;

 return ((VAR_0->buffer[0] << 8 | VAR_0->buffer[1]) & 0xFFF);
}
