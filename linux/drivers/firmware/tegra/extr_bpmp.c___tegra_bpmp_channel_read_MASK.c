
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp_channel {TYPE_1__* ib; } ;
typedef int ssize_t ;
struct TYPE_2__ {int code; int data; } ;


 int FUNC_0 (void*,int ,size_t) ;
 int FUNC_1 (struct tegra_bpmp_channel*) ;

__attribute__((used)) static ssize_t FUNC_2(struct tegra_bpmp_channel *VAR_0,
      void *VAR_1, size_t VAR_2, int *VAR_3)
{
 int VAR_4;

 if (VAR_1 && VAR_2 > 0)
  FUNC_0(VAR_1, VAR_0->ib->data, VAR_2);

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_3 = VAR_0->ib->code;

 return 0;
}
