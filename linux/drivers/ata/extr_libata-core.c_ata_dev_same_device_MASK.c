
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ata_device {unsigned int class; int * id; } ;
typedef int serial ;
typedef int model ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_device*,char*,...) ;
 int FUNC_1 (int const*,unsigned char*,int ,int) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct ata_device *VAR_4, unsigned int VAR_5,
          const u16 *VAR_6)
{
 const u16 *VAR_7 = VAR_4->id;
 unsigned char VAR_8[2][VAR_1 + 1];
 unsigned char VAR_9[2][VAR_3 + 1];

 if (VAR_4->class != VAR_5) {
  FUNC_0(VAR_4, "class mismatch %d != %d\n",
        VAR_4->class, VAR_5);
  return 0;
 }

 FUNC_1(VAR_7, VAR_8[0], VAR_0, sizeof(VAR_8[0]));
 FUNC_1(VAR_6, VAR_8[1], VAR_0, sizeof(VAR_8[1]));
 FUNC_1(VAR_7, VAR_9[0], VAR_2, sizeof(VAR_9[0]));
 FUNC_1(VAR_6, VAR_9[1], VAR_2, sizeof(VAR_9[1]));

 if (FUNC_2(VAR_8[0], VAR_8[1])) {
  FUNC_0(VAR_4, "model number mismatch '%s' != '%s'\n",
        VAR_8[0], VAR_8[1]);
  return 0;
 }

 if (FUNC_2(VAR_9[0], VAR_9[1])) {
  FUNC_0(VAR_4, "serial number mismatch '%s' != '%s'\n",
        VAR_9[0], VAR_9[1]);
  return 0;
 }

 return 1;
}
