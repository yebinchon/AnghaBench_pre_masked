
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct packed_git {scalar_t__* index_data; int num_objects; } ;
struct pack_window {int dummy; } ;
typedef unsigned long off_t ;
struct TYPE_2__ {int rawsz; } ;


 scalar_t__ FUNC_0 (scalar_t__,void*,unsigned long) ;
 scalar_t__ FUNC_1 (scalar_t__ const) ;
 TYPE_1__* VAR_0 ;
 void* FUNC_2 (struct packed_git*,struct pack_window**,unsigned long,unsigned long*) ;

int FUNC_3(struct packed_git *VAR_1, struct pack_window **VAR_2,
     off_t VAR_3, off_t VAR_4, unsigned int VAR_5)
{
 const uint32_t *VAR_6;
 uint32_t VAR_7 = FUNC_0(0, ((void*)0), 0);

 do {
  unsigned long VAR_8;
  void *VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_8);
  if (VAR_8 > VAR_4)
   VAR_8 = VAR_4;
  VAR_7 = FUNC_0(VAR_7, VAR_9, VAR_8);
  VAR_3 += VAR_8;
  VAR_4 -= VAR_8;
 } while (VAR_4);

 VAR_6 = VAR_1->index_data;
 VAR_6 += 2 + 256 + VAR_1->num_objects * (VAR_0->rawsz/4) + VAR_5;

 return VAR_7 != FUNC_1(*VAR_6);
}
