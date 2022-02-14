
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_bioctx {struct dm_zone* zone; int ref; } ;
struct dm_zone {int flags; } ;
struct bio {scalar_t__ bi_status; } ;
typedef scalar_t__ blk_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 struct dmz_bioctx* FUNC_2 (struct bio*,int) ;
 int FUNC_3 (struct dm_zone*) ;
 scalar_t__ FUNC_4 (struct dm_zone*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static inline void FUNC_7(struct bio *VAR_3, blk_status_t VAR_4)
{
 struct dmz_bioctx *VAR_5 = FUNC_2(VAR_3, sizeof(struct dmz_bioctx));

 if (VAR_4 != VAR_0 && VAR_3->bi_status == VAR_0)
  VAR_3->bi_status = VAR_4;

 if (FUNC_5(&VAR_5->ref)) {
  struct dm_zone *VAR_6 = VAR_5->zone;

  if (VAR_6) {
   if (VAR_3->bi_status != VAR_0 &&
       FUNC_1(VAR_3) == VAR_2 &&
       FUNC_4(VAR_6))
    FUNC_6(VAR_1, &VAR_6->flags);
   FUNC_3(VAR_6);
  }
  FUNC_0(VAR_3);
 }
}
