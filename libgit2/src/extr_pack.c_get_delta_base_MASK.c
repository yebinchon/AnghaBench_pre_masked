
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_pack_file {int idx_cache; scalar_t__ has_cache; } ;
struct git_pack_entry {unsigned int offset; } ;
typedef int git_oid ;
typedef unsigned int git_off_t ;
typedef scalar_t__ git_object_t ;
typedef int git_mwindow ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (int *,unsigned char*) ;
 struct git_pack_entry* FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (unsigned int*,int *,struct git_pack_file*,int *,int ) ;
 unsigned char* FUNC_4 (struct git_pack_file*,int **,unsigned int,unsigned int*) ;
 unsigned int FUNC_5 (char*) ;

git_off_t FUNC_6(
 struct git_pack_file *VAR_5,
 git_mwindow **VAR_6,
 git_off_t *VAR_7,
 git_object_t VAR_8,
 git_off_t VAR_9)
{
 unsigned int VAR_10 = 0;
 unsigned char *VAR_11;
 git_off_t VAR_12;
 git_oid VAR_13;

 VAR_11 = FUNC_4(VAR_5, VAR_6, *VAR_7, &VAR_10);

 if (VAR_11 == ((void*)0))
  return VAR_0;






 if (VAR_8 == VAR_1) {
  unsigned VAR_14 = 0;
  unsigned char VAR_15 = VAR_11[VAR_14++];
  size_t VAR_16 = VAR_15 & 127;
  while (VAR_15 & 128) {
   if (VAR_10 <= VAR_14)
    return VAR_0;
   VAR_16 += 1;
   if (!VAR_16 || FUNC_0(VAR_16, 7))
    return 0;
   VAR_15 = VAR_11[VAR_14++];
   VAR_16 = (VAR_16 << 7) + (VAR_15 & 127);
  }
  if (VAR_16 == 0 || (size_t)VAR_9 <= VAR_16)
   return 0;
  VAR_12 = VAR_9 - VAR_16;
  *VAR_7 += VAR_14;
 } else if (VAR_8 == VAR_2) {

  if (VAR_5->has_cache) {
   struct git_pack_entry *VAR_17;
   git_oid VAR_18;

   FUNC_1(&VAR_18, VAR_11);
   if ((VAR_17 = FUNC_2(VAR_5->idx_cache, &VAR_18)) != ((void*)0)) {
    *VAR_7 += 20;
    return VAR_17->offset;
   } else {




    return VAR_4;
   }
  }


  if (FUNC_3(&VAR_12, &VAR_13, VAR_5, (git_oid *)VAR_11, VAR_3) < 0)
   return FUNC_5("base entry delta is not in the same pack");
  *VAR_7 += 20;
 } else
  return 0;

 return VAR_12;
}
