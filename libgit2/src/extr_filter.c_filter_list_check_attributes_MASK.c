
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int git_repository ;
struct TYPE_5__ {int flags; int path; } ;
typedef TYPE_1__ git_filter_source ;
struct TYPE_6__ {size_t nattrs; char** attrs; int nmatches; } ;
typedef TYPE_2__ git_filter_def ;
typedef scalar_t__ git_attr_value_t ;
typedef int git_attr_session ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const**) ;
 int VAR_4 ;
 int VAR_5 ;
 char** FUNC_1 (size_t,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char const**,int *,int *,int ,int ,size_t,char**) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char const*,char const*) ;

__attribute__((used)) static int FUNC_7(
 const char ***VAR_6,
 git_repository *VAR_7,
 git_attr_session *VAR_8,
 git_filter_def *VAR_9,
 const git_filter_source *VAR_10)
{
 const char **VAR_11 = FUNC_1(VAR_9->nattrs, sizeof(const char *));
 uint32_t VAR_12 = 0;
 size_t VAR_13;
 int VAR_14;

 FUNC_0(VAR_11);

 if ((VAR_10->flags & VAR_5) != 0)
  VAR_12 |= VAR_1;

 if ((VAR_10->flags & VAR_4) != 0)
  VAR_12 |= VAR_0;

 VAR_14 = FUNC_3(
  VAR_11, VAR_7, VAR_8, VAR_12, VAR_10->path, VAR_9->nattrs, VAR_9->attrs);


 if (VAR_14 == VAR_3 && !VAR_9->nmatches) {
  FUNC_5();
  FUNC_2((void *)VAR_11);
  return 0;
 }

 for (VAR_13 = 0; !VAR_14 && VAR_13 < VAR_9->nattrs; ++VAR_13) {
  const char *VAR_15 = VAR_9->attrs[VAR_9->nattrs + VAR_13];
  git_attr_value_t VAR_16, VAR_17;

  if (!VAR_15)
   continue;

  VAR_16 = FUNC_4(VAR_15);
  VAR_17 = FUNC_4(VAR_11[VAR_13]);

  if (VAR_16 != VAR_17)
   VAR_14 = VAR_3;
  else if (VAR_16 == VAR_2 &&
    FUNC_6(VAR_15, VAR_11[VAR_13]) &&
    FUNC_6(VAR_15, "*"))
   VAR_14 = VAR_3;
 }

 if (VAR_14)
  FUNC_2((void *)VAR_11);
 else
  *VAR_6 = VAR_11;

 return VAR_14;
}
