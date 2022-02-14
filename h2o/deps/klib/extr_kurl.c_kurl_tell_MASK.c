
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {int off0; int p_buf; } ;
typedef TYPE_1__ kurl_t ;



off_t FUNC_0(const kurl_t *VAR_0)
{
 if (VAR_0 == 0) return -1;
 return VAR_0->off0 + VAR_0->p_buf;
}
