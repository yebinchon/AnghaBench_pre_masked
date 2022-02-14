
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp_channel {TYPE_1__* ob; } ;
typedef int ssize_t ;
struct TYPE_2__ {unsigned int code; unsigned long flags; int data; } ;


 int FUNC_0 (int ,void const*,size_t) ;
 int FUNC_1 (struct tegra_bpmp_channel*) ;

__attribute__((used)) static ssize_t FUNC_2(struct tegra_bpmp_channel *VAR_0,
       unsigned int VAR_1, unsigned long VAR_2,
       const void *VAR_3, size_t VAR_4)
{
 VAR_0->ob->code = VAR_1;
 VAR_0->ob->flags = VAR_2;

 if (VAR_3 && VAR_4 > 0)
  FUNC_0(VAR_0->ob->data, VAR_3, VAR_4);

 return FUNC_1(VAR_0);
}
