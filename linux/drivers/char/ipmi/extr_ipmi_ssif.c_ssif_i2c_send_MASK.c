
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {int i2c_read_write; int i2c_command; unsigned char* i2c_data; unsigned int i2c_size; int wake_thread; int done_handler; } ;
typedef int ssif_i2c_done ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct ssif_info *VAR_0,
   ssif_i2c_done VAR_1,
   int VAR_2, int VAR_3,
   unsigned char *VAR_4, unsigned int VAR_5)
{
 VAR_0->done_handler = VAR_1;

 VAR_0->i2c_read_write = VAR_2;
 VAR_0->i2c_command = VAR_3;
 VAR_0->i2c_data = VAR_4;
 VAR_0->i2c_size = VAR_5;
 FUNC_0(&VAR_0->wake_thread);
 return 0;
}
