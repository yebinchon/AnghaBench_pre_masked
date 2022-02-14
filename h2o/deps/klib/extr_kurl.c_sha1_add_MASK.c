
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int * b; } ;
struct TYPE_6__ {int bufOffset; TYPE_1__ buf; } ;
typedef TYPE_2__ sha1nfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_1(sha1nfo *VAR_1, uint8_t VAR_2)
{
 VAR_1->buf.b[VAR_1->bufOffset ^ 3] = VAR_2;
 if (++VAR_1->bufOffset == VAR_0) {
  FUNC_0(VAR_1);
  VAR_1->bufOffset = 0;
 }
}
