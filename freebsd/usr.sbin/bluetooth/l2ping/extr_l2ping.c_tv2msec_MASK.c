
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;



__attribute__((used)) static double
FUNC_0(struct timeval const *VAR_0)
{
 return(((double)VAR_0->tv_usec)/1000.0 + ((double)VAR_0->tv_sec)*1000.0);
}
