
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apic_chip_data {int clist; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct apic_chip_data* FUNC_1 (int,int ,int) ;

__attribute__((used)) static struct apic_chip_data *FUNC_2(int VAR_1)
{
 struct apic_chip_data *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0, VAR_1);
 if (VAR_2)
  FUNC_0(&VAR_2->clist);
 return VAR_2;
}
