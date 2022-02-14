
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int reserved; int build; void* minor; void* major; } ;
struct TYPE_6__ {int flags; TYPE_1__ host_version; } ;
typedef TYPE_2__ ntlm_client ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(
 ntlm_client *VAR_1,
 uint8_t VAR_2,
 uint8_t VAR_3,
 uint16_t VAR_4)
{
 FUNC_0(VAR_1);

 VAR_1->host_version.major = VAR_2;
 VAR_1->host_version.minor = VAR_3;
 VAR_1->host_version.build = VAR_4;
 VAR_1->host_version.reserved = 0x0f000000;

 VAR_1->flags |= VAR_0;

 return 0;
}
