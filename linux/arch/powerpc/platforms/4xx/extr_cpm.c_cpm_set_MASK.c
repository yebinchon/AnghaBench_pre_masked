
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dcr_offset; int dcr_host; } ;


 TYPE_1__ VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 VAR_3 = FUNC_0(VAR_0.dcr_host, VAR_0.dcr_offset[VAR_1]);
 FUNC_1(VAR_0.dcr_host, VAR_0.dcr_offset[VAR_1], VAR_3 | VAR_2);


 return VAR_3;
}
