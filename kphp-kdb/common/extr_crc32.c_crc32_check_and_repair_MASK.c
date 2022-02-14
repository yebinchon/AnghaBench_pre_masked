
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (void*,int) ;
 int FUNC_2 (int,unsigned int const) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (void*,int,int) ;
 int FUNC_5 (int,char*,int) ;

int FUNC_6 (void *VAR_0, int VAR_1, unsigned *VAR_2, int VAR_3) {
  unsigned VAR_4 = FUNC_1 (VAR_0, VAR_1);
  const unsigned VAR_5 = VAR_4 ^ (*VAR_2);
  if (!VAR_5) {
    return 0;
  }
  int VAR_6 = FUNC_2 (VAR_1, VAR_5);
  FUNC_5 (3, "find_corrupted_bit returns %d.\n", VAR_6);
  int VAR_7 = FUNC_4 (VAR_0, VAR_1, VAR_6);
  FUNC_5 (3, "repair_bit returns %d.\n", VAR_7);
  if (!VAR_7) {
    FUNC_0 (FUNC_1 (VAR_0, VAR_1) == *VAR_2);
    if (VAR_3) {
      FUNC_3 ("crc32_check_and_repair successfully repair one bit in %d bytes block.\n", VAR_1);
    }
    return 1;
  }
  if (!(VAR_5 & (VAR_5 - 1))) {
    *VAR_2 = VAR_4;
    if (VAR_3) {
      FUNC_3 ("crc32_check_and_repair successfully repair one bit in crc32 (%d bytes block).\n", VAR_1);
    }
    return 2;
  }
  FUNC_0 (!VAR_3);
  *VAR_2 = VAR_4;
  return -1;
}
