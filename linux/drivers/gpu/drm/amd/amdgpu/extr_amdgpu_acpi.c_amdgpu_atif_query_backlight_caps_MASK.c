
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
typedef size_t u16 ;
struct atif_qbtc_output {int max_input_signal; int min_input_signal; } ;
struct atif_qbtc_arguments {int size; int requested_display; } ;
struct TYPE_4__ {int caps_valid; int max_input_signal; int min_input_signal; } ;
struct amdgpu_atif {TYPE_2__ backlight_caps; } ;
struct acpi_buffer {int length; void* pointer; } ;
typedef int characteristics ;
typedef int arguments ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 union acpi_object* FUNC_0 (struct amdgpu_atif*,int ,struct acpi_buffer*) ;
 int FUNC_1 (union acpi_object*) ;
 int FUNC_2 (struct atif_qbtc_output*,scalar_t__,size_t) ;
 int FUNC_3 (struct atif_qbtc_output*,int ,int) ;
 size_t FUNC_4 (int,size_t) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_atif *VAR_4)
{
 union acpi_object *VAR_5;
 struct atif_qbtc_output VAR_6;
 struct atif_qbtc_arguments VAR_7;
 struct acpi_buffer VAR_8;
 size_t VAR_9;
 int VAR_10 = 0;

 VAR_7.size = sizeof(VAR_7);
 VAR_7.requested_display = VAR_1;

 VAR_8.length = sizeof(VAR_7);
 VAR_8.pointer = (void *)&VAR_7;

 VAR_5 = FUNC_0(VAR_4,
  VAR_0,
  &VAR_8);
 if (!VAR_5) {
  VAR_10 = -VAR_3;
  goto out;
 }

 VAR_9 = *(u16 *) VAR_5->buffer.pointer;
 if (VAR_9 < 10) {
  VAR_10 = -VAR_2;
  goto out;
 }

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_9 = FUNC_4(sizeof(VAR_6), VAR_9);
 FUNC_2(&VAR_6, VAR_5->buffer.pointer, VAR_9);

 VAR_4->backlight_caps.caps_valid = 1;
 VAR_4->backlight_caps.min_input_signal =
   VAR_6.min_input_signal;
 VAR_4->backlight_caps.max_input_signal =
   VAR_6.max_input_signal;
out:
 FUNC_1(VAR_5);
 return VAR_10;
}
