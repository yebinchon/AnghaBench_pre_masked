
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_merge_options {int variant; } ;
struct ll_merge_driver {int dummy; } ;
typedef int mmfile_t ;
typedef int mmbuffer_t ;


 int VAR_0 ;
 int FUNC_0 (struct ll_merge_options const*) ;
 int FUNC_1 (struct ll_merge_driver const*,int *,char const*,int *,int *,int *,int *,int *,int *,struct ll_merge_options*,int) ;

__attribute__((used)) static int FUNC_2(const struct ll_merge_driver *VAR_1,
     mmbuffer_t *VAR_2,
     const char *VAR_3,
     mmfile_t *VAR_4, const char *VAR_5,
     mmfile_t *VAR_6, const char *VAR_7,
     mmfile_t *VAR_8, const char *VAR_9,
     const struct ll_merge_options *VAR_10,
     int VAR_11)
{

 struct ll_merge_options VAR_12;
 FUNC_0(VAR_10);
 VAR_12 = *VAR_10;
 VAR_12.variant = VAR_0;
 return FUNC_1(VAR_1, VAR_2, VAR_3,
       VAR_4, ((void*)0), VAR_6, ((void*)0), VAR_8, ((void*)0),
       &VAR_12, VAR_11);
}
