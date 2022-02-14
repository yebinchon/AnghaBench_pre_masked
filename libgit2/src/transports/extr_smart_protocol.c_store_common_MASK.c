
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int common; int buffer; } ;
typedef TYPE_1__ transport_smart ;
typedef int gitno_buffer ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_2__ git_pkt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**,int *,int *) ;

__attribute__((used)) static int FUNC_3(transport_smart *VAR_1)
{
 git_pkt *VAR_2 = ((void*)0);
 gitno_buffer *VAR_3 = &VAR_1->buffer;
 int VAR_4;

 do {
  if ((VAR_4 = FUNC_2(&VAR_2, ((void*)0), VAR_3)) < 0)
   return VAR_4;

  if (VAR_2->type != VAR_0) {
   FUNC_0(VAR_2);
   return 0;
  }

  if (FUNC_1(&VAR_1->common, VAR_2) < 0) {
   FUNC_0(VAR_2);
   return -1;
  }
 } while (1);

 return 0;
}
