
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccp_device {scalar_t__ sb_avail; int sb_queue; int sb_mutex; int lsbmap; } ;
struct ccp_cmd_queue {int lsb; struct ccp_device* ccp; int lsbmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int ,unsigned int,int ) ;
 int FUNC_1 (int ,int,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static u32 FUNC_5(struct ccp_cmd_queue *VAR_2, unsigned int VAR_3)
{
 struct ccp_device *VAR_4;
 int VAR_5;


 if (VAR_2->lsb >= 0) {
  VAR_5 = (u32)FUNC_0(VAR_2->lsbmap,
       VAR_0,
       0, VAR_3, 0);
  if (VAR_5 < VAR_0) {
   FUNC_1(VAR_2->lsbmap, VAR_5, VAR_3);
   return VAR_5 + VAR_2->lsb * VAR_0;
  }
 }


 VAR_4 = VAR_2->ccp;
 for (;;) {
  FUNC_2(&VAR_4->sb_mutex);

  VAR_5 = (u32)FUNC_0(VAR_4->lsbmap,
       VAR_1 * VAR_0,
       0,
       VAR_3, 0);
  if (VAR_5 <= VAR_1 * VAR_0) {
   FUNC_1(VAR_4->lsbmap, VAR_5, VAR_3);

   FUNC_3(&VAR_4->sb_mutex);
   return VAR_5;
  }

  VAR_4->sb_avail = 0;

  FUNC_3(&VAR_4->sb_mutex);


  if (FUNC_4(VAR_4->sb_queue, VAR_4->sb_avail))
   return 0;
 }
}
