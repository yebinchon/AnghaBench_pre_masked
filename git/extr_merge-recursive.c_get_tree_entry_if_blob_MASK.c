
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct diff_filespec {scalar_t__ mode; int oid; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct repository*,struct object_id const*,char const*,int *,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct repository *VAR_1,
      const struct object_id *VAR_2,
      const char *VAR_3,
      struct diff_filespec *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_4->oid, &VAR_4->mode);
 if (FUNC_0(VAR_4->mode)) {
  FUNC_2(&VAR_4->oid, &VAR_0);
  VAR_4->mode = 0;
 }
 return VAR_5;
}
