
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int lock; int discard_bitset; } ;
typedef int dm_oblock_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cache*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static bool FUNC_5(struct cache *VAR_0, dm_oblock_t VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_0->lock, VAR_3);
 VAR_2 = FUNC_4(FUNC_0(FUNC_1(VAR_0, VAR_1)),
       VAR_0->discard_bitset);
 FUNC_3(&VAR_0->lock, VAR_3);

 return VAR_2;
}
