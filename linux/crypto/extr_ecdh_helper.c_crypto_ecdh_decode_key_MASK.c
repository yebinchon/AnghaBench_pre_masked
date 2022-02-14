
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct kpp_secret {scalar_t__ type; scalar_t__ len; } ;
struct ecdh {void* key; struct kpp_secret key_size; struct kpp_secret curve_id; } ;
typedef int secret ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ecdh*) ;
 char* FUNC_1 (struct kpp_secret*,char const*,int) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(const char *VAR_3, unsigned int VAR_4,
      struct ecdh *VAR_5)
{
 const u8 *VAR_6 = VAR_3;
 struct kpp_secret VAR_7;

 if (FUNC_2(!VAR_3 || VAR_4 < VAR_1))
  return -VAR_2;

 VAR_6 = FUNC_1(&VAR_7, VAR_6, sizeof(VAR_7));
 if (VAR_7.type != VAR_0)
  return -VAR_2;

 VAR_6 = FUNC_1(&VAR_5->curve_id, VAR_6, sizeof(VAR_5->curve_id));
 VAR_6 = FUNC_1(&VAR_5->key_size, VAR_6, sizeof(VAR_5->key_size));
 if (VAR_7.len != FUNC_0(VAR_5))
  return -VAR_2;




 VAR_5->key = (void *)VAR_6;

 return 0;
}
