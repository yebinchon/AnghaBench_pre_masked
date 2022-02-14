
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {int dummy; } ;


 int FUNC_0 (struct rtl8366_smi*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct rtl8366_smi*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct rtl8366_smi *VAR_5, int VAR_6)
{
 int VAR_7;
 unsigned VAR_8;
 u32 VAR_9 = 0;

 if (!VAR_6) {
  for (VAR_8 = 0; VAR_8 <= VAR_4; VAR_8++) {
   FUNC_1(VAR_5, VAR_8, 0);
  }
 }

 if (VAR_6)
  VAR_9 = (VAR_3 | VAR_2);

 FUNC_0(VAR_5, VAR_1, VAR_0, VAR_9);

 return 0;
}
