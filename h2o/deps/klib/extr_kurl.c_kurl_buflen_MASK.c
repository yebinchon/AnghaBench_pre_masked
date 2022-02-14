
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int l_buf; int m_buf; int * buf; } ;
typedef TYPE_1__ kurl_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int) ;

int FUNC_3(kurl_t *VAR_1, int VAR_2)
{
 if (VAR_2 <= 0 || VAR_2 < VAR_1->l_buf) return VAR_1->m_buf;
 if (!FUNC_1(VAR_1) && VAR_2 < VAR_0 * 2) return VAR_1->m_buf;
 VAR_1->m_buf = VAR_2;
 FUNC_0(VAR_1->m_buf);
 VAR_1->buf = (uint8_t*)FUNC_2(VAR_1->buf, VAR_1->m_buf);
 return VAR_1->m_buf;
}
