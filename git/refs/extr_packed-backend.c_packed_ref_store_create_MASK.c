
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
struct packed_ref_store {unsigned int store_flags; int path; } ;


 int FUNC_0 (struct ref_store*,int *) ;
 int FUNC_1 (char*,int *) ;
 int VAR_0 ;
 struct packed_ref_store* FUNC_2 (int,int) ;
 int FUNC_3 (char const*) ;

struct ref_store *FUNC_4(const char *VAR_1,
       unsigned int VAR_2)
{
 struct packed_ref_store *VAR_3 = FUNC_2(1, sizeof(*VAR_3));
 struct ref_store *VAR_4 = (struct ref_store *)VAR_3;

 FUNC_0(VAR_4, &VAR_0);
 VAR_3->store_flags = VAR_2;

 VAR_3->path = FUNC_3(VAR_1);
 FUNC_1("packed-refs", &VAR_3->path);

 return VAR_4;
}
