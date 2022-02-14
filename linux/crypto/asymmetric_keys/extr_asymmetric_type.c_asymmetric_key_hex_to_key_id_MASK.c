
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asymmetric_key_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct asymmetric_key_id* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char const*,struct asymmetric_key_id*,size_t) ;
 int FUNC_2 (struct asymmetric_key_id*) ;
 struct asymmetric_key_id* FUNC_3 (int,int ) ;
 size_t FUNC_4 (char const*) ;

struct asymmetric_key_id *FUNC_5(const char *VAR_3)
{
 struct asymmetric_key_id *VAR_4;
 size_t VAR_5;
 int VAR_6;

 if (!*VAR_3)
  return FUNC_0(-VAR_0);
 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5 & 1)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_3(sizeof(struct asymmetric_key_id) + VAR_5 / 2,
      VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_1);
 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5 / 2);
 if (VAR_6 < 0) {
  FUNC_2(VAR_4);
  return FUNC_0(-VAR_0);
 }
 return VAR_4;
}
