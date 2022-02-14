
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* wqe; } ;
struct rxe_qp {TYPE_2__ resp; int pd; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;
struct TYPE_3__ {int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *,void*,int,int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static enum resp_states FUNC_2(struct rxe_qp *VAR_6, void *VAR_7,
         int VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6->pd, VAR_1, &VAR_6->resp.wqe->dma,
   VAR_7, VAR_8, VAR_5, ((void*)0));
 if (FUNC_1(VAR_9))
  return (VAR_9 == -VAR_0) ? VAR_2
     : VAR_3;

 return VAR_4;
}
