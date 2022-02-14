
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_pack_file {int pack_name; int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char**,char const*) ;
 int FUNC_6 (struct git_pack_file**,char const*) ;
 int FUNC_7 (struct git_pack_file*) ;
 struct git_pack_file* FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int ,struct git_pack_file*) ;

int FUNC_10(struct git_pack_file **VAR_3, const char *VAR_4)
{
 struct git_pack_file *VAR_5;
 char *VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_5(&VAR_6, VAR_4)) < 0)
  return VAR_7;

 if (FUNC_3(&VAR_1) < 0) {
  FUNC_2(VAR_0, "failed to lock mwindow mutex");
  return -1;
 }

 VAR_5 = FUNC_8(VAR_2, VAR_6);
 FUNC_0(VAR_6);

 if (VAR_5 != ((void*)0)) {
  FUNC_1(&VAR_5->refcount);
  FUNC_4(&VAR_1);
  *VAR_3 = VAR_5;
  return 0;
 }


 if ((VAR_7 = FUNC_6(&VAR_5, VAR_4)) < 0) {
  FUNC_4(&VAR_1);
  return VAR_7;
 }

 FUNC_1(&VAR_5->refcount);

 VAR_7 = FUNC_9(VAR_2, VAR_5->pack_name, VAR_5);
 FUNC_4(&VAR_1);

 if (VAR_7 < 0) {
  FUNC_7(VAR_5);
  return -1;
 }

 *VAR_3 = VAR_5;
 return 0;
}
