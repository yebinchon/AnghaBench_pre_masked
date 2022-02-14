
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int mblk_lock; } ;
struct dmz_mblock {int state; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dmz_mblock* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dmz_mblock*) ;
 int VAR_3 ;
 struct dmz_mblock* FUNC_2 (struct dmz_metadata*,int ) ;
 struct dmz_mblock* FUNC_3 (struct dmz_metadata*,int ) ;
 int FUNC_4 (struct dmz_metadata*,struct dmz_mblock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static struct dmz_mblock *FUNC_9(struct dmz_metadata *VAR_4,
      sector_t VAR_5)
{
 struct dmz_mblock *VAR_6;


 FUNC_5(&VAR_4->mblk_lock);
 VAR_6 = FUNC_2(VAR_4, VAR_5);
 FUNC_6(&VAR_4->mblk_lock);

 if (!VAR_6) {

  VAR_6 = FUNC_3(VAR_4, VAR_5);
  if (FUNC_1(VAR_6))
   return VAR_6;
 }


 FUNC_8(&VAR_6->state, VAR_1,
         VAR_3);
 if (FUNC_7(VAR_0, &VAR_6->state)) {
  FUNC_4(VAR_4, VAR_6);
  return FUNC_0(-VAR_2);
 }

 return VAR_6;
}
