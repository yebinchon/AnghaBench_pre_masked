
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aes_key_data {scalar_t__ read_iv; scalar_t__ read_key; scalar_t__ write_iv; scalar_t__ write_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int,scalar_t__) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned char*,int,scalar_t__) ;
 int FUNC_3 (unsigned char*,...) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 char* VAR_2 ;
 int VAR_3 ;

int FUNC_5 (struct aes_key_data *VAR_4, int VAR_5, char VAR_6[16], char VAR_7[16], int VAR_8,
       unsigned VAR_9, unsigned short VAR_10, unsigned char VAR_11[16], unsigned VAR_12, unsigned short VAR_13, unsigned char VAR_14[16]) {
  unsigned char VAR_15[16+16+4+4+2+6+4+2+VAR_0+16+16+4+16*2];
  int VAR_16;

  if (!VAR_3) {
    return -1;
  }

  FUNC_1 (VAR_3 >= VAR_1 && VAR_3 <= VAR_0);

  FUNC_3 (VAR_15, VAR_6, 16);
  FUNC_3 (VAR_15 + 16, VAR_7, 16);
  *((int *) (VAR_15 + 32)) = VAR_8;
  *((unsigned *) (VAR_15 + 36)) = VAR_9;
  *((unsigned short *) (VAR_15 + 40)) = VAR_13;
  FUNC_3 (VAR_15 + 42, VAR_5 ? "Client" : "Server", 6);
  *((unsigned *) (VAR_15 + 48)) = VAR_12;
  *((unsigned short *) (VAR_15 + 52)) = VAR_10;
  FUNC_3 (VAR_15 + 54, VAR_2, VAR_3);
  FUNC_3 (VAR_15 + 54 + VAR_3, VAR_6, 16);
  VAR_16 = 70 + VAR_3;

  if (!VAR_9) {
    FUNC_1 (!VAR_12);
    FUNC_3 (VAR_15 + VAR_16, VAR_14, 16);
    FUNC_3 (VAR_15 + VAR_16 + 16, VAR_11, 16);
    VAR_16 += 32;
  } else {
    FUNC_1 (VAR_12);
  }

  FUNC_3 (VAR_15 + VAR_16, VAR_7, 16);
  VAR_16 += 16;

  FUNC_2 (VAR_15 + 4, VAR_16 - 4, VAR_4->write_key);
  FUNC_0 (VAR_15, VAR_16, VAR_4->write_key + 12);
  FUNC_2 (VAR_15 + 2, VAR_16 - 2, VAR_4->write_iv);

  FUNC_3 (VAR_15 + 42, !VAR_5 ? "Client" : "Server", 6);

  FUNC_2 (VAR_15 + 4, VAR_16 - 4, VAR_4->read_key);
  FUNC_0 (VAR_15, VAR_16, VAR_4->read_key + 12);
  FUNC_2 (VAR_15 + 2, VAR_16 - 2, VAR_4->read_iv);

  FUNC_4 (VAR_15, 0, VAR_16);

  return 1;
}
