
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ntlm_client ;
struct TYPE_3__ {size_t pos; int * buf; } ;
typedef TYPE_1__ ntlm_buf ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static inline bool FUNC_3(
 char **VAR_0,
 ntlm_client *VAR_1,
 ntlm_buf *VAR_2,
 uint8_t VAR_3)
{
 char *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_3 + 1)) == ((void*)0)) {
  FUNC_2(VAR_1, "out of memory");
  return 0;
 }

 FUNC_1(VAR_4, &VAR_2->buf[VAR_2->pos], VAR_3);
 VAR_4[VAR_3] = '\0';

 VAR_2->pos += VAR_3;

 *VAR_0 = VAR_4;
 return 1;
}
