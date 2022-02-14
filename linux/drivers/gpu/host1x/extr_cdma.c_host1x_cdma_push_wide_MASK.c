
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct push_buffer {scalar_t__ pos; scalar_t__ size; } ;
struct host1x_channel {int dev; } ;
struct host1x_cdma {unsigned int slots_free; unsigned int slots_used; struct push_buffer push_buffer; } ;
struct host1x {int dummy; } ;


 struct host1x_channel* FUNC_0 (struct host1x_cdma*) ;
 struct host1x* FUNC_1 (struct host1x_cdma*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct host1x*,struct host1x_cdma*,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct push_buffer*,int ,int ) ;
 unsigned int FUNC_5 (struct push_buffer*) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;

void FUNC_7(struct host1x_cdma *VAR_1, u32 VAR_2, u32 VAR_3,
      u32 VAR_4, u32 VAR_5)
{
 struct host1x_channel *VAR_6 = FUNC_0(VAR_1);
 struct host1x *VAR_7 = FUNC_1(VAR_1);
 struct push_buffer *VAR_8 = &VAR_1->push_buffer;
 unsigned int VAR_9 = 2, VAR_10 = 0, VAR_11;
 unsigned int VAR_12 = VAR_1->slots_free;

 if (VAR_0)
  FUNC_6(FUNC_2(VAR_6->dev), VAR_2, VAR_3,
         VAR_4, VAR_5);


 if (VAR_8->pos + 16 > VAR_8->size) {
  VAR_10 = (VAR_8->size - VAR_8->pos) / 8;
  VAR_9 += VAR_10;
 }

 FUNC_3(VAR_7, VAR_1, VAR_9);
 VAR_12 = FUNC_5(VAR_8);

 VAR_1->slots_free = VAR_12 - VAR_9;
 VAR_1->slots_used += VAR_9;
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  FUNC_4(VAR_8, VAR_5, VAR_5);

 FUNC_4(VAR_8, VAR_2, VAR_3);
 FUNC_4(VAR_8, VAR_4, VAR_5);
}
