
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dns_srvinfo {unsigned int priority; unsigned int finalweight; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct dns_srvinfo *VAR_2, *VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_2 = *(struct dns_srvinfo * const *)VAR_0;
 VAR_3 = *(struct dns_srvinfo * const *)VAR_1;

 VAR_5 = VAR_2->priority;
 VAR_4 = VAR_3->priority;

 VAR_8 = ((VAR_5 > VAR_4) - (VAR_5 < VAR_4));

 if (VAR_8 == 0) {
  VAR_7 = VAR_2->finalweight;
  VAR_6 = VAR_3->finalweight;
  VAR_8 = ((VAR_6 > VAR_7) - (VAR_6 < VAR_7));
 }

 return (VAR_8);
}
