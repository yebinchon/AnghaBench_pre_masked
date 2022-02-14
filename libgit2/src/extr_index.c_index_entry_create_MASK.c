
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct stat {int st_mode; } ;
struct TYPE_2__ {int path; } ;
struct entry_internal {size_t pathlen; int path; TYPE_1__ entry; } ;
typedef int git_repository ;
typedef int git_index_entry ;


 int FUNC_0 (struct entry_internal*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct entry_internal* FUNC_2 (int,size_t) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int *,char const*,int ,unsigned int) ;
 int FUNC_5 (int ,char const*,size_t) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(
 git_index_entry **VAR_3,
 git_repository *VAR_4,
 const char *VAR_5,
 struct stat *VAR_6,
 bool VAR_7)
{
 size_t VAR_8 = FUNC_6(VAR_5), VAR_9;
 struct entry_internal *VAR_10;
 unsigned int VAR_11 = VAR_1;
 uint16_t VAR_12 = 0;





 if (VAR_7)
  VAR_11 |= VAR_2;
 if (VAR_6)
  VAR_12 = VAR_6->st_mode;

 if (!FUNC_4(VAR_4, VAR_5, VAR_12, VAR_11)) {
  FUNC_3(VAR_0, "invalid path: '%s'", VAR_5);
  return -1;
 }

 FUNC_1(&VAR_9, sizeof(struct entry_internal), VAR_8);
 FUNC_1(&VAR_9, VAR_9, 1);
 VAR_10 = FUNC_2(1, VAR_9);
 FUNC_0(VAR_10);

 VAR_10->pathlen = VAR_8;
 FUNC_5(VAR_10->path, VAR_5, VAR_8);
 VAR_10->entry.path = VAR_10->path;

 *VAR_3 = (git_index_entry *)VAR_10;
 return 0;
}
