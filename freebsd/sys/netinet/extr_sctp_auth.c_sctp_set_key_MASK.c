
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int key; } ;
typedef TYPE_1__ sctp_key_t ;


 int FUNC_0 (int ,int *,int ) ;
 TYPE_1__* FUNC_1 (int ) ;

sctp_key_t *
FUNC_2(uint8_t *VAR_0, uint32_t VAR_1)
{
 sctp_key_t *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0)) {

  return (((void*)0));
 }
 FUNC_0(VAR_2->key, VAR_0, VAR_1);
 return (VAR_2);
}
