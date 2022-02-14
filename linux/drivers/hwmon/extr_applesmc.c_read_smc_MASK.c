
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static int FUNC_7(u8 VAR_4, const char *VAR_5, u8 *VAR_6, u8 VAR_7)
{
 u8 VAR_8, VAR_9 = 0;
 int VAR_10;

 if (FUNC_4(VAR_4) || FUNC_2(VAR_5)) {
  FUNC_1("%.4s: read arg fail\n", VAR_5);
  return -VAR_3;
 }


 if (FUNC_3(VAR_7, VAR_1)) {
  FUNC_1("%.4s: read len fail\n", VAR_5);
  return -VAR_3;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if (FUNC_6()) {
   FUNC_1("%.4s: read data[%d] fail\n", VAR_5, VAR_10);
   return -VAR_3;
  }
  VAR_6[VAR_10] = FUNC_0(VAR_1);
 }


 for (VAR_10 = 0; VAR_10 < 16; VAR_10++) {
  FUNC_5(VAR_2);
  VAR_8 = FUNC_0(VAR_0);
  if (!(VAR_8 & 0x01))
   break;
  VAR_9 = FUNC_0(VAR_1);
 }
 if (VAR_10)
  FUNC_1("flushed %d bytes, last value is: %d\n", VAR_10, VAR_9);

 return 0;
}
