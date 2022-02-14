
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct auh_header {int dummy; } ;
struct TYPE_4__ {scalar_t__ file_size; int file_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct auh_header*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__ VAR_5 ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int,scalar_t__) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int * VAR_7 ;
 int FUNC_7 (int ,char*,int) ;

int FUNC_8(void)
{
 char *VAR_8;
 char *VAR_9;
 int VAR_10 = VAR_1;
 int VAR_11;

 struct auh_header *VAR_12;

 if (!VAR_5.file_name)
  goto out;

 VAR_10 = FUNC_3(&VAR_5);
 if (VAR_10)
  goto out;

 VAR_8 = FUNC_4(VAR_4);
 if (!VAR_8) {
  FUNC_0("no memory for buffer\n");
  goto out;
 }

 if (VAR_5.file_size + VAR_0 >
     VAR_4) {
  FUNC_0("data is bigger than firmware_size!\n");
  goto out;
 }
 if (!VAR_3) {
  FUNC_0("No family_member!\n");
  goto out;
 }
 if (!(VAR_7[0])) {
  FUNC_0("No rom_id!\n");
  goto out;
 }
 FUNC_5(VAR_8, 0xff, VAR_4);

 VAR_9 = (char *)(VAR_8 + VAR_0);

 VAR_10 = FUNC_6(&VAR_5, VAR_9);
 if (VAR_10)
  goto out_free_buf;

 VAR_11 = VAR_9 + VAR_5.file_size - VAR_8;

 VAR_12 = (struct auh_header *)VAR_8;
 FUNC_1(VAR_12, VAR_11 - VAR_0);

 VAR_10 = FUNC_7(VAR_6, VAR_8, VAR_11);
 if (VAR_10)
  goto out_free_buf;

 VAR_10 = VAR_2;

 out_free_buf:
 FUNC_2(VAR_8);
 out:
 return VAR_10;
}
