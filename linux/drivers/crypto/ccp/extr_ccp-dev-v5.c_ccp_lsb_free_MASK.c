
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_device {int sb_avail; int sb_queue; int sb_mutex; int lsbmap; } ;
struct ccp_cmd_queue {unsigned int lsb; struct ccp_device* ccp; int lsbmap; } ;


 int FUNC_0 (int ,unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ccp_cmd_queue *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 if (!VAR_1)
  return;

 if (VAR_0->lsb == VAR_1) {

  FUNC_0(VAR_0->lsbmap, VAR_1, VAR_2);
 } else {

  struct ccp_device *VAR_3 = VAR_0->ccp;

  FUNC_1(&VAR_3->sb_mutex);
  FUNC_0(VAR_3->lsbmap, VAR_1, VAR_2);
  VAR_3->sb_avail = 1;
  FUNC_2(&VAR_3->sb_mutex);
  FUNC_3(&VAR_3->sb_queue);
 }
}
