
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ucred {int cr_uid; } ;
typedef scalar_t__ rpc_gss_service_t ;
typedef TYPE_1__* gss_OID ;
struct TYPE_3__ {int length; int elements; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char const*,int) ;

__attribute__((used)) static uint32_t
FUNC_3(const char *VAR_2, gss_OID VAR_3,
    struct ucred *VAR_4, rpc_gss_service_t VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_4->cr_uid);
 VAR_6 = FUNC_2(VAR_2, VAR_6);
 VAR_6 = FUNC_1(VAR_3->elements, VAR_3->length, VAR_6);
 VAR_6 = FUNC_0(VAR_6, (int) VAR_5);

 return (VAR_6 % VAR_1);
}
