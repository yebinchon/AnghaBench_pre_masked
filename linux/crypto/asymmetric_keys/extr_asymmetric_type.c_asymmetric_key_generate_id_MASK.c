
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asymmetric_key_id {size_t len; scalar_t__ data; } ;


 int VAR_0 ;
 struct asymmetric_key_id* FUNC_0 (int ) ;
 int VAR_1 ;
 struct asymmetric_key_id* FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__,void const*,size_t) ;

struct asymmetric_key_id *FUNC_3(const void *VAR_2,
           size_t VAR_3,
           const void *VAR_4,
           size_t VAR_5)
{
 struct asymmetric_key_id *VAR_6;

 VAR_6 = FUNC_1(sizeof(struct asymmetric_key_id) + VAR_3 + VAR_5,
        VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 VAR_6->len = VAR_3 + VAR_5;
 FUNC_2(VAR_6->data, VAR_2, VAR_3);
 FUNC_2(VAR_6->data + VAR_3, VAR_4, VAR_5);
 return VAR_6;
}
