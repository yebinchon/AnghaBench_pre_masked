
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct intel_guc_ct_buffer {size_t* cmds; struct guc_ct_buffer_desc* desc; } ;
struct guc_ct_buffer_desc {int head; int tail; int size; } ;
typedef size_t s32 ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int,size_t*,int,size_t*,int,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct intel_guc_ct_buffer *VAR_2, u32 *VAR_3)
{
 struct guc_ct_buffer_desc *VAR_4 = VAR_2->desc;
 u32 VAR_5 = VAR_4->head / 4;
 u32 VAR_6 = VAR_4->tail / 4;
 u32 VAR_7 = VAR_4->size / 4;
 u32 *VAR_8 = VAR_2->cmds;
 s32 VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;

 FUNC_2(VAR_4->size % 4);
 FUNC_2(VAR_4->head % 4);
 FUNC_2(VAR_4->tail % 4);
 FUNC_2(VAR_6 >= VAR_7);
 FUNC_2(VAR_5 >= VAR_7);


 VAR_9 = VAR_6 - VAR_5;
 if (FUNC_4(VAR_9 == 0))
  return -VAR_0;


 if (FUNC_4(VAR_9 < 0))
  VAR_9 += VAR_7;
 FUNC_0("CT: available %d (%u:%u)\n", VAR_9, VAR_5, VAR_6);
 FUNC_2(VAR_9 < 0);

 VAR_3[0] = VAR_8[VAR_5];
 VAR_5 = (VAR_5 + 1) % VAR_7;


 VAR_10 = FUNC_3(VAR_3[0]) + 1;
 if (FUNC_4(VAR_10 > (u32)VAR_9)) {
  FUNC_1("CT: incomplete message %*ph %*ph %*ph\n",
     4, VAR_3,
     4 * (VAR_5 + VAR_9 - 1 > VAR_7 ?
          VAR_7 - VAR_5 : VAR_9 - 1), &VAR_8[VAR_5],
     4 * (VAR_5 + VAR_9 - 1 > VAR_7 ?
          VAR_9 - 1 - VAR_7 + VAR_5 : 0), &VAR_8[0]);
  return -VAR_1;
 }

 for (VAR_11 = 1; VAR_11 < VAR_10; VAR_11++) {
  VAR_3[VAR_11] = VAR_8[VAR_5];
  VAR_5 = (VAR_5 + 1) % VAR_7;
 }
 FUNC_0("CT: received %*ph\n", 4 * VAR_10, VAR_3);

 VAR_4->head = VAR_5 * 4;
 return 0;
}
