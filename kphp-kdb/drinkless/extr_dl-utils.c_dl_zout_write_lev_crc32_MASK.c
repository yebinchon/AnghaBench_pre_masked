
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct lev_crc32 {int crc32; int pos; int timestamp; } ;
struct TYPE_5__ {int crc32_complement; int written; } ;
typedef TYPE_1__ dl_zout ;


 int VAR_0 ;
 struct lev_crc32* FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;

struct lev_crc32 *FUNC_2 (dl_zout *VAR_2) {
  FUNC_1 (VAR_2);

  struct lev_crc32 *VAR_3 = FUNC_0 (VAR_2, VAR_0, sizeof (struct lev_crc32));
  VAR_3->timestamp = VAR_1;
  VAR_3->pos = VAR_2->written;
  VAR_3->crc32 = ~VAR_2->crc32_complement;

  return VAR_3;
}
