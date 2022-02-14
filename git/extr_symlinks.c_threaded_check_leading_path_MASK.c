
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_def {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cache_def*,char const*,int,int*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct cache_def *VAR_4, const char *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_7,
      VAR_2|VAR_1|VAR_0, VAR_3);
 if (VAR_7 & VAR_1)
  return 0;
 else if (VAR_7 & VAR_0)
  return -1;
 else
  return VAR_8;
}
