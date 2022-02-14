
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;




 int FUNC_0 (char*,char,char*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(char* VAR_0, uint32_t VAR_1, int VAR_2, int VAR_3)
{
 char VAR_4;
 switch (VAR_3) {
 case 128:
  VAR_4 = 'L';
  break;
 case 129:
  VAR_4 = 'G';
  break;
 default:
  VAR_4 = '*';
  break;
 }
 FUNC_0("->%c %s (vt=%u) %d\n", VAR_4, VAR_0, FUNC_1(VAR_1), VAR_2);
}
