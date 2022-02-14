
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int count; int strings; } ;
struct TYPE_10__ {int flags; char* start; char* end; TYPE_1__ pathlist; } ;
typedef TYPE_2__ git_iterator_options ;
struct TYPE_12__ {int count; int strings; } ;
struct TYPE_11__ {int flags; TYPE_4__ pathspec; } ;
typedef TYPE_3__ git_diff_options ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (TYPE_3__ const*,int ,char*) ;
 char* FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(char **VAR_2, git_iterator_options *VAR_3, int VAR_4,
  git_iterator_options *VAR_5, int VAR_6,
  const git_diff_options *VAR_7)
{
 FUNC_1(VAR_7, VAR_1, "git_diff_options");

 *VAR_2 = ((void*)0);

 if (VAR_7 && (VAR_7->flags & VAR_0)) {
  VAR_3->pathlist.strings = VAR_7->pathspec.strings;
  VAR_3->pathlist.count = VAR_7->pathspec.count;
  VAR_5->pathlist.strings = VAR_7->pathspec.strings;
  VAR_5->pathlist.count = VAR_7->pathspec.count;
 } else if (VAR_7) {
  *VAR_2 = FUNC_2(&VAR_7->pathspec);
  FUNC_0(VAR_2);
 }

 VAR_3->flags = VAR_4;
 VAR_5->flags = VAR_6;
 VAR_3->start = VAR_5->start = *VAR_2;
 VAR_3->end = VAR_5->end = *VAR_2;

 return 0;
}
