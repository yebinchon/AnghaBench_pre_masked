
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct git_pack_file {unsigned int num_bad_objects; TYPE_1__ mwf; int * bad_object_sha1; } ;
struct git_pack_entry {int sha1; struct git_pack_file* p; int offset; } ;
typedef int git_oid ;
typedef int git_off_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct git_pack_file*) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,struct git_pack_file*,int const*,size_t) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct git_pack_file*) ;

int FUNC_6(
  struct git_pack_entry *VAR_1,
  struct git_pack_file *VAR_2,
  const git_oid *VAR_3,
  size_t VAR_4)
{
 git_off_t VAR_5;
 git_oid VAR_6;
 int VAR_7;

 FUNC_0(VAR_2);

 if (VAR_4 == VAR_0 && VAR_2->num_bad_objects) {
  unsigned VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_2->num_bad_objects; VAR_8++)
   if (FUNC_1(VAR_3, &VAR_2->bad_object_sha1[VAR_8]) == 0)
    return FUNC_4("bad object found in packfile");
 }

 VAR_7 = FUNC_3(&VAR_5, &VAR_6, VAR_2, VAR_3, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;




 if (VAR_2->mwf.fd == -1 && (VAR_7 = FUNC_5(VAR_2)) < 0)
  return VAR_7;

 VAR_1->offset = VAR_5;
 VAR_1->p = VAR_2;

 FUNC_2(&VAR_1->sha1, &VAR_6);
 return 0;
}
