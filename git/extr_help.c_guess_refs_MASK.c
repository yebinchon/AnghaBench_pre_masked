
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct similar_ref_cb {char const* base_ref; struct string_list* similar_refs; } ;


 struct string_list VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct similar_ref_cb*) ;

__attribute__((used)) static struct string_list FUNC_1(const char *VAR_2)
{
 struct similar_ref_cb VAR_3;
 struct string_list VAR_4 = VAR_0;

 VAR_3.base_ref = VAR_2;
 VAR_3.similar_refs = &VAR_4;
 FUNC_0(VAR_1, &VAR_3);
 return VAR_4;
}
