
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packed_git {int index_size; unsigned char* index_data; int pack_name; } ;
typedef int off_t ;
typedef int git_hash_ctx ;
struct TYPE_2__ {int rawsz; int (* final_fn ) (unsigned char*,int *) ;int (* update_fn ) (int *,unsigned char const*,unsigned int) ;int (* init_fn ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (unsigned char*,unsigned char const*) ;
 scalar_t__ FUNC_2 (struct packed_git*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char const*,unsigned int) ;
 int FUNC_5 (unsigned char*,int *) ;
 TYPE_1__* VAR_1 ;

int FUNC_6(struct packed_git *VAR_2)
{
 off_t VAR_3;
 const unsigned char *VAR_4;
 git_hash_ctx VAR_5;
 unsigned char VAR_6[VAR_0];
 int VAR_7 = 0;

 if (FUNC_2(VAR_2))
  return FUNC_0("packfile %s index not opened", VAR_2->pack_name);
 VAR_3 = VAR_2->index_size;
 VAR_4 = VAR_2->index_data;


 VAR_1->init_fn(&VAR_5);
 VAR_1->update_fn(&VAR_5, VAR_4, (unsigned int)(VAR_3 - VAR_1->rawsz));
 VAR_1->final_fn(VAR_6, &VAR_5);
 if (!FUNC_1(VAR_6, VAR_4 + VAR_3 - VAR_1->rawsz))
  VAR_7 = FUNC_0("Packfile index for %s hash mismatch",
       VAR_2->pack_name);
 return VAR_7;
}
