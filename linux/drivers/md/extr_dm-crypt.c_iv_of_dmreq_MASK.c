
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dm_crypt_request {int dummy; } ;
struct crypt_config {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (struct crypt_config*) ;
 int FUNC_2 (struct crypt_config*) ;
 scalar_t__ FUNC_3 (struct crypt_config*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static u8 *FUNC_6(struct crypt_config *VAR_0,
         struct dm_crypt_request *VAR_1)
{
 if (FUNC_3(VAR_0))
  return (u8 *)FUNC_0((unsigned long)(VAR_1 + 1),
   FUNC_4(FUNC_2(VAR_0)) + 1);
 else
  return (u8 *)FUNC_0((unsigned long)(VAR_1 + 1),
   FUNC_5(FUNC_1(VAR_0)) + 1);
}
