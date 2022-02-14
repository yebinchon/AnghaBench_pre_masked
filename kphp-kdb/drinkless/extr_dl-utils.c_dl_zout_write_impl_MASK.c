
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t id; int written; int crc32_complement; scalar_t__ use_crc32; } ;
typedef TYPE_1__ dl_zout ;


 int FUNC_0 (int) ;
 int FUNC_1 (void const*,int,int ) ;
 int * VAR_0 ;
 int* VAR_1 ;
 int FUNC_2 (int ,void const*,size_t) ;

__attribute__((used)) static int FUNC_3 (dl_zout *VAR_2, const void *VAR_3, int VAR_4) {
  FUNC_0 (FUNC_2 (VAR_0[VAR_2->id], VAR_3, (size_t)VAR_4) == VAR_4);
  VAR_1[VAR_2->id] += VAR_4;

  if (VAR_2->use_crc32) {
    VAR_2->crc32_complement = FUNC_1 (VAR_3, VAR_4, VAR_2->crc32_complement);
  }
  VAR_2->written += VAR_4;
  return VAR_4;
}
