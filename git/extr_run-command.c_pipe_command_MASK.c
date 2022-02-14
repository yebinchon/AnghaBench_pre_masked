
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_5__ {size_t hint; struct strbuf* buf; } ;
struct TYPE_4__ {char const* buf; size_t len; } ;
struct TYPE_6__ {TYPE_2__ in; TYPE_1__ out; } ;
struct io_pump {int fd; TYPE_3__ u; void* type; } ;
struct child_process {int in; int out; int err; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct child_process*) ;
 scalar_t__ FUNC_1 (struct io_pump*,int) ;
 scalar_t__ FUNC_2 (struct child_process*) ;

int FUNC_3(struct child_process *VAR_2,
   const char *VAR_3, size_t VAR_4,
   struct strbuf *VAR_5, size_t VAR_6,
   struct strbuf *VAR_7, size_t VAR_8)
{
 struct io_pump VAR_9[3];
 int VAR_10 = 0;

 if (VAR_3)
  VAR_2->in = -1;
 if (VAR_5)
  VAR_2->out = -1;
 if (VAR_7)
  VAR_2->err = -1;

 if (FUNC_2(VAR_2) < 0)
  return -1;

 if (VAR_3) {
  VAR_9[VAR_10].fd = VAR_2->in;
  VAR_9[VAR_10].type = VAR_1;
  VAR_9[VAR_10].u.out.buf = VAR_3;
  VAR_9[VAR_10].u.out.len = VAR_4;
  VAR_10++;
 }
 if (VAR_5) {
  VAR_9[VAR_10].fd = VAR_2->out;
  VAR_9[VAR_10].type = VAR_0;
  VAR_9[VAR_10].u.in.buf = VAR_5;
  VAR_9[VAR_10].u.in.hint = VAR_6;
  VAR_10++;
 }
 if (VAR_7) {
  VAR_9[VAR_10].fd = VAR_2->err;
  VAR_9[VAR_10].type = VAR_0;
  VAR_9[VAR_10].u.in.buf = VAR_7;
  VAR_9[VAR_10].u.in.hint = VAR_8;
  VAR_10++;
 }

 if (FUNC_1(VAR_9, VAR_10) < 0) {
  FUNC_0(VAR_2);
  return -1;
 }

 return FUNC_0(VAR_2);
}
