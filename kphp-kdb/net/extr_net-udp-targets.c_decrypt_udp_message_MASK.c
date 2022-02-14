
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vk_aes_ctx {int dummy; } ;
struct raw_message {int total_bytes; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (struct raw_message*) ;
 int FUNC_4 (struct raw_message*,int,struct vk_aes_ctx*,unsigned char*) ;
 int FUNC_5 (struct raw_message*,int,unsigned char*) ;
 int VAR_0 ;
 int FUNC_6 (int,char*) ;

int FUNC_7 (struct raw_message *VAR_1, struct vk_aes_ctx *VAR_2, unsigned char *VAR_3) {
  if (VAR_1->total_bytes & 15) {
    FUNC_6 (1, "Length of encrypted part is not multiple of 16\n");
    return -1;
  }

  static unsigned char VAR_4[32];
  FUNC_2 (VAR_4, VAR_3, 32);
  FUNC_0 (!(VAR_1->total_bytes & 15));
  if (VAR_0 >= 4) {
    FUNC_3 (VAR_1);
  }
  FUNC_0 (FUNC_4 (VAR_1, VAR_1->total_bytes, VAR_2, VAR_3) == VAR_1->total_bytes);

  if (VAR_0 >= 4) {
    FUNC_3 (VAR_1);
  }
  return 0;
}
