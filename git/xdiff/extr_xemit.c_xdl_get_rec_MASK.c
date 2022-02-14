
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__** recs; } ;
typedef TYPE_2__ xdfile_t ;
struct TYPE_4__ {char* ptr; long size; } ;



__attribute__((used)) static long FUNC_0(xdfile_t *VAR_0, long VAR_1, char const **VAR_2) {

 *VAR_2 = VAR_0->recs[VAR_1]->ptr;

 return VAR_0->recs[VAR_1]->size;
}
