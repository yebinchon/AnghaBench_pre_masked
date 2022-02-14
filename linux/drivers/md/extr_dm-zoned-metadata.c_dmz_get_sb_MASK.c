
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmz_metadata {TYPE_1__* sb; } ;
struct dmz_mblock {int data; } ;
struct TYPE_2__ {struct dmz_mblock* mblk; int sb; } ;


 int VAR_0 ;
 struct dmz_mblock* FUNC_0 (struct dmz_metadata*,int ) ;
 int FUNC_1 (struct dmz_metadata*,struct dmz_mblock*) ;
 int FUNC_2 (struct dmz_metadata*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct dmz_metadata *VAR_1, unsigned int VAR_2)
{
 struct dmz_mblock *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_0(VAR_1, 0);
 if (!VAR_3)
  return -VAR_0;

 VAR_1->sb[VAR_2].mblk = VAR_3;
 VAR_1->sb[VAR_2].sb = VAR_3->data;


 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_1, VAR_3);
  VAR_1->sb[VAR_2].mblk = ((void*)0);
  return VAR_4;
 }

 return 0;
}
