
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_match_data {struct asymmetric_key_id* preparsed; } ;
struct key {int dummy; } ;
struct asymmetric_key_ids {int dummy; } ;
struct asymmetric_key_id {int dummy; } ;


 int VAR_0 ;
 struct asymmetric_key_ids* FUNC_0 (struct key const*) ;
 int FUNC_1 (struct asymmetric_key_ids const*,struct asymmetric_key_id const*,int ) ;

__attribute__((used)) static bool FUNC_2(const struct key *VAR_1,
           const struct key_match_data *VAR_2)
{
 const struct asymmetric_key_ids *VAR_3 = FUNC_0(VAR_1);
 const struct asymmetric_key_id *VAR_4 = VAR_2->preparsed;

 return FUNC_1(VAR_3, VAR_4,
     VAR_0);
}
