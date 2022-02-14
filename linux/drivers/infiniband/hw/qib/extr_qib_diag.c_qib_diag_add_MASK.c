
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int unit; int diag_device; int diag_cdev; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*,int *,int *,int *) ;
 int FUNC_2 (char*,int,char*,int) ;

int FUNC_3(struct qib_devdata *VAR_7)
{
 char VAR_8[16];
 int VAR_9 = 0;

 if (FUNC_0(&VAR_4) == 1) {
  VAR_9 = FUNC_1(VAR_0, "ipath_diagpkt",
        &VAR_6, &VAR_3,
        &VAR_5);
  if (VAR_9)
   goto done;
 }

 FUNC_2(VAR_8, sizeof(VAR_8), "ipath_diag%d", VAR_7->unit);
 VAR_9 = FUNC_1(VAR_1 + VAR_7->unit, VAR_8,
       &VAR_2, &VAR_7->diag_cdev,
       &VAR_7->diag_device);
done:
 return VAR_9;
}
