
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_6__ {int fd; scalar_t__ type; scalar_t__ is_ready; int offset; int no_reconnect; } ;
typedef TYPE_1__ knetFile ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int,void*,scalar_t__) ;
 scalar_t__ FUNC_4 (int,void*,scalar_t__) ;

off_t FUNC_5(knetFile *VAR_5, void *VAR_6, off_t VAR_7)
{
 off_t VAR_8 = 0;
 if (VAR_5->fd == -1) return 0;
 if (VAR_5->type == VAR_1) {
  if (VAR_5->is_ready == 0) {
   if (!VAR_5->no_reconnect) FUNC_1(VAR_5);
   FUNC_0(VAR_5);
  }
 } else if (VAR_5->type == VAR_2) {
  if (VAR_5->is_ready == 0)
   FUNC_2(VAR_5);
 }
 if (VAR_5->type == VAR_3) {
  off_t VAR_9 = VAR_7, VAR_10;
  while (VAR_9) {
   do {
    VAR_10 = FUNC_4(VAR_5->fd, VAR_6 + VAR_8, VAR_9);
   } while (VAR_10 < 0 && VAR_0 == VAR_4);
   if (VAR_10 < 0) return -1;
   if (VAR_10 == 0) break;
   VAR_8 += VAR_10; VAR_9 -= VAR_10;
  }
 } else VAR_8 = FUNC_3(VAR_5->fd, VAR_6, VAR_7);
 VAR_5->offset += VAR_8;
 return VAR_8;
}
