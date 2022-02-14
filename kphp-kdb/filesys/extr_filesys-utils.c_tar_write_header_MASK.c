
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gzFile ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_2 (gzFile VAR_0, char VAR_1[512]) {
  unsigned VAR_2 = 8 * 32;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < 512; VAR_3++) {
    VAR_2 += (unsigned char) VAR_1[VAR_3];
  }
  VAR_2 &= 0777777;
  FUNC_1 (VAR_1 + 148, "%06o", VAR_2);
  VAR_1[155] = ' ';
  return FUNC_0 (VAR_0, VAR_1, 512) == 512 ? 0 : -1;
}
