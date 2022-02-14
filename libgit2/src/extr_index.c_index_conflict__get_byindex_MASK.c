
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* path; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_11__ {scalar_t__ (* entries_cmp_path ) (char*,char const*) ;int entries; } ;
typedef TYPE_2__ git_index ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (int *,size_t) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

__attribute__((used)) static int FUNC_5(
 const git_index_entry **VAR_0,
 const git_index_entry **VAR_1,
 const git_index_entry **VAR_2,
 git_index *VAR_3,
 size_t VAR_4)
{
 const git_index_entry *VAR_5;
 const char *VAR_6 = ((void*)0);
 size_t VAR_7;
 int VAR_8, VAR_9 = 0;

 FUNC_1(VAR_0 && VAR_1 && VAR_2 && VAR_3);

 *VAR_0 = ((void*)0);
 *VAR_1 = ((void*)0);
 *VAR_2 = ((void*)0);

 for (VAR_7 = FUNC_2(VAR_3); VAR_4 < VAR_7; ++VAR_4) {
  VAR_5 = FUNC_3(&VAR_3->entries, VAR_4);

  if (VAR_6 && VAR_3->entries_cmp_path(VAR_5->path, VAR_6) != 0)
   break;

  VAR_8 = FUNC_0(VAR_5);
  VAR_6 = VAR_5->path;

  switch (VAR_8) {
  case 3:
   *VAR_2 = VAR_5;
   VAR_9++;
   break;
  case 2:
   *VAR_1 = VAR_5;
   VAR_9++;
   break;
  case 1:
   *VAR_0 = VAR_5;
   VAR_9++;
   break;
  default:
   break;
  };
 }

 return VAR_9;
}
