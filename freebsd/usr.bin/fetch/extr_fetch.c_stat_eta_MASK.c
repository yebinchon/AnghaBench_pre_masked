
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {long tv_sec; } ;
struct TYPE_3__ {long tv_sec; } ;
struct xferstat {double rcvd; double offset; double size; TYPE_2__ start; TYPE_1__ last; } ;
typedef double off_t ;


 int FUNC_0 (char*,size_t,long) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, size_t VAR_1, const struct xferstat *VAR_2)
{
 long VAR_3, VAR_4;
 off_t VAR_5, VAR_6;

 VAR_3 = VAR_2->last.tv_sec - VAR_2->start.tv_sec;
 VAR_5 = VAR_2->rcvd - VAR_2->offset;
 VAR_6 = VAR_2->size - VAR_2->rcvd;
 VAR_4 = (long)((double)VAR_3 * VAR_6 / VAR_5);
 if (VAR_4 > 0)
  FUNC_0(VAR_0, VAR_1, VAR_4);
 else
  FUNC_0(VAR_0, VAR_1, VAR_3);
}
