
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packed_git {unsigned char* index_data; int index_version; unsigned long num_objects; } ;
struct TYPE_2__ {unsigned int rawsz; } ;


 int FUNC_0 (unsigned char const*,unsigned char const*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static size_t FUNC_1(struct packed_git *VAR_1, struct packed_git *VAR_2)
{
 size_t VAR_3 = 0;
 unsigned long VAR_4 = 0, VAR_5 = 0, VAR_6, VAR_7;
 const unsigned char *VAR_8, *VAR_9;
 const unsigned int VAR_10 = VAR_0->rawsz;

 VAR_8 = VAR_1->index_data;
 VAR_9 = VAR_2->index_data;
 VAR_8 += 256 * 4 + ((VAR_1->index_version < 2) ? 4 : 8);
 VAR_9 += 256 * 4 + ((VAR_2->index_version < 2) ? 4 : 8);
 VAR_6 = VAR_10 + ((VAR_1->index_version < 2) ? 4 : 0);
 VAR_7 = VAR_10 + ((VAR_2->index_version < 2) ? 4 : 0);

 while (VAR_4 < VAR_1->num_objects * VAR_6 &&
        VAR_5 < VAR_2->num_objects * VAR_7)
 {
  int VAR_11 = FUNC_0(VAR_8 + VAR_4, VAR_9 + VAR_5);

  if (VAR_11 == 0) {
   VAR_3++;
   VAR_4 += VAR_6;
   VAR_5 += VAR_7;
   continue;
  }
  if (VAR_11 < 0) {
   VAR_4 += VAR_6;
  } else {
   VAR_5 += VAR_7;
  }
 }
 return VAR_3;
}
