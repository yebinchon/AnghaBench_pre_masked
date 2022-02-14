
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_dump {scalar_t__ boot_mem_top; scalar_t__ kernel_metadata; scalar_t__ reserve_dump_area_size; scalar_t__ reserve_dump_area_start; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct fw_dump *VAR_5)
{
 int VAR_6 = 0;
 s64 VAR_7;





 VAR_5->kernel_metadata = (VAR_5->reserve_dump_area_start +
     VAR_5->reserve_dump_area_size -
     FUNC_1());
 FUNC_5("Kernel metadata addr: %llx\n", VAR_5->kernel_metadata);


 VAR_4 = FUNC_0(VAR_5->kernel_metadata);
 FUNC_2(VAR_4);





 VAR_7 = FUNC_3(VAR_2,
          VAR_5->kernel_metadata);
 if (VAR_7 != VAR_3) {
  FUNC_4("Failed to set kernel metadata tag!\n");
  VAR_6 = -VAR_0;
 }





 VAR_7 = FUNC_3(VAR_1,
          VAR_5->boot_mem_top);
 if (VAR_7 != VAR_3) {
  FUNC_4("Failed to set boot memory tag!\n");
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
