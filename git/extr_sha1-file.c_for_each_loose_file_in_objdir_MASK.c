
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int each_loose_subdir_fn ;
typedef int each_loose_object_fn ;
typedef int each_loose_cruft_fn ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,int ,int ,int ,void*) ;
 int FUNC_1 (struct strbuf*,char const*) ;
 int FUNC_2 (struct strbuf*) ;

int FUNC_3(const char *VAR_1,
      each_loose_object_fn VAR_2,
      each_loose_cruft_fn VAR_3,
      each_loose_subdir_fn VAR_4,
      void *VAR_5)
{
 struct strbuf VAR_6 = VAR_0;
 int VAR_7;

 FUNC_1(&VAR_6, VAR_1);
 VAR_7 = FUNC_0(&VAR_6, VAR_2, VAR_3,
           VAR_4, VAR_5);
 FUNC_2(&VAR_6);

 return VAR_7;
}
