
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int num_pports; scalar_t__ pport; int (* f_sendctrl ) (scalar_t__,int) ;int (* f_rcvctrl ) (scalar_t__,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct qib_devdata *VAR_5)
{
 int VAR_6;






 for (VAR_6 = 0; VAR_6 < VAR_5->num_pports; ++VAR_6) {




  VAR_5->f_rcvctrl(VAR_5->pport + VAR_6, VAR_0 |
      VAR_1 |
      VAR_2, -1);

  VAR_5->f_sendctrl(VAR_5->pport + VAR_6, VAR_4 |
   VAR_3);
 }

 return 0;
}
