
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_5__ {int unicode_ctx; } ;
typedef TYPE_1__ ntlm_client ;
struct TYPE_6__ {size_t pos; int * buf; } ;
typedef TYPE_2__ ntlm_buf ;


 int FUNC_0 (char**,size_t*,int ,char*,size_t) ;

__attribute__((used)) static inline bool FUNC_1(
 char **VAR_0,
 ntlm_client *VAR_1,
 ntlm_buf *VAR_2,
 uint8_t VAR_3)
{
 size_t VAR_4;
 int VAR_5 = FUNC_0(VAR_0,
  &VAR_4,
  VAR_1->unicode_ctx,
  (char *)&VAR_2->buf[VAR_2->pos],
  VAR_3);

 VAR_2->pos += VAR_3;

 return VAR_5;
}
