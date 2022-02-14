
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsck_options {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct commit*,char const*,unsigned long,struct fsck_options*) ;
 char const* FUNC_1 (struct commit*,unsigned long*) ;
 int FUNC_2 (struct commit*,char const*) ;

__attribute__((used)) static int FUNC_3(struct commit *VAR_0, const char *VAR_1,
 unsigned long VAR_2, struct fsck_options *VAR_3)
{
 const char *VAR_4 = VAR_1 ? VAR_1 : FUNC_1(VAR_0, &VAR_2);
 int VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_2, VAR_3);
 if (!VAR_1)
  FUNC_2(VAR_0, VAR_4);
 return VAR_5;
}
