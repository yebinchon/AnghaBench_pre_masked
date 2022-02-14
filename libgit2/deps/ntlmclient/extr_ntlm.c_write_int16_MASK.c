
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ntlm_client ;
struct TYPE_3__ {int len; int pos; int* buf; } ;
typedef TYPE_1__ ntlm_buf ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static inline bool FUNC_1(
 ntlm_client *VAR_0,
 ntlm_buf *VAR_1,
 uint16_t VAR_2)
{
 if (VAR_1->len - VAR_1->pos < 2) {
  FUNC_0(VAR_0, "out of buffer space");
  return 0;
 }

 VAR_1->buf[VAR_1->pos++] = (VAR_2 & 0x000000ff);
 VAR_1->buf[VAR_1->pos++] = (VAR_2 & 0x0000ff00) >> 8;
 return 1;
}
