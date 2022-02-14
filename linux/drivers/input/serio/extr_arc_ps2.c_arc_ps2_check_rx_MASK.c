
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arc_ps2_port {TYPE_1__* io; int data_addr; int status_addr; } ;
struct arc_ps2_data {int buf_overflow; int frame_error; int total_int; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,unsigned char,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct arc_ps2_data *VAR_5,
        struct arc_ps2_port *VAR_6)
{
 unsigned int VAR_7 = 1000;
 unsigned int VAR_8, VAR_9;
 unsigned char VAR_10;

 do {
  VAR_9 = FUNC_1(VAR_6->status_addr);
  if (!(VAR_9 & VAR_2))
   return;

  VAR_10 = FUNC_1(VAR_6->data_addr) & 0xff;

  VAR_8 = 0;
  VAR_5->total_int++;
  if (VAR_9 & VAR_1) {
   VAR_5->frame_error++;
   VAR_8 |= VAR_4;
  } else if (VAR_9 & VAR_0) {
   VAR_5->buf_overflow++;
   VAR_8 |= VAR_3;
  }

  FUNC_2(VAR_6->io, VAR_10, VAR_8);
 } while (--VAR_7);

 FUNC_0(&VAR_6->io->dev, "PS/2 hardware stuck\n");
}
