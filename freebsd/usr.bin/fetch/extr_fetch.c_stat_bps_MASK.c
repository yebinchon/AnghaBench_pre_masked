
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {double tv_usec; scalar_t__ tv_sec; } ;
struct xferstat {double rcvd; double lastrcvd; TYPE_1__ last2; TYPE_2__ last; } ;
typedef int off_t ;


 int FUNC_0 (char*,size_t,char*,...) ;
 int FUNC_1 (char*,int,int ) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, size_t VAR_1, struct xferstat *VAR_2)
{
 char VAR_3[16];
 double VAR_4, VAR_5;

 VAR_4 = ((double)VAR_2->last.tv_sec + (VAR_2->last.tv_usec / 1.e6))
     - ((double)VAR_2->last2.tv_sec + (VAR_2->last2.tv_usec / 1.e6));

 if (VAR_4 == 0.0) {
  FUNC_0(VAR_0, VAR_1, "?? Bps");
 } else {
  VAR_5 = (VAR_2->rcvd - VAR_2->lastrcvd) / VAR_4;
  FUNC_1(VAR_3, sizeof VAR_3, (off_t)VAR_5);
  FUNC_0(VAR_0, VAR_1, "%sps", VAR_3);
 }
}
