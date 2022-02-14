
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int hdr ;
typedef int git_oid ;
typedef int git_object_t ;
typedef int git_hash_ctx ;
typedef int git_file ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (size_t*,char*,int,size_t,int ) ;
 size_t FUNC_7 (int ,char*,int) ;

int FUNC_8(git_oid *VAR_3, git_file VAR_4, size_t VAR_5, git_object_t VAR_6)
{
 size_t VAR_7;
 char VAR_8[64], VAR_9[VAR_0];
 git_hash_ctx VAR_10;
 ssize_t VAR_11 = 0;
 int VAR_12 = 0;

 if (!FUNC_5(VAR_6)) {
  FUNC_0(VAR_1, "invalid object type for hash");
  return -1;
 }

 if ((VAR_12 = FUNC_2(&VAR_10)) < 0)
  return VAR_12;

 if ((VAR_12 = FUNC_6(&VAR_7, VAR_8,
  sizeof(VAR_8), VAR_5, VAR_6)) < 0)
  goto done;

 if ((VAR_12 = FUNC_4(&VAR_10, VAR_8, VAR_7)) < 0)
  goto done;

 while (VAR_5 > 0 && (VAR_11 = FUNC_7(VAR_4, VAR_9, sizeof(VAR_9))) > 0) {
  if ((VAR_12 = FUNC_4(&VAR_10, VAR_9, VAR_11)) < 0)
   goto done;

  VAR_5 -= VAR_11;
 }




 if (VAR_11 < 0 || VAR_5 > 0) {
  FUNC_0(VAR_2, "error reading file for hashing");
  VAR_12 = -1;

  goto done;
 }

 VAR_12 = FUNC_3(VAR_3, &VAR_10);

done:
 FUNC_1(&VAR_10);
 return VAR_12;
}
