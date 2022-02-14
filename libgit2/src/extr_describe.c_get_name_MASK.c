
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct get_name_data {int names; int repo; TYPE_1__* opts; } ;
typedef int git_oid ;
struct TYPE_2__ {scalar_t__ describe_strategy; scalar_t__ pattern; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char const*,int *,unsigned int,int *) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int *,int *,int ,char const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,char const*,int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, void *VAR_4)
{
 struct get_name_data *VAR_5;
 bool VAR_6, VAR_7, VAR_8;
 git_oid VAR_9, VAR_10;
 unsigned int VAR_11;
 int VAR_12 = 0;

 VAR_5 = (struct get_name_data *)VAR_4;
 VAR_6 = !FUNC_1(VAR_3, VAR_2);
 VAR_8 = VAR_5->opts->describe_strategy == VAR_0;


 if (!VAR_8 && !VAR_6)
  return 0;


 if (VAR_5->opts->pattern && (!VAR_6 || FUNC_4(VAR_5->opts->pattern,
  VAR_3 + FUNC_3(VAR_2), 0)))
    return 0;


 if ((VAR_12 = FUNC_2(
  &VAR_9, &VAR_10, VAR_5->repo, VAR_3)) < 0)
  return VAR_12;

 VAR_7 = VAR_12;







 if (VAR_7)
  VAR_11 = 2;
 else if (VAR_6)
  VAR_11 = 1;
 else
  VAR_11 = 0;

 FUNC_0(VAR_5->repo, VAR_5->names,
  VAR_8 ? VAR_3 + FUNC_3(VAR_1) : VAR_3 + FUNC_3(VAR_2),
  &VAR_9, VAR_11, &VAR_10);
 return 0;
}
