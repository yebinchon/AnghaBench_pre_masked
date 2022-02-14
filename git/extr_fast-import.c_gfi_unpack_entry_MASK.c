
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packed_git {scalar_t__ pack_size; } ;
struct TYPE_3__ {int offset; } ;
struct object_entry {size_t pack_id; TYPE_1__ idx; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_4__ {scalar_t__ rawsz; } ;


 struct packed_git** VAR_0 ;
 int FUNC_0 (struct packed_git*) ;
 int FUNC_1 (int ) ;
 struct packed_git* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int ,struct packed_git*,int ,int*,unsigned long*) ;

__attribute__((used)) static void *FUNC_3(
 struct object_entry *VAR_6,
 unsigned long *VAR_7)
{
 enum object_type VAR_8;
 struct packed_git *VAR_9 = VAR_0[VAR_6->pack_id];
 if (VAR_9 == VAR_1 && VAR_9->pack_size < (VAR_3 + VAR_4->rawsz)) {
  FUNC_0(VAR_9);
  FUNC_1(VAR_2);







  VAR_9->pack_size = VAR_3 + VAR_4->rawsz;
 }
 return FUNC_2(VAR_5, VAR_9, VAR_6->idx.offset, &VAR_8, VAR_7);
}
