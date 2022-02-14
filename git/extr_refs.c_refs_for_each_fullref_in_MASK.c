
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
typedef int each_ref_fn ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct ref_store*,char const*,int ,int ,unsigned int,void*) ;

int FUNC_1(struct ref_store *VAR_1, const char *VAR_2,
        each_ref_fn VAR_3, void *VAR_4,
        unsigned int VAR_5)
{
 unsigned int VAR_6 = 0;

 if (VAR_5)
  VAR_6 = VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_3, 0, VAR_6, VAR_4);
}
