
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int timing ;
struct timeval {double tv_usec; scalar_t__ tv_sec; } ;
typedef int cryptostats ;
struct alg {int blocksize; char* name; scalar_t__ ishash; } ;
typedef int stats ;
typedef int otiming ;
typedef int mask ;
typedef int cpuset_t ;
struct TYPE_2__ {scalar_t__ count; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 void* FUNC_6 (int *,int,int,int,int,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,double,...) ;
 int FUNC_9 (char*,TYPE_1__*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct alg*,struct alg*,int,int,int ,struct timeval*) ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (char*,int*,size_t*,int*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (int ,int*,int ) ;

void
FUNC_14(struct alg *VAR_10, struct alg *VAR_11, int VAR_12, int VAR_13, u_long VAR_14, int VAR_15, int VAR_16)
{
 int VAR_17, VAR_18;
 double VAR_19;
 void *VAR_20;
 struct timeval *VAR_21;
 struct timeval VAR_22;
 int VAR_23;

 if (VAR_13 % VAR_11->blocksize || (VAR_10 && VAR_13 % VAR_10->blocksize)) {
  if (VAR_9)
   FUNC_8("skipping blocksize %u 'cuz not a multiple of "
    "%s blocksize %u (or %s blocksize %u)\n",
    VAR_13, VAR_11->name, VAR_11->blocksize,
    VAR_10 ? VAR_10->name : "n/a",
    VAR_10 ? VAR_10->blocksize : 0);
  return;
 }

 VAR_20 = FUNC_6(((void*)0), VAR_15 * sizeof (struct timeval),
   VAR_5|VAR_6, VAR_2|VAR_4, -1, 0);
 if (VAR_20 == VAR_3) {
  FUNC_7("mmap");
  return;
 }
 VAR_21 = (struct timeval *) VAR_20;
 if (VAR_15 > 1) {
  for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++)
   if (FUNC_5() == 0) {
    cpuset_t VAR_24;
    FUNC_1(&VAR_24);
    FUNC_0(VAR_17, &VAR_24);
    FUNC_2(VAR_0, VAR_1,
        -1, sizeof(VAR_24), &VAR_24);
    FUNC_11(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, &VAR_21[VAR_17]);
    FUNC_3(0);
   }
  while (FUNC_13(VAR_7, &VAR_18, 0) != -1)
   ;
 } else
  FUNC_11(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_21);

 VAR_19 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++)
  VAR_19 += (((double)VAR_21[VAR_17].tv_sec * 1000000 + VAR_21[VAR_17].tv_usec) / 1000000);
 if (VAR_19) {
  int VAR_25 = VAR_11->ishash ? VAR_12 : 2*VAR_12;

  VAR_25 *= VAR_15;
  FUNC_8("%8.3lf sec, %7d %6s%s%6s crypts, %7d bytes, %8.0lf byte/sec, %7.1lf Mb/sec\n",
      VAR_19, VAR_25, VAR_11->name, VAR_10? "+" : "", VAR_10? VAR_10->name : "",
      VAR_13, (double)VAR_25*VAR_13 / VAR_19,
      (double)VAR_25*VAR_13 / VAR_19 * 8 / 1024 / 1024);
 }
 FUNC_4(VAR_8);
}
