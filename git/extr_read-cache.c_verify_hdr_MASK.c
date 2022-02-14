
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_header {scalar_t__ hdr_signature; int hdr_version; } ;
typedef int git_hash_ctx ;
struct TYPE_2__ {int rawsz; int (* final_fn ) (unsigned char*,int *) ;int (* update_fn ) (int *,struct cache_header const*,int) ;int (* init_fn ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct cache_header const*,int) ;
 int FUNC_7 (unsigned char*,int *) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(const struct cache_header *VAR_6, unsigned long VAR_7)
{
 git_hash_ctx VAR_8;
 unsigned char VAR_9[VAR_1];
 int VAR_10;

 if (VAR_6->hdr_signature != FUNC_3(VAR_0))
  return FUNC_1(FUNC_0("bad signature 0x%08x"), VAR_6->hdr_signature);
 VAR_10 = FUNC_4(VAR_6->hdr_version);
 if (VAR_10 < VAR_2 || VAR_3 < VAR_10)
  return FUNC_1(FUNC_0("bad index version %d"), VAR_10);

 if (!VAR_5)
  return 0;

 VAR_4->init_fn(&VAR_8);
 VAR_4->update_fn(&VAR_8, VAR_6, VAR_7 - VAR_4->rawsz);
 VAR_4->final_fn(VAR_9, &VAR_8);
 if (!FUNC_2(VAR_9, (unsigned char *)VAR_6 + VAR_7 - VAR_4->rawsz))
  return FUNC_1(FUNC_0("bad index file sha1 signature"));
 return 0;
}
