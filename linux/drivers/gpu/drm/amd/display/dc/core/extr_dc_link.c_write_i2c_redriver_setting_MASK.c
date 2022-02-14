
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
 int FUNC_2 (char*,int,int,int,int,int,int) ;
 int FUNC_3 (struct pipe_ctx*,int,int*,int) ;
 int FUNC_4 (int**,int ,int) ;

__attribute__((used)) static void FUNC_5(
  struct pipe_ctx *VAR_0,
  bool VAR_1)
{
 uint8_t VAR_2 = (0xF0 >> 1);
 uint8_t VAR_3[16];
 bool VAR_4 = 0;
 FUNC_1(VAR_0->stream->ctx->logger);

 FUNC_4(&VAR_3, 0, sizeof(VAR_3));


 VAR_3[3] = 0x4E;
 VAR_3[4] = 0x4E;
 VAR_3[5] = 0x4E;
 VAR_3[6] = VAR_1 ? 0x4E : 0x4A;

 VAR_4 = FUNC_3(VAR_0, VAR_2,
     VAR_3, sizeof(VAR_3));
 FUNC_2("redriver write 0 to all 16 reg offset expect following:\n		\t slave_addr = 0x%x, offset[3] = 0x%x, offset[4] = 0x%x,		offset[5] = 0x%x,offset[6] is_over_340mhz = 0x%x,		i2c_success = %d\n",



  VAR_2, VAR_3[3], VAR_3[4], VAR_3[5], VAR_3[6], VAR_4?1:0);

 if (!VAR_4)

  FUNC_0(VAR_4);
}
