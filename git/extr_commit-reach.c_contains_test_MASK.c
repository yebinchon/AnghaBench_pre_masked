
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct contains_cache {int dummy; } ;
struct commit_list {int dummy; } ;
struct commit {scalar_t__ generation; } ;
typedef enum contains_result { ____Placeholder_contains_result } contains_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (struct contains_cache*,struct commit*) ;
 scalar_t__ FUNC_1 (struct commit_list const*,struct commit*) ;
 int FUNC_2 (struct commit*) ;

__attribute__((used)) static enum contains_result FUNC_3(struct commit *VAR_3,
       const struct commit_list *VAR_4,
       struct contains_cache *VAR_5,
       uint32_t VAR_6)
{
 enum contains_result *VAR_7 = FUNC_0(VAR_5, VAR_3);


 if (*VAR_7)
  return *VAR_7;


 if (FUNC_1(VAR_4, VAR_3)) {
  *VAR_7 = VAR_2;
  return VAR_2;
 }


 FUNC_2(VAR_3);

 if (VAR_3->generation < VAR_6)
  return VAR_0;

 return VAR_1;
}
