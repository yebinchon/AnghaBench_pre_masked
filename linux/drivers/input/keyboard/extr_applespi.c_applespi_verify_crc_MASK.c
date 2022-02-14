
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct applespi_data {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int *,size_t) ;

__attribute__((used)) static bool FUNC_3(struct applespi_data *VAR_2, u8 *VAR_3,
    size_t VAR_4)
{
 u16 VAR_5;

 VAR_5 = FUNC_0(0, VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_1(&VAR_2->spi->dev,
         "Received corrupted packet (crc mismatch)\n");
  FUNC_2(VAR_0, VAR_1, VAR_3, VAR_4);

  return 0;
 }

 return 1;
}
