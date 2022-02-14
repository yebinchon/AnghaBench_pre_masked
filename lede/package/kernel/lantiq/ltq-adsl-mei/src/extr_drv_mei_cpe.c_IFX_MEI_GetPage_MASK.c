
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_8__ {TYPE_3__* img_hdr; TYPE_1__* adsl_mem_info; } ;
struct TYPE_7__ {scalar_t__ count; TYPE_2__* page; } ;
struct TYPE_6__ {scalar_t__ d_size; scalar_t__ p_size; scalar_t__ d_offset; scalar_t__ p_offset; scalar_t__ d_dest; scalar_t__ p_dest; } ;
struct TYPE_5__ {scalar_t__ address; } ;
typedef int DSL_DEV_Device_t ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_2 (DSL_DEV_Device_t * VAR_3, u32 VAR_4, u32 VAR_5,
         u32 VAR_6, u32 * VAR_7, u32 * VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 u32 *VAR_11;
 u32 VAR_12, VAR_13, VAR_14 = 0;

 if (VAR_4 > FUNC_0(VAR_3)->img_hdr->count)
  return -2;



 VAR_9 = (VAR_5 == VAR_1) ? (FUNC_0(VAR_3)->img_hdr->page[VAR_4].d_size) :
        (FUNC_0(VAR_3)->img_hdr->page[VAR_4].p_size);
 VAR_9 &= VAR_0;
 if (VAR_9 > VAR_6)
  return -1;

 if (VAR_9 == 0)
  return 0;



 VAR_10 = VAR_5 ? (FUNC_0(VAR_3)->img_hdr->page[VAR_4].d_offset) :
   (FUNC_0(VAR_3)->img_hdr->page[VAR_4].p_offset);





 VAR_12 = VAR_10 / VAR_2;
 VAR_13 = VAR_10 % VAR_2;
 VAR_11 = (u32 *) ((u8 *) FUNC_0(VAR_3)->adsl_mem_info[VAR_12].address + VAR_13);

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  if (VAR_13 + VAR_10 * 4 - (VAR_14 * VAR_2) >= VAR_2) {
   VAR_12++;
   VAR_14++;
   VAR_11 = (u32 *) ((u8 *) FUNC_1 ((u32)FUNC_0(VAR_3)->adsl_mem_info[VAR_12].address));
  }
  VAR_7[VAR_10] = *VAR_11++;
 }




 *VAR_8 = VAR_5 ? (FUNC_0(VAR_3)-> img_hdr->page[VAR_4].d_dest) :
    (FUNC_0(VAR_3)->img_hdr->page[VAR_4].p_dest);

 return VAR_9;
}
