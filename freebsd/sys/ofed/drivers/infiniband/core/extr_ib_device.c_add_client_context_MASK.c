
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int client_data_lock; int client_data_list; int name; } ;
struct ib_client_data {int going_down; int list; int * data; struct ib_client* client; } ;
struct ib_client {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ib_client_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ib_device *VAR_3, struct ib_client *VAR_4)
{
 struct ib_client_data *VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_1(sizeof *VAR_5, VAR_1);
 if (!VAR_5) {
  FUNC_3("Couldn't allocate client context for %s/%s\n",
   VAR_3->name, VAR_4->name);
  return -VAR_0;
 }

 VAR_5->client = VAR_4;
 VAR_5->data = ((void*)0);
 VAR_5->going_down = 0;

 FUNC_0(&VAR_2);
 FUNC_4(&VAR_3->client_data_lock, VAR_6);
 FUNC_2(&VAR_5->list, &VAR_3->client_data_list);
 FUNC_5(&VAR_3->client_data_lock, VAR_6);
 FUNC_6(&VAR_2);

 return 0;
}
