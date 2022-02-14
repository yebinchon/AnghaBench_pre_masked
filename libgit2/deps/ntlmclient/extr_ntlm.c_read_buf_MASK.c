
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ntlm_client ;
struct TYPE_3__ {size_t len; size_t pos; int * buf; } ;
typedef TYPE_1__ ntlm_buf ;


 int FUNC_0 (unsigned char*,int *,size_t) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static inline bool FUNC_2(
 unsigned char *VAR_0,
 ntlm_client *VAR_1,
 ntlm_buf *VAR_2,
 size_t VAR_3)
{
 if (VAR_2->len - VAR_2->pos < VAR_3) {
  FUNC_1(VAR_1, "truncated message");
  return 0;
 }

 FUNC_0(VAR_0, &VAR_2->buf[VAR_2->pos], VAR_3);
 VAR_2->pos += VAR_3;

 return 1;
}
