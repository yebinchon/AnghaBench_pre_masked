
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct nat64lsn_states_chunk {int dummy; } ;
struct nat64lsn_pgchunk {struct nat64lsn_pg** pgptr; } ;
struct nat64lsn_pg {int chunks_count; struct nat64lsn_pg** states_chunk; struct nat64lsn_pg** freemask_chunk; scalar_t__ base_port; int proto; int timestamp; struct nat64lsn_pg* freemask64; int * states; } ;
struct TYPE_2__ {int stats; } ;
struct nat64lsn_cfg {int states_chunks; TYPE_1__ base; } ;
struct nat64lsn_alias {int portgroups_count; int timestamp; int portgroups; } ;


 int FUNC_0 (struct nat64lsn_alias*) ;
 int FUNC_1 (struct nat64lsn_alias*) ;
 int FUNC_2 (int *,struct nat64lsn_pg*,int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 () ;
 int FUNC_9 (struct nat64lsn_pg**,struct nat64lsn_pg*) ;
 int VAR_4 ;
 int FUNC_10 (struct nat64lsn_pg**,int ) ;
 void* FUNC_11 (int,int ,int) ;
 int FUNC_12 (struct nat64lsn_pg**,int,int) ;
 int FUNC_13 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_14 (int ,int) ;
 int FUNC_15 (int ,struct nat64lsn_pg*) ;

__attribute__((used)) static int
FUNC_16(struct nat64lsn_cfg *VAR_9,
    struct nat64lsn_alias *VAR_10, uint32_t *VAR_11,
    uint32_t *VAR_12, struct nat64lsn_pgchunk **VAR_13,
    struct nat64lsn_pg **VAR_14, uint8_t VAR_15)
{
 struct nat64lsn_pg *VAR_16;
 int VAR_17, VAR_18, VAR_19;


 VAR_18 = FUNC_13(VAR_12);
 if (VAR_18 < 0)
  return (FUNC_5(1));

 VAR_19 = VAR_18 / 32;
 if (!FUNC_3(*VAR_11, VAR_19)) {
  VAR_13[VAR_19] = FUNC_14(VAR_6,
      VAR_1);
  if (VAR_13[VAR_19] == ((void*)0))
   return (FUNC_5(2));
  FUNC_7(VAR_11, VAR_19);
  FUNC_8();
 }

 VAR_16 = FUNC_14(VAR_5, VAR_1);
 if (VAR_16 == ((void*)0))
  return (FUNC_5(3));
 VAR_16->chunks_count = VAR_9->states_chunks;
 if (VAR_16->chunks_count > 1) {
  VAR_16->freemask_chunk = FUNC_11(VAR_16->chunks_count *
      sizeof(uint64_t), VAR_0, VAR_1);
  if (VAR_16->freemask_chunk == ((void*)0)) {
   FUNC_15(VAR_5, VAR_16);
   return (FUNC_5(4));
  }
  VAR_16->states_chunk = FUNC_11(VAR_16->chunks_count *
      sizeof(struct nat64lsn_states_chunk *), VAR_0,
      VAR_1 | VAR_2);
  if (VAR_16->states_chunk == ((void*)0)) {
   FUNC_10(VAR_16->freemask_chunk, VAR_0);
   FUNC_15(VAR_5, VAR_16);
   return (FUNC_5(5));
  }
  for (VAR_17 = 0; VAR_17 < VAR_16->chunks_count; VAR_17++) {
   VAR_16->states_chunk[VAR_17] = FUNC_14(
       VAR_7, VAR_1);
   if (VAR_16->states_chunk[VAR_17] == ((void*)0))
    goto states_failed;
  }
  FUNC_12(VAR_16->freemask_chunk, 0xff,
      sizeof(uint64_t) * VAR_16->chunks_count);
 } else {
  VAR_16->states = FUNC_14(VAR_7, VAR_1);
  if (VAR_16->states == ((void*)0)) {
   FUNC_15(VAR_5, VAR_16);
   return (FUNC_5(6));
  }
  FUNC_12(&VAR_16->freemask64, 0xff, sizeof(uint64_t));
 }


 FUNC_6(VAR_16->timestamp);
 VAR_16->proto = VAR_15;
 VAR_16->base_port = VAR_3 + 64 * VAR_18;
 FUNC_9(&VAR_13[VAR_19]->pgptr[VAR_18 % 32], VAR_16);
 FUNC_8();
 FUNC_7(&VAR_12[VAR_18 / 32], VAR_18 % 32);
 FUNC_9(VAR_14, VAR_16);

 FUNC_0(VAR_10);
 FUNC_2(&VAR_10->portgroups, VAR_16, VAR_4);
 FUNC_6(VAR_10->timestamp);
 VAR_10->portgroups_count++;
 FUNC_1(VAR_10);
 FUNC_4(&VAR_9->base.stats, VAR_8);
 return (FUNC_5(0));

states_failed:
 for (VAR_17 = 0; VAR_17 < VAR_16->chunks_count; VAR_17++)
  FUNC_15(VAR_7, VAR_16->states_chunk[VAR_17]);
 FUNC_10(VAR_16->freemask_chunk, VAR_0);
 FUNC_10(VAR_16->states_chunk, VAR_0);
 FUNC_15(VAR_5, VAR_16);
 return (FUNC_5(7));
}
