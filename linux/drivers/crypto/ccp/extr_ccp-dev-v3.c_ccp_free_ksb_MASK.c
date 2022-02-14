
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_device {int sb_avail; int sb_queue; int sb_mutex; int sb; } ;
struct ccp_cmd_queue {struct ccp_device* ccp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ccp_cmd_queue *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 struct ccp_device *VAR_4 = VAR_1->ccp;

 if (!VAR_2)
  return;

 FUNC_1(&VAR_4->sb_mutex);

 FUNC_0(VAR_4->sb, VAR_2 - VAR_0, VAR_3);

 VAR_4->sb_avail = 1;

 FUNC_2(&VAR_4->sb_mutex);

 FUNC_3(&VAR_4->sb_queue);
}
