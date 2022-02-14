
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_softreq {int response; } ;
struct nitrox_cmdq {int resp_qlock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct nitrox_softreq *VAR_0,
         struct nitrox_cmdq *VAR_1)
{
 FUNC_1(&VAR_1->resp_qlock);
 FUNC_0(&VAR_0->response);
 FUNC_2(&VAR_1->resp_qlock);
}
