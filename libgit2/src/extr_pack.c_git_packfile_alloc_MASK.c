
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {scalar_t__ st_mtime; int st_size; int st_mode; } ;
struct TYPE_2__ {int fd; int size; } ;
struct git_pack_file {int pack_keep; int pack_local; int index_version; int bases; int lock; scalar_t__ mtime; TYPE_1__ mwf; scalar_t__ pack_name; } ;
typedef scalar_t__ git_time_t ;


 int FUNC_0 (struct git_pack_file*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 struct git_pack_file* FUNC_4 (int,size_t) ;
 int FUNC_5 (struct git_pack_file*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int VAR_1 ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (char*,int *,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,char const*,int) ;
 scalar_t__ FUNC_12 (scalar_t__,struct stat*) ;
 size_t FUNC_13 (char const*) ;

int FUNC_14(struct git_pack_file **VAR_2, const char *VAR_3)
{
 struct stat VAR_4;
 struct git_pack_file *VAR_5;
 size_t VAR_6 = VAR_3 ? FUNC_13(VAR_3) : 0, VAR_7;

 *VAR_2 = ((void*)0);

 if (VAR_6 < FUNC_13(".idx"))
  return FUNC_9("invalid packfile path", ((void*)0), 0);

 FUNC_1(&VAR_7, sizeof(*VAR_5), VAR_6);
 FUNC_1(&VAR_7, VAR_7, 2);

 VAR_5 = FUNC_4(1, VAR_7);
 FUNC_0(VAR_5);

 FUNC_11(VAR_5->pack_name, VAR_3, VAR_6 + 1);





 if (FUNC_6(VAR_3, ".idx") == 0) {
  size_t VAR_8 = VAR_6 - FUNC_13(".idx");

  if (!VAR_1) {
   FUNC_11(VAR_5->pack_name + VAR_8, ".keep", sizeof(".keep"));
   if (FUNC_10(VAR_5->pack_name) == 1)
    VAR_5->pack_keep = 1;
  }

  FUNC_11(VAR_5->pack_name + VAR_8, ".pack", sizeof(".pack"));
 }

 if (FUNC_12(VAR_5->pack_name, &VAR_4) < 0 || !FUNC_2(VAR_4.st_mode)) {
  FUNC_5(VAR_5);
  return FUNC_9("packfile not found", ((void*)0), 0);
 }




 VAR_5->mwf.fd = -1;
 VAR_5->mwf.size = VAR_4.st_size;
 VAR_5->pack_local = 1;
 VAR_5->mtime = (git_time_t)VAR_4.st_mtime;
 VAR_5->index_version = -1;

 if (FUNC_8(&VAR_5->lock)) {
  FUNC_7(VAR_0, "failed to initialize packfile mutex");
  FUNC_5(VAR_5);
  return -1;
 }

 if (FUNC_3(&VAR_5->bases) < 0) {
  FUNC_5(VAR_5);
  return -1;
 }

 *VAR_2 = VAR_5;

 return 0;
}
