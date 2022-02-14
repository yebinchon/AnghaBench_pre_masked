
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct packed_git {int dummy; } ;
struct object_id {int dummy; } ;
struct object_entry {int preferred_base; int no_try_delta; int in_pack_offset; int hash; } ;
typedef int off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (int *,struct object_entry*,struct packed_git*) ;
 int FUNC_1 (struct object_entry*,int) ;
 struct object_entry* FUNC_2 (int *,struct object_id const*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(const struct object_id *VAR_2,
    enum object_type VAR_3,
    uint32_t VAR_4,
    int VAR_5,
    int VAR_6,
    struct packed_git *VAR_7,
    off_t VAR_8)
{
 struct object_entry *VAR_9;

 VAR_9 = FUNC_2(&VAR_1, VAR_2);
 VAR_9->hash = VAR_4;
 FUNC_1(VAR_9, VAR_3);
 if (VAR_5)
  VAR_9->preferred_base = 1;
 else
  VAR_0++;
 if (VAR_7) {
  FUNC_0(&VAR_1, VAR_9, VAR_7);
  VAR_9->in_pack_offset = VAR_8;
 }

 VAR_9->no_try_delta = VAR_6;
}
