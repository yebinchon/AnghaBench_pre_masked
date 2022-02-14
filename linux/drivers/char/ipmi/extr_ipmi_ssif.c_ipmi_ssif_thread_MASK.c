
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {scalar_t__ i2c_read_write; int * i2c_data; int (* done_handler ) (struct ssif_info*,int,int *,int) ;int i2c_command; int client; int wake_thread; scalar_t__ stopping; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ssif_info*,int,int *,int) ;
 int FUNC_5 (struct ssif_info*,int,int *,int) ;
 int FUNC_6 (struct ssif_info*,int,int *,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(void *VAR_2)
{
 struct ssif_info *VAR_3 = VAR_2;

 while (!FUNC_3()) {
  int VAR_4;


  VAR_4 = FUNC_7(
      &VAR_3->wake_thread);
  if (VAR_3->stopping)
   break;
  if (VAR_4 == -VAR_0)
   continue;
  FUNC_2(&VAR_3->wake_thread);

  if (VAR_3->i2c_read_write == VAR_1) {
   VAR_4 = FUNC_1(
    VAR_3->client, VAR_3->i2c_command,
    VAR_3->i2c_data[0],
    VAR_3->i2c_data + 1);
   VAR_3->done_handler(VAR_3, VAR_4, ((void*)0), 0);
  } else {
   VAR_4 = FUNC_0(
    VAR_3->client, VAR_3->i2c_command,
    VAR_3->i2c_data);
   if (VAR_4 < 0)
    VAR_3->done_handler(VAR_3, VAR_4,
       ((void*)0), 0);
   else
    VAR_3->done_handler(VAR_3, 0,
       VAR_3->i2c_data,
       VAR_4);
  }
 }

 return 0;
}
