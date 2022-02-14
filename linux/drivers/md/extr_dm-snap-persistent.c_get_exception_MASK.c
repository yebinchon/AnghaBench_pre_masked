
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pstore {scalar_t__ exceptions_per_area; } ;
struct disk_exception {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct disk_exception *FUNC_1(struct pstore *VAR_0, void *VAR_1,
         uint32_t VAR_2)
{
 FUNC_0(VAR_2 >= VAR_0->exceptions_per_area);

 return ((struct disk_exception *) VAR_1) + VAR_2;
}
