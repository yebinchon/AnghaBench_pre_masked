
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int hash; } ;
struct pack_midx_entry {TYPE_1__ oid; } ;
struct hashfile {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct hashfile*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_4(struct hashfile *VAR_0, unsigned char VAR_1,
        struct pack_midx_entry *VAR_2,
        uint32_t VAR_3)
{
 struct pack_midx_entry *VAR_4 = VAR_2;
 uint32_t VAR_5;
 size_t VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct pack_midx_entry *VAR_7 = VAR_4++;

  if (VAR_5 < VAR_3 - 1) {
   struct pack_midx_entry *VAR_8 = VAR_4;
   if (FUNC_3(&VAR_7->oid, &VAR_8->oid) >= 0)
    FUNC_0("OIDs not in order: %s >= %s",
        FUNC_2(&VAR_7->oid),
        FUNC_2(&VAR_8->oid));
  }

  FUNC_1(VAR_0, VAR_7->oid.hash, (int)VAR_1);
  VAR_6 += VAR_1;
 }

 return VAR_6;
}
