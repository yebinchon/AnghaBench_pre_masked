
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int client_data; int client_data_rwsem; } ;
struct ib_client {int (* remove ) (struct ib_device*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_client*) ;
 int FUNC_2 (struct ib_device*) ;
 int FUNC_3 (struct ib_device*,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned int,int ) ;
 int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *,unsigned int,int ) ;
 void* FUNC_8 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct ib_device *VAR_2,
      unsigned int VAR_3)
{
 struct ib_client *VAR_4;
 void *VAR_5;

 FUNC_0(&VAR_2->client_data_rwsem);
 if (!FUNC_7(&VAR_2->client_data, VAR_3,
    VAR_0)) {
  FUNC_4(&VAR_2->client_data_rwsem);
  return;
 }
 VAR_5 = FUNC_8(&VAR_2->client_data, VAR_3);
 FUNC_5(&VAR_2->client_data, VAR_3, VAR_0);
 VAR_4 = FUNC_8(&VAR_1, VAR_3);
 FUNC_4(&VAR_2->client_data_rwsem);
 if (VAR_4->remove)
  VAR_4->remove(VAR_2, VAR_5);

 FUNC_6(&VAR_2->client_data, VAR_3);
 FUNC_2(VAR_2);
 FUNC_1(VAR_4);
}
