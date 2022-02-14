
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* len; void* dst; int src; } ;
typedef TYPE_1__ vfnt_map_t ;
typedef int FILE ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (unsigned int,int) ;
 int FUNC_3 (TYPE_1__*,int,int,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static vfnt_map_t *
FUNC_6(unsigned int VAR_0, FILE *VAR_1)
{
 vfnt_map_t *VAR_2;
 unsigned int VAR_3;

 if (VAR_0 == 0)
  return (((void*)0));

 if ((VAR_2 = FUNC_2(VAR_0, sizeof(*VAR_2))) == ((void*)0)) {
  FUNC_5("calloc");
  return (((void*)0));
 }

 if (FUNC_3(VAR_2, sizeof *VAR_2 * VAR_0, 1, VAR_1) != 1) {
  FUNC_5("read mappings");
  FUNC_4(VAR_2);
  return (((void*)0));
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2[VAR_3].src = FUNC_1(VAR_2[VAR_3].src);
  VAR_2[VAR_3].dst = FUNC_0(VAR_2[VAR_3].dst);
  VAR_2[VAR_3].len = FUNC_0(VAR_2[VAR_3].len);
 }

 return (VAR_2);
}
