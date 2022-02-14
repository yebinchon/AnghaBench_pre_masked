
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int b; } ;
struct TYPE_5__ {scalar_t__ bufOffset; scalar_t__ byteCount; TYPE_1__ state; } ;
typedef TYPE_2__ sha1nfo ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int ) ;

void FUNC_1(sha1nfo *VAR_1)
{
 const uint8_t VAR_2[] = { 0x01,0x23,0x45,0x67, 0x89,0xab,0xcd,0xef, 0xfe,0xdc,0xba,0x98, 0x76,0x54,0x32,0x10, 0xf0,0xe1,0xd2,0xc3 };
 FUNC_0(VAR_1->state.b, VAR_2, VAR_0);
 VAR_1->byteCount = 0;
 VAR_1->bufOffset = 0;
}
