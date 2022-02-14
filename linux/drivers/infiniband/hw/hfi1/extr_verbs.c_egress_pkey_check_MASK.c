
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct hfi1_pportdata {int part_enforce; struct hfi1_devdata* dd; int port_xmit_constraint_errors; int * pkeys; } ;
struct TYPE_2__ {int status; int pkey; int slid; } ;
struct hfi1_devdata {TYPE_1__ err_info_xmit_constraint; } ;
typedef size_t int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct hfi1_pportdata *VAR_4, u32 VAR_5, u16 VAR_6,
        u8 VAR_7, int8_t VAR_8)
{
 struct hfi1_devdata *VAR_9;
 int VAR_10;
 int VAR_11 = (VAR_8 < 0);

 if (!(VAR_4->part_enforce & VAR_0))
  return 0;


 if ((VAR_7 == 0xf) && ((VAR_6 & VAR_3) != VAR_3))
  goto bad;


 if ((VAR_6 & VAR_3) == 0)
  goto bad;





 if (!VAR_11 &&
     FUNC_0(VAR_6, VAR_4->pkeys[VAR_8])) {
  return 0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (FUNC_0(VAR_6, VAR_4->pkeys[VAR_10]))
   return 0;
 }
bad:





 if (!VAR_11) {
  FUNC_1(&VAR_4->port_xmit_constraint_errors);
  VAR_9 = VAR_4->dd;
  if (!(VAR_9->err_info_xmit_constraint.status &
        VAR_2)) {
   VAR_9->err_info_xmit_constraint.status |=
    VAR_2;
   VAR_9->err_info_xmit_constraint.slid = VAR_5;
   VAR_9->err_info_xmit_constraint.pkey = VAR_6;
  }
 }
 return 1;
}
