
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crlf_attrs {scalar_t__ crlf_action; } ;
typedef int git_filter_source ;
typedef int git_filter ;
typedef int ca ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct crlf_attrs*,char const**,int const*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (void*,struct crlf_attrs*,int) ;

__attribute__((used)) static int FUNC_5(
 git_filter *VAR_2,
 void **VAR_3,
 const git_filter_source *VAR_4,
 const char **VAR_5)
{
 struct crlf_attrs VAR_6;

 FUNC_1(VAR_2);

 FUNC_2(&VAR_6, VAR_5, VAR_4);

 if (VAR_6.crlf_action == VAR_0)
  return VAR_1;

 *VAR_3 = FUNC_3(sizeof(VAR_6));
 FUNC_0(*VAR_3);
 FUNC_4(*VAR_3, &VAR_6, sizeof(VAR_6));

 return 0;
}
