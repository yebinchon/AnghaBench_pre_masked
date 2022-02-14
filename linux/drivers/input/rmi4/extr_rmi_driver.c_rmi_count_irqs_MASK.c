
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_device {int dummy; } ;
struct pdt_entry {scalar_t__ interrupt_source_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct rmi_device*,struct pdt_entry const*) ;

__attribute__((used)) static int FUNC_1(struct rmi_device *VAR_1,
    void *VAR_2, const struct pdt_entry *VAR_3)
{
 int *VAR_4 = VAR_2;
 int VAR_5;

 *VAR_4 += VAR_3->interrupt_source_count;

 VAR_5 = FUNC_0(VAR_1, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_0;
}
