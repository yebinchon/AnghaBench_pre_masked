
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_bioctx {int bio; } ;
struct bio {int bi_status; struct dmz_bioctx* bi_private; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 struct dmz_bioctx *VAR_1 = VAR_0->bi_private;
 blk_status_t VAR_2 = VAR_0->bi_status;

 FUNC_0(VAR_0);
 FUNC_1(VAR_1->bio, VAR_2);
}
