
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fw_max_len; } ;
struct TYPE_5__ {int file_size; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_4 ;
 size_t VAR_5 ;
 TYPE_3__* VAR_6 ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,int,int) ;
 int VAR_7 ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ,char*,int) ;

int FUNC_8(size_t VAR_11)
{
 int VAR_12;
 char *VAR_13;
 char *VAR_14;
 int VAR_15 = VAR_0;
 int VAR_16 = 0;

 VAR_16 = VAR_11 + VAR_5;

 if (VAR_3)
  VAR_12 = VAR_16;
 else
  VAR_12 = VAR_6->fw_max_len;

 VAR_13 = FUNC_3(VAR_12);
 if (!VAR_13) {
  FUNC_0("no memory for buffer\n");
  goto out;
 }

 FUNC_4(VAR_13, 0xff, VAR_12);
 VAR_14 = VAR_13 + VAR_11;
 VAR_15 = FUNC_6(&VAR_4, VAR_14);
 if (VAR_15)
  goto out_free_buf;

 if (!VAR_3) {
  VAR_14 = VAR_13 + VAR_9;

  VAR_15 = FUNC_6(&VAR_8, VAR_14);
  if (VAR_15)
   goto out_free_buf;

  VAR_16 = VAR_9 + VAR_8.file_size;

  if (VAR_2)
   VAR_16 = FUNC_5(VAR_13, VAR_16, VAR_6->fw_max_len);
 }

 if (!VAR_10)
  VAR_16 = VAR_12;

 FUNC_1(VAR_13, VAR_16);
 VAR_15 = FUNC_7(VAR_7, VAR_13, VAR_16);
 if (VAR_15)
  goto out_free_buf;

 VAR_15 = VAR_1;

out_free_buf:
 FUNC_2(VAR_13);
out:
 return VAR_15;
}
