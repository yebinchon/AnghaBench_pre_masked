
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,char*,unsigned int) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (char *VAR_0, int VAR_1, unsigned VAR_2) {
  int VAR_3 = VAR_2 >> 28;
  VAR_2 &= 0x0fffffffU;
  FUNC_0 (FUNC_1 (VAR_0, VAR_1, "%s:0x%04x", FUNC_2 (VAR_3), VAR_2) < VAR_1);
}
