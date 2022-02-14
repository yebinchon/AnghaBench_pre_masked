
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transaction_callback_data {int rcode; int done; void* payload; } ;
struct fw_transaction {int split_timeout_timer; } ;
struct fw_card {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fw_card*,struct fw_transaction*,int,int,int,int,unsigned long long,void*,size_t,int ,struct transaction_callback_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

int FUNC_5(struct fw_card *VAR_1, int VAR_2, int VAR_3,
         int VAR_4, int VAR_5, unsigned long long VAR_6,
         void *VAR_7, size_t VAR_8)
{
 struct transaction_callback_data VAR_9;
 struct fw_transaction VAR_10;

 FUNC_3(&VAR_10.split_timeout_timer, ((void*)0), 0);
 FUNC_2(&VAR_9.done);
 VAR_9.payload = VAR_7;
 FUNC_1(VAR_1, &VAR_10, VAR_2, VAR_3, VAR_4, VAR_5,
   VAR_6, VAR_7, VAR_8, VAR_0, &VAR_9);
 FUNC_4(&VAR_9.done);
 FUNC_0(&VAR_10.split_timeout_timer);

 return VAR_9.rcode;
}
