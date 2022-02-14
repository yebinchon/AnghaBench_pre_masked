
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct t4_i2c_data {int port_id; int dev_addr; int offset; int len; int* data; } ;
typedef int i2cd ;


 int VAR_0 ;
 int FUNC_0 (struct t4_i2c_data*,int) ;
 int FUNC_1 (int ,struct t4_i2c_data*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char,char,char,char,char,char,char,char,...) ;

__attribute__((used)) static int
FUNC_4(int VAR_1)
{
 uint8_t VAR_2;
 struct t4_i2c_data VAR_3;
 int VAR_4;

 for (VAR_2 = 0; VAR_2 < 96; VAR_2 += sizeof(VAR_3.data)) {
  FUNC_0(&VAR_3, sizeof(VAR_3));
  VAR_3.port_id = VAR_1;
  VAR_3.dev_addr = 0xa0;
  VAR_3.offset = VAR_2;
  VAR_3.len = sizeof(VAR_3.data);
  VAR_4 = FUNC_1(VAR_0, &VAR_3);
  if (VAR_4 != 0)
   return (VAR_4);
  FUNC_3("%02x:  %02x %02x %02x %02x  %02x %02x %02x %02x",
      VAR_2, VAR_3.data[0], VAR_3.data[1], VAR_3.data[2],
      VAR_3.data[3], VAR_3.data[4], VAR_3.data[5], VAR_3.data[6],
      VAR_3.data[7]);

  FUNC_3("  %c%c%c%c %c%c%c%c\n",
      FUNC_2(VAR_3.data[0]) ? VAR_3.data[0] : '.',
      FUNC_2(VAR_3.data[1]) ? VAR_3.data[1] : '.',
      FUNC_2(VAR_3.data[2]) ? VAR_3.data[2] : '.',
      FUNC_2(VAR_3.data[3]) ? VAR_3.data[3] : '.',
      FUNC_2(VAR_3.data[4]) ? VAR_3.data[4] : '.',
      FUNC_2(VAR_3.data[5]) ? VAR_3.data[5] : '.',
      FUNC_2(VAR_3.data[6]) ? VAR_3.data[6] : '.',
      FUNC_2(VAR_3.data[7]) ? VAR_3.data[7] : '.');
 }

 return (0);
}
