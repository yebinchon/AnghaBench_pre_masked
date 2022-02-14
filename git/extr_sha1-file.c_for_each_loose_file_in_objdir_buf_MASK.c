
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int each_loose_subdir_fn ;
typedef int each_loose_object_fn ;
typedef int each_loose_cruft_fn ;


 int FUNC_0 (int,struct strbuf*,int ,int ,int ,void*) ;

int FUNC_1(struct strbuf *VAR_0,
       each_loose_object_fn VAR_1,
       each_loose_cruft_fn VAR_2,
       each_loose_subdir_fn VAR_3,
       void *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 256; VAR_6++) {
  VAR_5 = FUNC_0(VAR_6, VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_4);
  if (VAR_5)
   break;
 }

 return VAR_5;
}
