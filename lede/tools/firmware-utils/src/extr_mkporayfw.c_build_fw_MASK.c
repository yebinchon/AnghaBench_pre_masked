
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct fw_header {int dummy; } ;
struct TYPE_2__ {int fw_max_len; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int*,int,int) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (int*,int) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_5;
 uint8_t *VAR_6, *VAR_7;
 int VAR_8 = VAR_0;
 int VAR_9 = 0;
 uint16_t VAR_10;

 VAR_5 = VAR_4->fw_max_len;

 VAR_6 = (uint8_t *) FUNC_4(VAR_5);
 if (!VAR_6) {
  FUNC_0("no memory for buffer\n");
  goto out;
 }

 FUNC_5(VAR_6, 0xff, VAR_5);
 VAR_7 = VAR_6 + sizeof (struct fw_header);
 VAR_8 = FUNC_6(&VAR_2, VAR_7);
 if (VAR_8) {
  goto out_free_buf;
 }
 VAR_9 = sizeof (struct fw_header) + VAR_3 + 2;


 FUNC_2(VAR_6);


 VAR_10 = FUNC_1(VAR_6 + sizeof (struct fw_header), VAR_3);


 VAR_6[VAR_9 - 1] = VAR_10 >> 8;
 VAR_6[VAR_9 - 2] = VAR_10 & 0xff;


 FUNC_8(VAR_6 + sizeof (struct fw_header), VAR_3 + 2);


 VAR_8 = FUNC_7(VAR_6, VAR_9);
 if (VAR_8) {
  goto out_free_buf;
 }
 VAR_8 = VAR_1;

 out_free_buf:
 FUNC_3(VAR_6);
 out:
 return VAR_8;
}
