
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int client_data; } ;
struct ib_client {int client_id; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int *,int ,void*,int ) ;

void FUNC_4(struct ib_device *VAR_1, struct ib_client *VAR_2,
   void *VAR_3)
{
 void *VAR_4;

 if (FUNC_1(FUNC_0(VAR_3)))
  VAR_3 = ((void*)0);

 VAR_4 = FUNC_3(&VAR_1->client_data, VAR_2->client_id, VAR_3,
        VAR_0);
 FUNC_1(FUNC_2(VAR_4));
}
