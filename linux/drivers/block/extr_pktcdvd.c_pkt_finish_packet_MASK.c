
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_data {int orig_bios; scalar_t__ cache_valid; } ;
struct bio {scalar_t__ bi_status; } ;
typedef scalar_t__ blk_status_t ;


 int FUNC_0 (struct bio*) ;
 struct bio* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct packet_data *VAR_0, blk_status_t VAR_1)
{
 struct bio *VAR_2;

 if (VAR_1)
  VAR_0->cache_valid = 0;


 while ((VAR_2 = FUNC_1(&VAR_0->orig_bios))) {
  VAR_2->bi_status = VAR_1;
  FUNC_0(VAR_2);
 }
}
