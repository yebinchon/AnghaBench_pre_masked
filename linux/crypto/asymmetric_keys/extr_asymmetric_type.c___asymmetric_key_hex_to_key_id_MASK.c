
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asymmetric_key_id {size_t len; int data; } ;


 int FUNC_0 (int ,char const*,size_t) ;

inline int FUNC_1(const char *VAR_0,
       struct asymmetric_key_id *VAR_1,
       size_t VAR_2)
{
 VAR_1->len = VAR_2;
 return FUNC_0(VAR_1->data, VAR_0, VAR_2);
}
