
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int tmp ;
struct executable {int x_checksum_off; int x_len; scalar_t__ x_buf; int x_checksum_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,scalar_t__,int) ;
 int FUNC_2 (struct executable const*,int,int ,char*) ;

__attribute__((used)) static uint32_t
FUNC_3(const struct executable *VAR_0)
{
 uint32_t VAR_1 = 0;
 uint16_t VAR_2;
 int VAR_3;

 FUNC_2(VAR_0, VAR_0->x_checksum_off, VAR_0->x_checksum_len, "PE checksum");

 FUNC_0(VAR_0->x_checksum_off % 2 == 0);

 for (VAR_3 = 0; VAR_3 + sizeof(VAR_2) < VAR_0->x_len; VAR_3 += 2) {




  if (VAR_3 == VAR_0->x_checksum_off || VAR_3 == VAR_0->x_checksum_off + 2) {
   VAR_2 = 0;
  } else {
   FUNC_0(VAR_3 + sizeof(VAR_2) <= VAR_0->x_len);
   FUNC_1(&VAR_2, VAR_0->x_buf + VAR_3, sizeof(VAR_2));
  }

  VAR_1 += VAR_2;
  VAR_1 += VAR_1 >> 16;
  VAR_1 &= 0xffff;
 }

 VAR_1 += VAR_1 >> 16;
 VAR_1 &= 0xffff;

 VAR_1 += VAR_0->x_len;

 return (VAR_1);
}
