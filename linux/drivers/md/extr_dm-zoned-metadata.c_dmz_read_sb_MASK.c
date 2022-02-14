
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dmz_metadata {TYPE_2__* sb; } ;
struct TYPE_4__ {TYPE_1__* mblk; int block; } ;
struct TYPE_3__ {int page; } ;


 int VAR_0 ;
 int FUNC_0 (struct dmz_metadata*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct dmz_metadata *VAR_1, unsigned int VAR_2)
{
 return FUNC_0(VAR_1, VAR_0, VAR_1->sb[VAR_2].block,
         VAR_1->sb[VAR_2].mblk->page);
}
