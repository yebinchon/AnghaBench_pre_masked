
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int bs; } ;
struct bio {int dummy; } ;
typedef int dm_oblock_t ;
typedef int dm_cblock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct cache*,struct bio*,int ,int) ;
 int FUNC_2 (struct bio*,struct bio*) ;
 struct bio* FUNC_3 (struct bio*,int ,int *) ;
 int FUNC_4 (struct cache*,struct bio*,int ) ;
 int FUNC_5 (struct bio*) ;

__attribute__((used)) static void FUNC_6(struct cache *VAR_1, struct bio *VAR_2,
          dm_oblock_t VAR_3, dm_cblock_t VAR_4)
{
 struct bio *VAR_5 = FUNC_3(VAR_2, VAR_0, &VAR_1->bs);

 FUNC_0(!VAR_5);

 FUNC_2(VAR_5, VAR_2);




 FUNC_1(VAR_1, VAR_5, VAR_3, 0);
 FUNC_5(VAR_5);

 FUNC_4(VAR_1, VAR_2, VAR_4);
}
