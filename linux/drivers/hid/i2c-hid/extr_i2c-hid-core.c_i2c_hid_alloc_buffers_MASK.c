
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union command {int dummy; } command ;
struct i2c_hid {size_t bufsize; void* cmdbuf; void* argsbuf; void* rawbuf; void* inbuf; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_hid*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_hid *VAR_2, size_t VAR_3)
{


 int VAR_4 = sizeof(__u8) +
         sizeof(__u8) +
         sizeof(__u16) +
         sizeof(__u16) +
         VAR_3;

 VAR_2->inbuf = FUNC_1(VAR_3, VAR_1);
 VAR_2->rawbuf = FUNC_1(VAR_3, VAR_1);
 VAR_2->argsbuf = FUNC_1(VAR_4, VAR_1);
 VAR_2->cmdbuf = FUNC_1(sizeof(union command) + VAR_4, VAR_1);

 if (!VAR_2->inbuf || !VAR_2->rawbuf || !VAR_2->argsbuf || !VAR_2->cmdbuf) {
  FUNC_0(VAR_2);
  return -VAR_0;
 }

 VAR_2->bufsize = VAR_3;

 return 0;
}
