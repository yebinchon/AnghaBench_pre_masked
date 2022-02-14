
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; size_t buf; } ;
struct buffer {size_t posn; TYPE_1__ buf; } ;


 int FUNC_0 (char*,size_t,size_t) ;

size_t FUNC_1(char *VAR_0, size_t VAR_1, size_t VAR_2, void *VAR_3)
{
 size_t VAR_4 = VAR_1 * VAR_2;
 struct buffer *VAR_5 = VAR_3;

 if (VAR_4 > VAR_5->buf.len - VAR_5->posn)
  VAR_4 = VAR_5->buf.len - VAR_5->posn;
 FUNC_0(VAR_0, VAR_5->buf.buf + VAR_5->posn, VAR_4);
 VAR_5->posn += VAR_4;

 return VAR_4 / VAR_1;
}
