
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct packed_git {int mtime; } ;
struct pack_midx_entry {int offset; int pack_mtime; int pack_int_id; int oid; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct packed_git*,int ) ;
 int FUNC_3 (int *,struct packed_git*,int ) ;

__attribute__((used)) static void FUNC_4(uint32_t VAR_0,
       struct packed_git *VAR_1,
       uint32_t VAR_2,
       struct pack_midx_entry *VAR_3)
{
 if (!FUNC_3(&VAR_3->oid, VAR_1, VAR_2))
  FUNC_1(FUNC_0("failed to locate object %d in packfile"), VAR_2);

 VAR_3->pack_int_id = VAR_0;
 VAR_3->pack_mtime = VAR_1->mtime;

 VAR_3->offset = FUNC_2(VAR_1, VAR_2);
}
