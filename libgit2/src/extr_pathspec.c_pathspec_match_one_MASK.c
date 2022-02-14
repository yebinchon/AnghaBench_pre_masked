
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pathspec_match_context {scalar_t__ wildmatch_flags; scalar_t__ (* strncomp ) (char const*,int ,size_t) ;scalar_t__ (* strcomp ) (int ,char const*) ;} ;
struct TYPE_3__ {int flags; size_t length; int pattern; } ;
typedef TYPE_1__ git_attr_fnmatch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 scalar_t__ FUNC_1 (char const*,int ,size_t) ;
 scalar_t__ FUNC_2 (char const*,int ,size_t) ;
 int FUNC_3 (int ,char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(
 const git_attr_fnmatch *VAR_4,
 struct pathspec_match_context *VAR_5,
 const char *VAR_6)
{
 int VAR_7 = (VAR_4->flags & VAR_1) ? 0 : VAR_3;

 if (VAR_7 == VAR_3)
  VAR_7 = VAR_5->strcomp(VAR_4->pattern, VAR_6) ? VAR_3 : 0;

 if (VAR_5->wildmatch_flags >= 0 && VAR_7 == VAR_3)
  VAR_7 = FUNC_3(VAR_4->pattern, VAR_6, VAR_5->wildmatch_flags);


 if (VAR_7 == VAR_3 &&
  (VAR_4->flags & VAR_0) == 0 &&
  VAR_5->strncomp(VAR_6, VAR_4->pattern, VAR_4->length) == 0 &&
  VAR_6[VAR_4->length] == '/')
  VAR_7 = 0;




 if (VAR_7 == VAR_3 &&
  (VAR_4->flags & VAR_2) != 0 &&
  *VAR_6 == '!' &&
  VAR_5->strncomp(VAR_6 + 1, VAR_4->pattern, VAR_4->length) == 0 &&
  (!VAR_6[VAR_4->length + 1] || VAR_6[VAR_4->length + 1] == '/'))
  return 1;

 if (VAR_7 == 0)
  return (VAR_4->flags & VAR_2) ? 0 : 1;
 return -1;
}
