
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83793_data {unsigned int watchdog_timeout; int watchdog_lock; int client; } ;


 unsigned int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct w83793_data *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_4, 60);

 if (VAR_5 > 255)
  return -VAR_0;

 FUNC_1(&VAR_3->watchdog_lock);
 if (!VAR_3->client) {
  VAR_6 = -VAR_1;
  goto leave;
 }

 VAR_3->watchdog_timeout = VAR_5;


 FUNC_3(VAR_3->client, VAR_2,
      VAR_3->watchdog_timeout);

 VAR_6 = VAR_5 * 60;

leave:
 FUNC_2(&VAR_3->watchdog_lock);
 return VAR_6;
}
