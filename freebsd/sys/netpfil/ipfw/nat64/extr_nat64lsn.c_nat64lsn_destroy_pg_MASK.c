
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat64lsn_pg {int chunks_count; struct nat64lsn_pg** freemask_chunk; struct nat64lsn_pg** states_chunk; struct nat64lsn_pg* states; } ;


 int VAR_0 ;
 int FUNC_0 (struct nat64lsn_pg**,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct nat64lsn_pg*) ;

__attribute__((used)) static void
FUNC_2(struct nat64lsn_pg *VAR_3)
{
 int VAR_4;

 if (VAR_3->chunks_count == 1) {
  FUNC_1(VAR_2, VAR_3->states);
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_3->chunks_count; VAR_4++)
   FUNC_1(VAR_2, VAR_3->states_chunk[VAR_4]);
  FUNC_0(VAR_3->states_chunk, VAR_0);
  FUNC_0(VAR_3->freemask_chunk, VAR_0);
 }
 FUNC_1(VAR_1, VAR_3);
}
