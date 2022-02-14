
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {scalar_t__ writer_ts; int wtimer; int rwb; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct pblk *VAR_0)
{



 FUNC_0(FUNC_3(&VAR_0->rwb),
   "Stopping not fully persisted write buffer\n");

 FUNC_0(FUNC_4(&VAR_0->rwb),
   "Stopping not fully synced write buffer\n");

 FUNC_1(&VAR_0->wtimer);
 if (VAR_0->writer_ts)
  FUNC_2(VAR_0->writer_ts);
}
