
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sseu_dev_info {int max_subslices; int max_eus_per_subslice; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct sseu_dev_info *VAR_0, int VAR_1,
         int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0->max_eus_per_subslice);
 int VAR_4 = VAR_0->max_subslices * VAR_3;

 return VAR_1 * VAR_4 + VAR_2 * VAR_3;
}
