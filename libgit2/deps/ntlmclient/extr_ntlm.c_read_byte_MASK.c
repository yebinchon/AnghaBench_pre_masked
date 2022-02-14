
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ntlm_client ;
struct TYPE_3__ {int len; int pos; int * buf; } ;
typedef TYPE_1__ ntlm_buf ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static inline bool FUNC_1(
 uint8_t *VAR_0,
 ntlm_client *VAR_1,
 ntlm_buf *VAR_2)
{
 if (VAR_2->len - VAR_2->pos < 1) {
  FUNC_0(VAR_1, "truncated message");
  return 0;
 }

 *VAR_0 = VAR_2->buf[VAR_2->pos++];
 return 1;
}
