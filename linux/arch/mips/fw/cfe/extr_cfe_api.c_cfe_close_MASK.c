
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfe_xiocb {int xiocb_status; int xiocb_handle; scalar_t__ xiocb_psize; scalar_t__ xiocb_flags; int xiocb_fcode; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfe_xiocb*) ;

int FUNC_1(int VAR_1)
{
 struct cfe_xiocb VAR_2;

 VAR_2.xiocb_fcode = VAR_0;
 VAR_2.xiocb_status = 0;
 VAR_2.xiocb_handle = VAR_1;
 VAR_2.xiocb_flags = 0;
 VAR_2.xiocb_psize = 0;

 FUNC_0(&VAR_2);

 return VAR_2.xiocb_status;

}
