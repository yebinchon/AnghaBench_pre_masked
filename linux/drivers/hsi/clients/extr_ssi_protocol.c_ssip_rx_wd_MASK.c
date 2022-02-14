
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ssi_protocol {struct hsi_client* cl; } ;
struct hsi_client {int device; } ;


 int FUNC_0 (int *,char*) ;
 struct ssi_protocol* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 struct ssi_protocol* VAR_1 ;
 int FUNC_2 (struct hsi_client*) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct ssi_protocol *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);
 struct hsi_client *VAR_4 = VAR_3->cl;

 FUNC_0(&VAR_4->device, "Watchdog triggered\n");
 FUNC_2(VAR_4);
}
