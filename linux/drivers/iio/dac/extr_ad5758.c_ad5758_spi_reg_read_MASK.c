
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int cs_change; void** rx_buf; void** tx_buf; } ;
struct ad5758_state {void** d32; int spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct spi_transfer*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_5(struct ad5758_state *VAR_2, unsigned int VAR_3)
{
 struct spi_transfer VAR_4[] = {
  {
   .tx_buf = &VAR_2->d32[0],
   .len = 4,
   .cs_change = 1,
  }, {
   .tx_buf = &VAR_2->d32[1],
   .rx_buf = &VAR_2->d32[2],
   .len = 4,
  },
 };
 int VAR_5;

 VAR_2->d32[0] = FUNC_3(
  (FUNC_0(VAR_1) << 24) |
  (VAR_3 << 8));
 VAR_2->d32[1] = FUNC_3(FUNC_0(VAR_0) << 24);

 VAR_5 = FUNC_4(VAR_2->spi, VAR_4, FUNC_1(VAR_4));
 if (VAR_5 < 0)
  return VAR_5;

 return (FUNC_2(VAR_2->d32[2]) >> 8) & 0xFFFF;
}
