
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idt77252_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct idt77252_dev *VAR_5)
{
 u32 VAR_6, VAR_7;

 FUNC_1(0, VAR_4);
 FUNC_1(VAR_2 | (0 << 2), VAR_3);

 for (VAR_7 = 0x4000; VAR_7 < 0x80000; VAR_7 += 0x4000) {
  FUNC_1(VAR_0, VAR_4);
  FUNC_1(VAR_2 | (VAR_7 << 2), VAR_3);

  FUNC_1(VAR_1 | (0 << 2), VAR_3);
  VAR_6 = FUNC_0(VAR_4);

  if (VAR_6 != 0)
   break;
 }

 return VAR_7 * sizeof(u32);
}
