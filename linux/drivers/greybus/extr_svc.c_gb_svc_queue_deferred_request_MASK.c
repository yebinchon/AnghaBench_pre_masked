
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc_deferred_request {int work; struct gb_operation* operation; } ;
struct gb_svc {int wq; } ;
struct gb_operation {int connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct gb_svc* FUNC_1 (int ) ;
 int FUNC_2 (struct gb_operation*) ;
 int VAR_2 ;
 struct gb_svc_deferred_request* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct gb_operation *VAR_3)
{
 struct gb_svc *VAR_4 = FUNC_1(VAR_3->connection);
 struct gb_svc_deferred_request *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(VAR_3);

 VAR_5->operation = VAR_3;
 FUNC_0(&VAR_5->work, VAR_2);

 FUNC_4(VAR_4->wq, &VAR_5->work);

 return 0;
}
