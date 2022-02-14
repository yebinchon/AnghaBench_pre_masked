
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_1 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void FUNC_4(int VAR_2, int VAR_3, unsigned VAR_4)
{
 char VAR_5[8] = {
  0x3c, 0x04 + VAR_3,
  VAR_4 >> 24, VAR_4 >> 16,
  0x34, 0x84 + VAR_3 + (VAR_3 << 5),
  VAR_4 >> 8, VAR_4,
 };
 if (FUNC_3(VAR_2, VAR_5, sizeof(VAR_5)) != sizeof(VAR_5)) {
  FUNC_1(VAR_1, "write: %s\n", FUNC_2(VAR_0));
  FUNC_0(1);
 }
}
