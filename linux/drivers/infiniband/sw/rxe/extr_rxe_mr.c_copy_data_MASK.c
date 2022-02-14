
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct rxe_sge {int length; scalar_t__ addr; int lkey; } ;
struct rxe_pd {int dummy; } ;
struct rxe_mem {int dummy; } ;
struct rxe_dma_info {size_t cur_sge; int sge_offset; int resid; size_t num_sge; struct rxe_sge* sge; } ;
typedef enum copy_direction { ____Placeholder_copy_direction } copy_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rxe_mem* FUNC_0 (struct rxe_pd*,int,int ,int ) ;
 int FUNC_1 (struct rxe_mem*) ;
 int FUNC_2 (struct rxe_mem*,scalar_t__,void*,int,int,int *) ;

int FUNC_3(
 struct rxe_pd *VAR_3,
 int VAR_4,
 struct rxe_dma_info *VAR_5,
 void *VAR_6,
 int VAR_7,
 enum copy_direction VAR_8,
 u32 *VAR_9)
{
 int VAR_10;
 struct rxe_sge *VAR_11 = &VAR_5->sge[VAR_5->cur_sge];
 int VAR_12 = VAR_5->sge_offset;
 int VAR_13 = VAR_5->resid;
 struct rxe_mem *VAR_14 = ((void*)0);
 u64 VAR_15;
 int VAR_16;

 if (VAR_7 == 0)
  return 0;

 if (VAR_7 > VAR_13) {
  VAR_16 = -VAR_0;
  goto err2;
 }

 if (VAR_11->length && (VAR_12 < VAR_11->length)) {
  VAR_14 = FUNC_0(VAR_3, VAR_4, VAR_11->lkey, VAR_2);
  if (!VAR_14) {
   VAR_16 = -VAR_0;
   goto err1;
  }
 }

 while (VAR_7 > 0) {
  VAR_10 = VAR_7;

  if (VAR_12 >= VAR_11->length) {
   if (VAR_14) {
    FUNC_1(VAR_14);
    VAR_14 = ((void*)0);
   }
   VAR_11++;
   VAR_5->cur_sge++;
   VAR_12 = 0;

   if (VAR_5->cur_sge >= VAR_5->num_sge) {
    VAR_16 = -VAR_1;
    goto err2;
   }

   if (VAR_11->length) {
    VAR_14 = FUNC_0(VAR_3, VAR_4, VAR_11->lkey,
       VAR_2);
    if (!VAR_14) {
     VAR_16 = -VAR_0;
     goto err1;
    }
   } else {
    continue;
   }
  }

  if (VAR_10 > VAR_11->length - VAR_12)
   VAR_10 = VAR_11->length - VAR_12;

  if (VAR_10 > 0) {
   VAR_15 = VAR_11->addr + VAR_12;

   VAR_16 = FUNC_2(VAR_14, VAR_15, VAR_6, VAR_10, VAR_8, VAR_9);
   if (VAR_16)
    goto err2;

   VAR_12 += VAR_10;
   VAR_13 -= VAR_10;
   VAR_7 -= VAR_10;
   VAR_6 += VAR_10;
  }
 }

 VAR_5->sge_offset = VAR_12;
 VAR_5->resid = VAR_13;

 if (VAR_14)
  FUNC_1(VAR_14);

 return 0;

err2:
 if (VAR_14)
  FUNC_1(VAR_14);
err1:
 return VAR_16;
}
