
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ l_buf; scalar_t__ m_buf; scalar_t__ buf; } ;
typedef TYPE_1__ kurl_t ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__,char*,scalar_t__) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_1, size_t VAR_2, size_t VAR_3, void *VAR_4)
{
 kurl_t *VAR_5 = (kurl_t*)VAR_4;
 ssize_t VAR_6 = VAR_2 * VAR_3;
 if (VAR_6 + VAR_5->l_buf > VAR_5->m_buf)
  return VAR_0;
 FUNC_0(VAR_5->buf + VAR_5->l_buf, VAR_1, VAR_6);
 VAR_5->l_buf += VAR_6;
 return VAR_6;
}
