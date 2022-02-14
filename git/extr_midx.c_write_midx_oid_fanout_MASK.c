
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int* hash; } ;
struct pack_midx_entry {TYPE_1__ oid; } ;
struct hashfile {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct hashfile*,int) ;

__attribute__((used)) static size_t FUNC_1(struct hashfile *VAR_1,
        struct pack_midx_entry *VAR_2,
        uint32_t VAR_3)
{
 struct pack_midx_entry *VAR_4 = VAR_2;
 struct pack_midx_entry *VAR_5 = VAR_2 + VAR_3;
 uint32_t VAR_6 = 0;
 uint32_t VAR_7;






 for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {
  struct pack_midx_entry *VAR_8 = VAR_4;

  while (VAR_8 < VAR_5 && VAR_8->oid.hash[0] == VAR_7) {
   VAR_6++;
   VAR_8++;
  }

  FUNC_0(VAR_1, VAR_6);
  VAR_4 = VAR_8;
 }

 return VAR_0;
}
