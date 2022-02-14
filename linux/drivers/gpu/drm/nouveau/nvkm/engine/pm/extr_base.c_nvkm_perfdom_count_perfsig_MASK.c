
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct nvkm_perfdom {int signal_nr; TYPE_1__* signal; } ;
struct TYPE_2__ {scalar_t__ name; } ;



__attribute__((used)) static u16
FUNC_0(struct nvkm_perfdom *VAR_0)
{
 u16 VAR_1 = 0;
 int VAR_2;

 if (VAR_0) {
  for (VAR_2 = 0; VAR_2 < VAR_0->signal_nr; VAR_2++) {
   if (VAR_0->signal[VAR_2].name)
    VAR_1++;
  }
 }
 return VAR_1;
}
