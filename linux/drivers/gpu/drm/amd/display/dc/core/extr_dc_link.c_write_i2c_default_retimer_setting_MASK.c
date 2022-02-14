
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct pipe_ctx {TYPE_2__* stream; } ;
typedef int buffer ;
struct TYPE_4__ {TYPE_1__* ctx; } ;
struct TYPE_3__ {int logger; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int,int,int) ;
 int FUNC_3 (struct pipe_ctx*,int,int*,int) ;
 int FUNC_4 (int**,int ,int) ;

__attribute__((used)) static void FUNC_5(
  struct pipe_ctx *VAR_0,
  bool VAR_1,
  bool VAR_2)
{
 uint8_t VAR_3 = (0xBA >> 1);
 uint8_t VAR_4[2];
 bool VAR_5 = 0;
 FUNC_1(VAR_0->stream->ctx->logger);

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));



 VAR_4[0] = 0x0A;
 VAR_4[1] = 0x13;
 VAR_5 = FUNC_3(VAR_0, VAR_3,
   VAR_4, sizeof(VAR_4));
 FUNC_2("retimer writes default setting to slave_address = 0x%x,		offset = 0x%x, reg_val = 0x%x, i2c_success = %d\n",

  VAR_3, VAR_4[0], VAR_4[1], VAR_5?1:0);
 if (!VAR_5)

  FUNC_0(VAR_5);


 VAR_4[0] = 0x0A;
 VAR_4[1] = 0x17;
 VAR_5 = FUNC_3(VAR_0, VAR_3,
   VAR_4, sizeof(VAR_4));
 FUNC_2("retimer write to slave_addr = 0x%x,		offset = 0x%x, reg_val = 0x%x, i2c_success = %d\n",

  VAR_3, VAR_4[0], VAR_4[1], VAR_5?1:0);
 if (!VAR_5)

  FUNC_0(VAR_5);


 VAR_4[0] = 0x0B;
 VAR_4[1] = VAR_2 ? 0xDA : 0xD8;
 VAR_5 = FUNC_3(VAR_0, VAR_3,
   VAR_4, sizeof(VAR_4));
 FUNC_2("retimer write to slave_addr = 0x%x,		offset = 0x%x, reg_val = 0x%x, i2c_success = %d\n",

  VAR_3, VAR_4[0], VAR_4[1], VAR_5?1:0);
 if (!VAR_5)

  FUNC_0(VAR_5);


 VAR_4[0] = 0x0A;
 VAR_4[1] = 0x17;
 VAR_5 = FUNC_3(VAR_0, VAR_3,
   VAR_4, sizeof(VAR_4));
 FUNC_2("retimer write to slave_addr = 0x%x,		offset = 0x%x, reg_val= 0x%x, i2c_success = %d\n",

  VAR_3, VAR_4[0], VAR_4[1], VAR_5?1:0);
 if (!VAR_5)

  FUNC_0(VAR_5);


 VAR_4[0] = 0x0C;
 VAR_4[1] = VAR_2 ? 0x1D : 0x91;
 VAR_5 = FUNC_3(VAR_0, VAR_3,
   VAR_4, sizeof(VAR_4));
 FUNC_2("retimer write to slave_addr = 0x%x,		offset = 0x%x, reg_val = 0x%x, i2c_success = %d\n",

  VAR_3, VAR_4[0], VAR_4[1], VAR_5?1:0);
 if (!VAR_5)

  FUNC_0(VAR_5);


 VAR_4[0] = 0x0A;
 VAR_4[1] = 0x17;
 VAR_5 = FUNC_3(VAR_0, VAR_3,
   VAR_4, sizeof(VAR_4));
 FUNC_2("retimer write to slave_addr = 0x%x,		offset = 0x%x, reg_val = 0x%x, i2c_success = %d\n",

  VAR_3, VAR_4[0], VAR_4[1], VAR_5?1:0);
 if (!VAR_5)

  FUNC_0(VAR_5);


 if (VAR_1) {



  VAR_4[0] = 0xff;
  VAR_4[1] = 0x01;
  VAR_5 = FUNC_3(VAR_0, VAR_3,
    VAR_4, sizeof(VAR_4));
  FUNC_2("retimer write to slave_addr = 0x%x,			offset = 0x%x, reg_val = 0x%x, i2c_success = %d\n",

   VAR_3, VAR_4[0], VAR_4[1], VAR_5?1:0);
  if (!VAR_5)

   FUNC_0(VAR_5);


  VAR_4[0] = 0x00;
  VAR_4[1] = 0x23;
  VAR_5 = FUNC_3(VAR_0, VAR_3,
    VAR_4, sizeof(VAR_4));
  FUNC_2("retimer write to slave_addr = 0x%x,			offset = 0x%x, reg_val= 0x%x, i2c_success = %d\n",

   VAR_3, VAR_4[0], VAR_4[1], VAR_5?1:0);
  if (!VAR_5)

   FUNC_0(VAR_5);


  VAR_4[0] = 0xff;
  VAR_4[1] = 0x00;
  VAR_5 = FUNC_3(VAR_0, VAR_3,
    VAR_4, sizeof(VAR_4));
  FUNC_2("retimer write default setting to slave_addr = 0x%x,			offset = 0x%x, reg_val= 0x%x, i2c_success = %d end here\n",

   VAR_3, VAR_4[0], VAR_4[1], VAR_5?1:0);
  if (!VAR_5)

   FUNC_0(VAR_5);
 }
}
