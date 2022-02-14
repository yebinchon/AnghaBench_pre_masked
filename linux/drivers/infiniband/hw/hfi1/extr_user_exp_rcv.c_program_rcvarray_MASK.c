
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tid_user_buf {TYPE_1__* psets; } ;
struct tid_group {int size; int map; int base; int used; } ;
struct hfi1_filedata {struct hfi1_ctxtdata* uctxt; } ;
struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {int expected_base; struct hfi1_devdata* dd; } ;
struct TYPE_2__ {int count; int idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct hfi1_devdata*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct hfi1_filedata*,struct tid_user_buf*,int,struct tid_group*,int,int) ;

__attribute__((used)) static int FUNC_4(struct hfi1_filedata *VAR_2, struct tid_user_buf *VAR_3,
       struct tid_group *VAR_4,
       unsigned int VAR_5, u16 VAR_6,
       u32 *VAR_7, unsigned int *VAR_8,
       unsigned int *VAR_9)
{
 struct hfi1_ctxtdata *VAR_10 = VAR_2->uctxt;
 struct hfi1_devdata *VAR_11 = VAR_10->dd;
 u16 VAR_12;
 u32 VAR_13 = 0, VAR_14, VAR_15 = 0;
 int VAR_16 = 0;


 if (VAR_6 > VAR_4->size)
  return -VAR_0;


 for (VAR_12 = 0; VAR_12 < VAR_4->size; VAR_12++) {
  if (!(VAR_4->map & (1 << VAR_12))) {
   VAR_15 = VAR_12;
   break;
  }
  FUNC_1(VAR_11, VAR_4->base + VAR_12);
 }

 VAR_12 = 0;
 while (VAR_12 < VAR_6) {
  u16 VAR_17, VAR_18, VAR_19 = VAR_5 + VAR_12;
  int VAR_20 = 0;





  if (VAR_15 >= VAR_4->size) {
   break;
  } else if (VAR_4->map & (1 << VAR_15)) {
   FUNC_1(VAR_11, VAR_4->base + VAR_15);
   VAR_15++;
   continue;
  }

  VAR_14 = VAR_4->base + VAR_15;
  VAR_17 = VAR_3->psets[VAR_19].count;
  VAR_18 = VAR_3->psets[VAR_19].idx;

  VAR_20 = FUNC_3(VAR_2, VAR_3,
      VAR_14, VAR_4, VAR_18,
      VAR_17);
  if (VAR_20)
   return VAR_20;
  VAR_16 += VAR_17;

  VAR_13 = FUNC_2(VAR_14 - VAR_10->expected_base) |
   FUNC_0(VAR_1, VAR_17);
  VAR_7[(*VAR_8)++] = VAR_13;
  VAR_4->used++;
  VAR_4->map |= 1 << VAR_15++;
  VAR_12++;
 }


 for (; VAR_15 < VAR_4->size; VAR_15++)
  FUNC_1(VAR_11, VAR_4->base + VAR_15);
 *VAR_9 = VAR_16;
 return VAR_12;
}
