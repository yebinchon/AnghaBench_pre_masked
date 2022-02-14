
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int client_data_rwsem; int client_data; int refcount; int kverbs_provider; } ;
struct ib_client {int client_id; int (* add ) (struct ib_device*) ;int uses; int no_kverbs_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ib_client*) ;
 int FUNC_3 (struct ib_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ib_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_13(struct ib_device *VAR_2,
         struct ib_client *VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_2->kverbs_provider && !VAR_3->no_kverbs_req)
  return 0;

 FUNC_0(&VAR_2->client_data_rwsem);




 if (!FUNC_5(&VAR_3->uses))
  goto out_unlock;
 FUNC_4(&VAR_2->refcount);





 if (FUNC_10(&VAR_2->client_data, VAR_3->client_id,
      VAR_0))
  goto out;

 VAR_4 = FUNC_9(FUNC_12(&VAR_2->client_data, VAR_3->client_id, ((void*)0),
         VAR_1));
 if (VAR_4)
  goto out;
 FUNC_1(&VAR_2->client_data_rwsem);
 if (VAR_3->add)
  VAR_3->add(VAR_2);


 FUNC_11(&VAR_2->client_data, VAR_3->client_id,
      VAR_0);
 FUNC_7(&VAR_2->client_data_rwsem);
 return 0;

out:
 FUNC_3(VAR_2);
 FUNC_2(VAR_3);
out_unlock:
 FUNC_8(&VAR_2->client_data_rwsem);
 return VAR_4;
}
