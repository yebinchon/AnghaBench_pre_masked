
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_txreq {scalar_t__ sn; int (* complete ) (struct sdma_txreq*,int) ;struct iowait* wait; } ;
struct sdma_engine {scalar_t__ head_sn; int dd; } ;
struct iowait {int dummy; } ;
typedef int (* callback_t ) (struct sdma_txreq*,int) ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct sdma_txreq*) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct iowait*) ;
 scalar_t__ FUNC_4 (struct iowait*) ;
 int FUNC_5 (struct sdma_txreq*,int) ;
 int FUNC_6 (struct sdma_engine*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_7(struct sdma_engine *VAR_0,
          struct sdma_txreq *VAR_1,
          int VAR_2)
{

 struct iowait *VAR_3 = VAR_1->wait;
 callback_t VAR_4 = VAR_1->complete;
 FUNC_1(VAR_0->dd, VAR_1);
 if (VAR_4)
  (*VAR_4)(VAR_1, VAR_2);
 if (FUNC_4(VAR_3))
  FUNC_3(VAR_3);
}
