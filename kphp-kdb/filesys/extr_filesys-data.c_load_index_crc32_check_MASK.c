
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*,int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int,char*,unsigned int,unsigned int const) ;

int FUNC_2 (void) {
  const unsigned VAR_1 = ~VAR_0;
  unsigned VAR_2;
  FUNC_0 (&VAR_2, 4);
  VAR_0 = -1;
  if (VAR_2 != VAR_1) {
    FUNC_1 (1, "crc32 read = %x, crc32 computed = %x\n", VAR_2, VAR_1);
    return -1;
  }
  return 0;
}
