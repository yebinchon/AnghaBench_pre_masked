
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct rxe_phys_buf {size_t size; scalar_t__ addr; } ;
struct rxe_mem {scalar_t__ type; TYPE_2__* pd; struct rxe_map** map; } ;
struct rxe_map {struct rxe_phys_buf* buf; } ;
typedef enum copy_direction { ____Placeholder_copy_direction } copy_direction ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ ibpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rxe_mem*,scalar_t__,int*,int*,size_t*) ;
 int FUNC_2 (struct rxe_mem*,scalar_t__,int) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (int ,int ,void*,int) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

int FUNC_6(struct rxe_mem *VAR_4, u64 VAR_5, void *VAR_6, int VAR_7,
   enum copy_direction VAR_8, u32 *VAR_9)
{
 int VAR_10;
 int VAR_11;
 u8 *VAR_12;
 struct rxe_map **VAR_13;
 struct rxe_phys_buf *VAR_14;
 int VAR_15;
 int VAR_16;
 size_t VAR_17;
 u32 VAR_18 = VAR_9 ? (*VAR_9) : 0;

 if (VAR_7 == 0)
  return 0;

 if (VAR_4->type == VAR_2) {
  u8 *VAR_19, *VAR_20;

  VAR_19 = (VAR_8 == VAR_3) ?
   VAR_6 : ((void *)(uintptr_t)VAR_5);

  VAR_20 = (VAR_8 == VAR_3) ?
   ((void *)(uintptr_t)VAR_5) : VAR_6;

  FUNC_3(VAR_20, VAR_19, VAR_7);

  if (VAR_9)
   *VAR_9 = FUNC_4(FUNC_5(VAR_4->pd->ibpd.device),
     *VAR_9, VAR_20, VAR_7);

  return 0;
 }

 FUNC_0(!VAR_4->map);

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_7);
 if (VAR_10) {
  VAR_10 = -VAR_0;
  goto err1;
 }

 FUNC_1(VAR_4, VAR_5, &VAR_15, &VAR_16, &VAR_17);

 VAR_13 = VAR_4->map + VAR_15;
 VAR_14 = VAR_13[0]->buf + VAR_16;

 while (VAR_7 > 0) {
  u8 *VAR_21, *VAR_22;

  VAR_12 = (u8 *)(uintptr_t)VAR_14->addr + VAR_17;
  VAR_21 = (VAR_8 == VAR_3) ? VAR_6 : VAR_12;
  VAR_22 = (VAR_8 == VAR_3) ? VAR_12 : VAR_6;

  VAR_11 = VAR_14->size - VAR_17;

  if (VAR_11 > VAR_7)
   VAR_11 = VAR_7;

  FUNC_3(VAR_22, VAR_21, VAR_11);

  if (VAR_9)
   VAR_18 = FUNC_4(FUNC_5(VAR_4->pd->ibpd.device),
     VAR_18, VAR_22, VAR_11);

  VAR_7 -= VAR_11;
  VAR_6 += VAR_11;

  VAR_17 = 0;
  VAR_14++;
  VAR_16++;

  if (VAR_16 == VAR_1) {
   VAR_16 = 0;
   VAR_13++;
   VAR_14 = VAR_13[0]->buf;
  }
 }

 if (VAR_9)
  *VAR_9 = VAR_18;

 return 0;

err1:
 return VAR_10;
}
