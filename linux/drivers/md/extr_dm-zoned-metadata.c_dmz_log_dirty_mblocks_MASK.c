
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dmz_metadata {int mblk_primary; } ;


 int FUNC_0 (struct dmz_metadata*,struct list_head*,unsigned int) ;
 int FUNC_1 (struct dmz_metadata*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct dmz_metadata *VAR_0,
     struct list_head *VAR_1)
{
 unsigned int VAR_2 = VAR_0->mblk_primary ^ 0x1;
 int VAR_3;


 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;





 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (VAR_3)
  return VAR_3;

 return 0;
}
