
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct untracked_cache {int root; int exclude_per_dir; int dir_flags; int ss_excludes_file; int ss_info_exclude; int ident; } ;
struct read_data {unsigned char const* data; unsigned char const* end; int index; void* sha1_valid; void* check_only; void* valid; int ucd; } ;
struct ondisk_untracked_cache {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {unsigned int rawsz; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned char const**) ;
 int VAR_0 ;
 int FUNC_2 (void*,int ,struct read_data*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 () ;
 int FUNC_5 (void*,unsigned char const*,int) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct untracked_cache*) ;
 int FUNC_8 (unsigned char const*) ;
 int VAR_2 ;
 int FUNC_9 (int *,unsigned char const*,unsigned char const*) ;
 int FUNC_10 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (int *,struct read_data*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int *,char const*,int) ;
 int FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (char const*) ;
 TYPE_1__* VAR_6 ;
 struct untracked_cache* FUNC_15 (int,int) ;
 int FUNC_16 (char const*) ;

struct untracked_cache *FUNC_17(const void *VAR_7, unsigned long VAR_8)
{
 struct untracked_cache *VAR_9;
 struct read_data VAR_10;
 const unsigned char *VAR_11 = VAR_7, *VAR_12 = (const unsigned char *)VAR_7 + VAR_8;
 const char *VAR_13;
 int VAR_14;
 ssize_t VAR_15;
 const char *VAR_16;
 const unsigned VAR_17 = VAR_6->rawsz;
 const unsigned VAR_18 = sizeof(struct ondisk_untracked_cache);
 const unsigned VAR_19 = VAR_18 + 2 * VAR_17;

 if (VAR_8 <= 1 || VAR_12[-1] != '\0')
  return ((void*)0);
 VAR_12--;

 VAR_14 = FUNC_1(&VAR_11);
 if (VAR_11 + VAR_14 > VAR_12)
  return ((void*)0);
 VAR_13 = (const char *)VAR_11;
 VAR_11 += VAR_14;

 if (VAR_11 + VAR_19 + 1 > VAR_12)
  return ((void*)0);

 VAR_9 = FUNC_15(1, sizeof(*VAR_9));
 FUNC_13(&VAR_9->ident, VAR_14);
 FUNC_12(&VAR_9->ident, VAR_13, VAR_14);
 FUNC_9(&VAR_9->ss_info_exclude,
        VAR_11 + FUNC_10(VAR_2),
        VAR_11 + VAR_18);
 FUNC_9(&VAR_9->ss_excludes_file,
        VAR_11 + FUNC_10(VAR_1),
        VAR_11 + VAR_18 + VAR_17);
 VAR_9->dir_flags = FUNC_8(VAR_11 + FUNC_10(VAR_0));
 VAR_16 = (const char *)VAR_11 + VAR_19;
 VAR_9->exclude_per_dir = FUNC_16(VAR_16);

 VAR_11 += VAR_19 + FUNC_14(VAR_16) + 1;
 if (VAR_11 >= VAR_12)
  goto done2;

 VAR_15 = FUNC_1(&VAR_11);
 if (VAR_11 > VAR_12 || VAR_15 == 0)
  goto done2;

 VAR_10.valid = FUNC_4();
 VAR_10.check_only = FUNC_4();
 VAR_10.sha1_valid = FUNC_4();
 VAR_10.data = VAR_11;
 VAR_10.end = VAR_12;
 VAR_10.index = 0;
 FUNC_0(VAR_10.ucd, VAR_15);

 if (FUNC_11(&VAR_9->root, &VAR_10) || VAR_10.index != VAR_15)
  goto done;

 VAR_11 = VAR_10.data;
 VAR_15 = FUNC_5(VAR_10.valid, VAR_11, VAR_12 - VAR_11);
 if (VAR_15 < 0)
  goto done;

 VAR_11 += VAR_15;
 VAR_15 = FUNC_5(VAR_10.check_only, VAR_11, VAR_12 - VAR_11);
 if (VAR_15 < 0)
  goto done;

 VAR_11 += VAR_15;
 VAR_15 = FUNC_5(VAR_10.sha1_valid, VAR_11, VAR_12 - VAR_11);
 if (VAR_15 < 0)
  goto done;

 FUNC_2(VAR_10.check_only, VAR_5, &VAR_10);
 VAR_10.data = VAR_11 + VAR_15;
 FUNC_2(VAR_10.valid, VAR_4, &VAR_10);
 FUNC_2(VAR_10.sha1_valid, VAR_3, &VAR_10);
 VAR_11 = VAR_10.data;

done:
 FUNC_6(VAR_10.ucd);
 FUNC_3(VAR_10.valid);
 FUNC_3(VAR_10.check_only);
 FUNC_3(VAR_10.sha1_valid);
done2:
 if (VAR_11 != VAR_12) {
  FUNC_7(VAR_9);
  VAR_9 = ((void*)0);
 }
 return VAR_9;
}
