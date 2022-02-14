
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct TYPE_4__ {TYPE_1__* spi; } ;
struct adis16400_state {TYPE_2__ adis; } ;
struct TYPE_3__ {int max_speed_hz; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct adis16400_state *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;
 uint8_t VAR_7 = 0;

 VAR_6 = 1638404 / VAR_5;
 if (VAR_6 >= 128) {
  VAR_7 |= VAR_1;
  VAR_6 = 52851 / VAR_5;
  if (VAR_6 >= 128)
   VAR_6 = 127;
 } else if (VAR_6 != 0) {
  VAR_6--;
 }

 VAR_7 |= VAR_6;

 if (VAR_6 >= 0x0A || (VAR_7 & VAR_1))
  VAR_4->adis.spi->max_speed_hz = VAR_3;
 else
  VAR_4->adis.spi->max_speed_hz = VAR_2;

 return FUNC_0(&VAR_4->adis, VAR_0, VAR_7);
}
