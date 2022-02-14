
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
struct ref_storage_be {struct ref_store* (* init ) (char const*,unsigned int) ;} ;


 int FUNC_0 (char*,char const*) ;
 struct ref_storage_be* FUNC_1 (char const*) ;
 struct ref_store* FUNC_2 (char const*,unsigned int) ;

__attribute__((used)) static struct ref_store *FUNC_3(const char *VAR_0,
     unsigned int VAR_1)
{
 const char *VAR_2 = "files";
 struct ref_storage_be *VAR_3 = FUNC_1(VAR_2);
 struct ref_store *VAR_4;

 if (!VAR_3)
  FUNC_0("reference backend %s is unknown", VAR_2);

 VAR_4 = VAR_3->init(VAR_0, VAR_1);
 return VAR_4;
}
