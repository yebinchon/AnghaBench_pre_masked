
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hash; } ;
struct split_index {void* replace_bitmap; void* delete_bitmap; TYPE_1__ base_oid; } ;
struct index_state {int dummy; } ;
struct TYPE_4__ {unsigned long rawsz; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 () ;
 int FUNC_2 (void*,unsigned char const*,unsigned long) ;
 int FUNC_3 (int ,unsigned char const*) ;
 struct split_index* FUNC_4 (struct index_state*) ;
 TYPE_2__* VAR_0 ;

int FUNC_5(struct index_state *VAR_1,
    const void *VAR_2, unsigned long VAR_3)
{
 const unsigned char *VAR_4 = VAR_2;
 struct split_index *VAR_5;
 int VAR_6;

 if (VAR_3 < VAR_0->rawsz)
  return FUNC_0("corrupt link extension (too short)");
 VAR_5 = FUNC_4(VAR_1);
 FUNC_3(VAR_5->base_oid.hash, VAR_4);
 VAR_4 += VAR_0->rawsz;
 VAR_3 -= VAR_0->rawsz;
 if (!VAR_3)
  return 0;
 VAR_5->delete_bitmap = FUNC_1();
 VAR_6 = FUNC_2(VAR_5->delete_bitmap, VAR_4, VAR_3);
 if (VAR_6 < 0)
  return FUNC_0("corrupt delete bitmap in link extension");
 VAR_4 += VAR_6;
 VAR_3 -= VAR_6;
 VAR_5->replace_bitmap = FUNC_1();
 VAR_6 = FUNC_2(VAR_5->replace_bitmap, VAR_4, VAR_3);
 if (VAR_6 < 0)
  return FUNC_0("corrupt replace bitmap in link extension");
 if (VAR_6 != VAR_3)
  return FUNC_0("garbage at the end of link extension");
 return 0;
}
