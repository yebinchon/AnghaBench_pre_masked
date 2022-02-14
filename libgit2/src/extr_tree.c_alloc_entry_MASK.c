
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {char* filename; scalar_t__ filename_len; void* oid; } ;
typedef TYPE_1__ git_tree_entry ;
typedef int git_oid ;


 scalar_t__ FUNC_0 (size_t*,size_t,int) ;
 int VAR_0 ;
 int FUNC_1 (size_t) ;
 TYPE_1__* FUNC_2 (int,size_t) ;
 int FUNC_3 (void*,int const*) ;
 int FUNC_4 (char*,char const*,size_t) ;

__attribute__((used)) static git_tree_entry *FUNC_5(const char *VAR_1, size_t VAR_2, const git_oid *VAR_3)
{
 git_tree_entry *VAR_4 = ((void*)0);
 size_t VAR_5;

 FUNC_1(VAR_2);

 if (FUNC_0(&VAR_5, sizeof(git_tree_entry), VAR_2) ||
     FUNC_0(&VAR_5, VAR_5, 1) ||
     FUNC_0(&VAR_5, VAR_5, VAR_0))
  return ((void*)0);

 VAR_4 = FUNC_2(1, VAR_5);
 if (!VAR_4)
  return ((void*)0);

 {
  char *VAR_6;
  void *VAR_7;

  VAR_6 = ((char *) VAR_4) + sizeof(git_tree_entry);
  FUNC_4(VAR_6, VAR_1, VAR_2);
  VAR_4->filename = VAR_6;

  VAR_7 = VAR_6 + VAR_2 + 1;
  FUNC_3(VAR_7, VAR_3);
  VAR_4->oid = VAR_7;
 }

 VAR_4->filename_len = (uint16_t)VAR_2;

 return VAR_4;
}
