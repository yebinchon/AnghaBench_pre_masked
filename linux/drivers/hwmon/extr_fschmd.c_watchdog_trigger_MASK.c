
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fschmd_data {size_t kind; int watchdog_lock; int watchdog_control; int client; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fschmd_data *VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(&VAR_3->watchdog_lock);
 if (!VAR_3->client) {
  VAR_4 = -VAR_0;
  goto leave;
 }

 VAR_3->watchdog_control |= VAR_2;
 FUNC_0(VAR_3->client,
      VAR_1[VAR_3->kind],
      VAR_3->watchdog_control);
leave:
 FUNC_2(&VAR_3->watchdog_lock);
 return VAR_4;
}
