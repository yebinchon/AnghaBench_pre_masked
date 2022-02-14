
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {int flags; int (* f_portcntr ) (struct qib_pportdata*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qib_pportdata*,int ) ;
 int FUNC_1 (struct qib_pportdata*,int ) ;
 int FUNC_2 (struct qib_pportdata*,int ) ;
 int FUNC_3 (struct qib_pportdata*,int ) ;
 int FUNC_4 (struct qib_pportdata*,int ) ;

int FUNC_5(struct qib_pportdata *VAR_7, u64 *VAR_8,
     u64 *VAR_9, u64 *VAR_10, u64 *VAR_11,
     u64 *VAR_12)
{
 int VAR_13;
 struct qib_devdata *VAR_14 = VAR_7->dd;

 if (!(VAR_14->flags & VAR_6)) {

  VAR_13 = -VAR_0;
  goto bail;
 }
 *VAR_8 = VAR_14->f_portcntr(VAR_7, VAR_5);
 *VAR_9 = VAR_14->f_portcntr(VAR_7, VAR_4);
 *VAR_10 = VAR_14->f_portcntr(VAR_7, VAR_2);
 *VAR_11 = VAR_14->f_portcntr(VAR_7, VAR_1);
 *VAR_12 = VAR_14->f_portcntr(VAR_7, VAR_3);

 VAR_13 = 0;

bail:
 return VAR_13;
}
