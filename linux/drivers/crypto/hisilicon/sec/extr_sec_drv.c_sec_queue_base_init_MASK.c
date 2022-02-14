
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_queue {int queue_id; int name; struct sec_dev_info* dev_info; } ;
struct sec_dev_info {int dev; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct sec_dev_info *VAR_0,
    struct sec_queue *VAR_1, int VAR_2)
{
 VAR_1->dev_info = VAR_0;
 VAR_1->queue_id = VAR_2;
 FUNC_1(VAR_1->name, sizeof(VAR_1->name),
   "%s_%d", FUNC_0(VAR_0->dev), VAR_1->queue_id);
}
