
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccp_device {int sb_count; scalar_t__ sb_avail; int sb_queue; int sb_mutex; int sb; int sb_start; } ;
struct ccp_cmd_queue {struct ccp_device* ccp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int ,unsigned int,int ) ;
 int FUNC_1 (int ,int,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static u32 FUNC_5(struct ccp_cmd_queue *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 struct ccp_device *VAR_4 = VAR_1->ccp;

 for (;;) {
  FUNC_2(&VAR_4->sb_mutex);

  VAR_3 = (u32)FUNC_0(VAR_4->sb,
       VAR_4->sb_count,
       VAR_4->sb_start,
       VAR_2, 0);
  if (VAR_3 <= VAR_4->sb_count) {
   FUNC_1(VAR_4->sb, VAR_3, VAR_2);

   FUNC_3(&VAR_4->sb_mutex);
   break;
  }

  VAR_4->sb_avail = 0;

  FUNC_3(&VAR_4->sb_mutex);


  if (FUNC_4(VAR_4->sb_queue, VAR_4->sb_avail))
   return 0;
 }

 return VAR_0 + VAR_3;
}
