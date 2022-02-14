
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int* w; int const* b; } ;
struct TYPE_6__ {int bufOffset; int byteCount; TYPE_1__ state; } ;
typedef TYPE_2__ sha1nfo ;


 int FUNC_0 (TYPE_2__*,int) ;

const uint8_t *FUNC_1(sha1nfo *VAR_0)
{
 int VAR_1;
 FUNC_0(VAR_0, 0x80);
 while (VAR_0->bufOffset != 56) FUNC_0(VAR_0, 0);
 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_0, VAR_0->byteCount >> 29);
 FUNC_0(VAR_0, VAR_0->byteCount >> 21);
 FUNC_0(VAR_0, VAR_0->byteCount >> 13);
 FUNC_0(VAR_0, VAR_0->byteCount >> 5);
 FUNC_0(VAR_0, VAR_0->byteCount << 3);
 for (VAR_1 = 0; VAR_1 < 5; ++VAR_1) {
  uint32_t VAR_2 = VAR_0->state.w[VAR_1];
  VAR_0->state.w[VAR_1] = VAR_2<<24 | (VAR_2<<8&0x00ff0000) | (VAR_2>>8&0x0000ff00) | VAR_2>>24;
 }
 return VAR_0->state.b;
}
