
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scpi_drvinfo {int num_chans; TYPE_1__* channels; } ;
struct TYPE_2__ {int chan; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct scpi_drvinfo *VAR_1 = VAR_0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_chans; VAR_2++)
  FUNC_0(VAR_1->channels[VAR_2].chan);
}
