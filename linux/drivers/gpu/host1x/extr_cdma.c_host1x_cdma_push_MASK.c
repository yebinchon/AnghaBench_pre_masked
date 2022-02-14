
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct push_buffer {int dummy; } ;
struct host1x_cdma {scalar_t__ slots_free; int slots_used; struct push_buffer push_buffer; } ;
struct host1x {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct host1x_cdma*) ;
 struct host1x* FUNC_1 (struct host1x_cdma*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct host1x_cdma*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct host1x*,struct host1x_cdma*) ;
 int FUNC_5 (struct push_buffer*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;

void FUNC_7(struct host1x_cdma *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct host1x *VAR_5 = FUNC_1(VAR_2);
 struct push_buffer *VAR_6 = &VAR_2->push_buffer;
 u32 VAR_7 = VAR_2->slots_free;

 if (VAR_1)
  FUNC_6(FUNC_2(FUNC_0(VAR_2)->dev),
           VAR_3, VAR_4);

 if (VAR_7 == 0) {
  FUNC_4(VAR_5, VAR_2);
  VAR_7 = FUNC_3(VAR_2,
      VAR_0);
 }

 VAR_2->slots_free = VAR_7 - 1;
 VAR_2->slots_used++;
 FUNC_5(VAR_6, VAR_3, VAR_4);
}
