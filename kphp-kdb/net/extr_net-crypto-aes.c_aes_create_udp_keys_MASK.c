
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int process_id ;
struct aes_key_data {scalar_t__ read_iv; scalar_t__ read_key; scalar_t__ write_iv; scalar_t__ write_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,int,scalar_t__) ;
 int FUNC_3 (unsigned char*,int*,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int* VAR_2 ;
 int VAR_3 ;

int FUNC_5 (struct aes_key_data *VAR_4, struct process_id *VAR_5, struct process_id *VAR_6, int VAR_7) {
  unsigned char VAR_8[16+16+4+4+2+6+4+2+VAR_0+16+16+4+16*2];
  int VAR_9;

  if (!VAR_3) {
    return -1;
  }

  FUNC_1 (VAR_3 >= VAR_1 && VAR_3 <= VAR_0);

  FUNC_3 (VAR_8, VAR_5, 12);
  FUNC_3 (VAR_8 + 12, VAR_2, VAR_3);
  FUNC_3 (VAR_8 + 12 + VAR_3, VAR_6, 12);
  FUNC_3 (VAR_8 + 24 + VAR_3, &VAR_7, 4);
  VAR_9 = 28 + VAR_3;

  FUNC_2 (VAR_8 + 3, VAR_9 - 3, VAR_4->write_key);
  FUNC_0 (VAR_8, VAR_9, VAR_4->write_key + 12);
  FUNC_2 (VAR_8 + 5, VAR_9 - 5, VAR_4->write_iv);


  FUNC_3 (VAR_8, VAR_6, 12);
  FUNC_3 (VAR_8 + 12 + VAR_3, VAR_5, 12);

  FUNC_2 (VAR_8 + 3, VAR_9 - 3, VAR_4->read_key);
  FUNC_0 (VAR_8, VAR_9, VAR_4->read_key + 12);
  FUNC_2 (VAR_8 + 5, VAR_9 - 5, VAR_4->read_iv);

  FUNC_4 (VAR_8, 0, VAR_9);

  return 1;
}
