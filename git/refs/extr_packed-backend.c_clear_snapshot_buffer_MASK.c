
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snapshot {int * eof; int * start; int * buf; scalar_t__ mmapped; TYPE_1__* refs; } ;
struct TYPE_2__ {int path; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct snapshot *VAR_0)
{
 if (VAR_0->mmapped) {
  if (FUNC_2(VAR_0->buf, VAR_0->eof - VAR_0->buf))
   FUNC_0("error ummapping packed-refs file %s",
      VAR_0->refs->path);
  VAR_0->mmapped = 0;
 } else {
  FUNC_1(VAR_0->buf);
 }
 VAR_0->buf = VAR_0->start = VAR_0->eof = ((void*)0);
}
