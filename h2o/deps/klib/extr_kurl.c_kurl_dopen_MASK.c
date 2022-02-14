
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int fd; int m_buf; int * buf; } ;
typedef TYPE_1__ kurl_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;

kurl_t *FUNC_4(int VAR_1)
{
 kurl_t *VAR_2;
 VAR_2 = (kurl_t*)FUNC_0(1, sizeof(kurl_t));
 VAR_2->fd = VAR_1;
 VAR_2->m_buf = VAR_0;
 VAR_2->buf = (uint8_t*)FUNC_0(VAR_2->m_buf, 1);
 if (FUNC_3(VAR_2, 0) < 0 || FUNC_1(VAR_2) <= 0) {
  FUNC_2(VAR_2);
  return 0;
 }
 return VAR_2;
}
