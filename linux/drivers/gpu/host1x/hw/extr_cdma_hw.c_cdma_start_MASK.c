
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct host1x_channel {int dummy; } ;
struct TYPE_2__ {int pos; scalar_t__ size; scalar_t__ dma; } ;
struct host1x_cdma {int running; int last_pos; TYPE_1__ push_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct host1x_channel* FUNC_0 (struct host1x_cdma*) ;
 int FUNC_1 (struct host1x_channel*,int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct host1x_cdma *VAR_10)
{
 struct host1x_channel *VAR_11 = FUNC_0(VAR_10);
 u64 VAR_12, VAR_13;

 if (VAR_10->running)
  return;

 VAR_10->last_pos = VAR_10->push_buffer.pos;
 VAR_12 = VAR_10->push_buffer.dma;
 VAR_13 = VAR_10->push_buffer.size + 4;

 FUNC_1(VAR_11, VAR_3,
    VAR_0);


 FUNC_1(VAR_11, FUNC_2(VAR_12), VAR_8);



 FUNC_1(VAR_11, VAR_10->push_buffer.pos, VAR_6);



 FUNC_1(VAR_11, FUNC_2(VAR_13), VAR_4);





 FUNC_1(VAR_11, VAR_3 |
    VAR_1 |
    VAR_2,
    VAR_0);


 FUNC_1(VAR_11, 0, VAR_0);

 VAR_10->running = 1;
}
