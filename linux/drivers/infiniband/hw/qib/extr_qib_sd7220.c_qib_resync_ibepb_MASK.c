
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct qib_devdata*,char*,...) ;
 int FUNC_3 (struct qib_devdata*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct qib_devdata *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 u32 VAR_7;

 VAR_3 = -1;
 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < (4 * VAR_0); ++VAR_5) {
  VAR_7 = FUNC_1(VAR_6);
  VAR_3 = FUNC_3(VAR_2, VAR_1, VAR_7, 0, 0);
  if (VAR_3 < 0) {
   FUNC_2(VAR_2, "Failed read in resync\n");
   continue;
  }
  if (VAR_3 != 0xF0 && VAR_3 != 0x55 && VAR_5 == 0)
   FUNC_2(VAR_2, "unexpected pattern in resync\n");
  VAR_4 = VAR_3 ^ 0xA5;
  VAR_3 = FUNC_3(VAR_2, VAR_1, VAR_7, VAR_4, 0xFF);
  if (VAR_3 < 0) {
   FUNC_2(VAR_2, "Failed write in resync\n");
   continue;
  }
  VAR_3 = FUNC_3(VAR_2, VAR_1, VAR_7, 0, 0);
  if (VAR_3 < 0) {
   FUNC_2(VAR_2, "Failed re-read in resync\n");
   continue;
  }
  if (VAR_3 != VAR_4) {
   FUNC_2(VAR_2, "Failed compare1 in resync\n");
   continue;
  }
  VAR_7 = FUNC_0(VAR_6);
  VAR_3 = FUNC_3(VAR_2, VAR_1, VAR_7, 0, 0);
  if (VAR_3 < 0) {
   FUNC_2(VAR_2, "Failed CMUDONE rd in resync\n");
   continue;
  }
  if ((VAR_3 & 0x70) != ((VAR_6 << 4) | 0x40)) {
   FUNC_2(VAR_2, "Bad CMUDONE value %02X, chn %d\n",
        VAR_3, VAR_6);
   continue;
  }
  if (++VAR_6 == 4)
   break;
 }
 return (VAR_3 > 0) ? 0 : VAR_3;
}
