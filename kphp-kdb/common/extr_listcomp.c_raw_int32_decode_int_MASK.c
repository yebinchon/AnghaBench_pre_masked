
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ptr; } ;
struct list_decoder {int k; TYPE_1__ br; } ;


 int FUNC_0 (int*,int,int) ;

__attribute__((used)) static int FUNC_1 (struct list_decoder *VAR_0) {
  int VAR_1;
  FUNC_0 (&VAR_1, VAR_0->br.ptr, sizeof (int));
  VAR_0->br.ptr += 4;
  VAR_0->k++;
  return VAR_1;
}
