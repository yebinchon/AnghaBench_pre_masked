
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ntlm_client ;
struct TYPE_3__ {size_t len; size_t pos; int * buf; } ;
typedef TYPE_1__ ntlm_buf ;


 int FUNC_0 (int *,unsigned char const*,size_t) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static inline bool FUNC_2(
 ntlm_client *VAR_0,
 ntlm_buf *VAR_1,
 const unsigned char *VAR_2,
 size_t VAR_3)
{
 if (VAR_1->len - VAR_1->pos < VAR_3) {
  FUNC_1(VAR_0, "out of buffer space");
  return 0;
 }

 FUNC_0(&VAR_1->buf[VAR_1->pos], VAR_2, VAR_3);
 VAR_1->pos += VAR_3;
 return 1;
}
