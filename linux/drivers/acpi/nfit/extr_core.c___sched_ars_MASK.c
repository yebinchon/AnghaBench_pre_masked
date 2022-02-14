
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_nfit_desc {unsigned int scrub_tmo; int dwork; int scrub_flags; int init_mutex; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,unsigned int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct acpi_nfit_desc *VAR_3, unsigned int VAR_4)
{
 FUNC_0(&VAR_3->init_mutex);

 FUNC_2(VAR_0, &VAR_3->scrub_flags);

 if (VAR_4)
  VAR_3->scrub_tmo = VAR_4;
 FUNC_1(VAR_2, &VAR_3->dwork, VAR_4 * VAR_1);
}
