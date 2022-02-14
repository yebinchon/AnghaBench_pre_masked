
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data; } ;
struct git_pack_file {TYPE_1__ index_map; int * oids; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct git_pack_file *VAR_0)
{
 if (VAR_0->oids) {
  FUNC_0(VAR_0->oids);
  VAR_0->oids = ((void*)0);
 }
 if (VAR_0->index_map.data) {
  FUNC_1(&VAR_0->index_map);
  VAR_0->index_map.data = ((void*)0);
 }
}
