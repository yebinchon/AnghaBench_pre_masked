
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_2__* img_hdr; } ;
struct TYPE_5__ {int count; TYPE_1__* page; } ;
struct TYPE_4__ {int p_size; int d_size; } ;
typedef int DSL_DEV_MeiError_t ;
typedef int DSL_DEV_Device_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (int *,int,int ,int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static DSL_DEV_MeiError_t
FUNC_3 (DSL_DEV_Device_t * VAR_6)
{
 int VAR_7;
 int VAR_8;
 u32 VAR_9;





 for (VAR_7 = 1;
      VAR_7 <
      (FUNC_0(VAR_6)->img_hdr-> count); VAR_7++) {
  if ((FUNC_0(VAR_6)-> img_hdr->page[VAR_7].p_size) & VAR_0) {
   VAR_8 = FUNC_2 (VAR_6, VAR_7,
             VAR_3, VAR_4,
             VAR_5,
             &VAR_9);
   if (VAR_8 > 0) {
    FUNC_1 (VAR_6, VAR_9,
       VAR_5,
       VAR_8);
   }
  }
  if ((FUNC_0(VAR_6)-> img_hdr->page[VAR_7].d_size) & VAR_0) {
   VAR_8 = FUNC_2 (VAR_6, VAR_7,
             VAR_2, VAR_4,
             VAR_5,
             &VAR_9);
   if (VAR_8 > 0) {
    FUNC_1 (VAR_6, VAR_9,
       VAR_5,
       VAR_8);
   }
  }
 }
 return VAR_1;
}
