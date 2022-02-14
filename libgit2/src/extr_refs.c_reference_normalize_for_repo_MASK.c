
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_refname_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char const*,unsigned int) ;
 int FUNC_1 (int*,int *,int ) ;

__attribute__((used)) static int FUNC_2(
 git_refname_t VAR_5,
 git_repository *VAR_6,
 const char *VAR_7,
 bool VAR_8)
{
 int VAR_9;
 unsigned int VAR_10 = VAR_1;

 if (!FUNC_1(&VAR_9, VAR_6, VAR_0) &&
  VAR_9)
  VAR_10 |= VAR_2;

 if (!VAR_8)
  VAR_10 |= VAR_3;

 return FUNC_0(VAR_5, VAR_4, VAR_7, VAR_10);
}
