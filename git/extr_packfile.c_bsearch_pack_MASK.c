
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct packed_git {unsigned char* index_data; int index_version; } ;
struct object_id {int hash; } ;
struct TYPE_2__ {unsigned int rawsz; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int const*,unsigned char const*,int,int *) ;
 TYPE_1__* VAR_0 ;

int FUNC_2(const struct object_id *VAR_1, const struct packed_git *VAR_2, uint32_t *VAR_3)
{
 const unsigned char *VAR_4 = VAR_2->index_data;
 const unsigned char *VAR_5;
 const unsigned int VAR_6 = VAR_0->rawsz;
 int VAR_7;

 if (!VAR_4)
  FUNC_0("bsearch_pack called without a valid pack-index");

 VAR_5 = VAR_4 + 4 * 256;
 if (VAR_2->index_version == 1) {
  VAR_7 = VAR_6 + 4;
  VAR_5 += 4;
 } else {
  VAR_7 = VAR_6;
  VAR_4 += 8;
  VAR_5 += 8;
 }

 return FUNC_1(VAR_1->hash, (const uint32_t*)VAR_4,
       VAR_5, VAR_7, VAR_3);
}
