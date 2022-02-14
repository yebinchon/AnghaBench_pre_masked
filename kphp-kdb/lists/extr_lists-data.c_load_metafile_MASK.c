
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 long long VAR_4 ;
 long long VAR_5 ;
 scalar_t__ VAR_6 ;
 long long VAR_7 ;
 long long FUNC_1 (TYPE_1__*,char*,long long) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,char*,long long,long long,long long) ;
 void* FUNC_4 (long long) ;
 void* FUNC_5 (long long) ;

void *FUNC_6 (void *VAR_8, long long VAR_9, long long VAR_10, long VAR_11) {
  FUNC_0 (VAR_10 >= 0 && VAR_10 <= (long long) (VAR_3 - VAR_2));

  FUNC_0 (VAR_9 >= 0 && VAR_9 <= VAR_5 && VAR_9 + VAR_10 <= VAR_5);
  if (VAR_8 == (void *)-1) {
    VAR_8 = FUNC_5 (VAR_10);
  }
  if (!VAR_8) {
    VAR_8 = FUNC_4 (VAR_10);
    VAR_4 += VAR_10;
  }
  FUNC_0 (FUNC_2 (VAR_1->fd, VAR_9 + VAR_6, VAR_0) == VAR_9 + VAR_6);
  char *VAR_12 = VAR_8;
  while (VAR_10 > 0) {
    long long VAR_13 = FUNC_1 (VAR_1, VAR_12, VAR_10);
    if (VAR_13 <= 0) {
      FUNC_3 (0, "error reading data from index file: read %lld bytes instead of %lld at position %lld: %m\n", VAR_13, VAR_10, VAR_9 + (VAR_12 - (char *)VAR_8));
      FUNC_0 (VAR_13 == VAR_10);
      return 0;
    }
    VAR_12 += VAR_13;
    VAR_10 -= VAR_13;
    VAR_7 += VAR_13;
  }
  return VAR_8;
}
