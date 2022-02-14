
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ntlm_client ;
struct TYPE_3__ {int len; size_t pos; int* buf; } ;
typedef TYPE_1__ ntlm_buf ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static inline bool FUNC_1(
 uint64_t *VAR_0,
 ntlm_client *VAR_1,
 ntlm_buf *VAR_2)
{
 if (VAR_2->len - VAR_2->pos < 8) {
  FUNC_0(VAR_1, "truncated message");
  return 0;
 }

 *VAR_0 =
  ((uint64_t)(VAR_2->buf[VAR_2->pos] & 0xff)) |
  ((uint64_t)(VAR_2->buf[VAR_2->pos+1] & 0xff) << 8) |
  ((uint64_t)(VAR_2->buf[VAR_2->pos+2] & 0xff) << 16) |
  ((uint64_t)(VAR_2->buf[VAR_2->pos+3] & 0xff) << 24) |
  ((uint64_t)(VAR_2->buf[VAR_2->pos+4] & 0xff) << 32) |
  ((uint64_t)(VAR_2->buf[VAR_2->pos+5] & 0xff) << 40) |
  ((uint64_t)(VAR_2->buf[VAR_2->pos+6] & 0xff) << 48) |
  ((uint64_t)(VAR_2->buf[VAR_2->pos+7] & 0xff) << 56);

 VAR_2->pos += 8;
 return 1;
}
