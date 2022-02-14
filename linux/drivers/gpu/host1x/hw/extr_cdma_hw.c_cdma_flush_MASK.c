
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_channel {int dummy; } ;
struct TYPE_2__ {int pos; } ;
struct host1x_cdma {TYPE_1__ push_buffer; int last_pos; } ;


 int VAR_0 ;
 struct host1x_channel* FUNC_0 (struct host1x_cdma*) ;
 int FUNC_1 (struct host1x_channel*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct host1x_cdma *VAR_1)
{
 struct host1x_channel *VAR_2 = FUNC_0(VAR_1);

 if (VAR_1->push_buffer.pos != VAR_1->last_pos) {
  FUNC_1(VAR_2, VAR_1->push_buffer.pos,
     VAR_0);
  VAR_1->last_pos = VAR_1->push_buffer.pos;
 }
}
