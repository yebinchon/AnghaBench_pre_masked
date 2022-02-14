
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int io_vector; int * io_apic; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_3, void **VAR_4, u_int *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = -1;
 for (VAR_6 = 0; VAR_6 <= VAR_1; VAR_6++) {
  if (VAR_2[VAR_6].io_apic == ((void*)0) ||
      VAR_2[VAR_6].io_vector > VAR_3)
   continue;
  if (VAR_7 == -1 ||
      VAR_2[VAR_7].io_vector < VAR_2[VAR_6].io_vector)
   VAR_7 = VAR_6;
 }
 if (VAR_7 == -1)
  return (VAR_0);
 *VAR_4 = VAR_2[VAR_7].io_apic;
 *VAR_5 = VAR_3 - VAR_2[VAR_7].io_vector;
 if (*VAR_5 > 32)
  FUNC_0("WARNING: Found intpin of %u for vector %d\n", *VAR_5,
      VAR_3);
 return (0);
}
