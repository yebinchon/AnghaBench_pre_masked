
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s6e8aa0 {int version; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (struct s6e8aa0*,int const*,int ) ;

__attribute__((used)) static void FUNC_2(struct s6e8aa0 *VAR_0)
{
 static const u8 VAR_1[] = {
  0xb6, 0x0c, 0x02, 0x03, 0x32, 0xc0, 0x44, 0x44, 0xc0, 0x00
 };

 static const u8 VAR_2[] = {
  0xb6, 0x0c, 0x02, 0x03, 0x32, 0xff, 0x44, 0x44, 0xc0, 0x00
 };

 if (VAR_0->version < 142)
  FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_1));
 else
  FUNC_1(VAR_0, VAR_2, FUNC_0(VAR_2));
}
