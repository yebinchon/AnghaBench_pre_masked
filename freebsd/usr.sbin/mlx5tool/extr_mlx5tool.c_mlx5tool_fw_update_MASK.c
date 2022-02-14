
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct mlx5_tool_addr {int dummy; } ;
struct mlx5_fw_update {scalar_t__ img_fw_data; int img_fw_data_len; int devaddr; } ;
typedef int fwup ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int,int ,struct mlx5_fw_update*) ;
 int FUNC_3 (int *,struct mlx5_tool_addr const*,int) ;
 int FUNC_4 (struct mlx5_fw_update*,int ,int) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ,int,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (char const*,int ) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(int VAR_5, const struct mlx5_tool_addr *VAR_6,
    const char *VAR_7)
{
 struct stat VAR_8;
 struct mlx5_fw_update VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_12 = 0;
 VAR_11 = FUNC_7(VAR_7, VAR_3);
 if (VAR_11 == -1) {
  FUNC_8("Unable to open %s", VAR_7);
  VAR_12 = 1;
  goto close_fd;
 }
 VAR_10 = FUNC_1(VAR_11, &VAR_8);
 if (VAR_10 != 0) {
  FUNC_8("Unable to stat %s", VAR_7);
  VAR_12 = 1;
  goto close_fd;
 }
 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 FUNC_3(&VAR_9.devaddr, VAR_6, sizeof(VAR_9.devaddr));
 VAR_9.img_fw_data = FUNC_5(((void*)0), VAR_8.st_size, VAR_4, VAR_1,
     VAR_11, 0);
 if (VAR_9.img_fw_data == VAR_0) {
  FUNC_8("Unable to mmap %s", VAR_7);
  VAR_12 = 1;
  goto close_fd;
 }
 VAR_9.img_fw_data_len = VAR_8.st_size;

 VAR_10 = FUNC_2(VAR_5, VAR_2, &VAR_9);
 if (VAR_10 == -1) {
  FUNC_8("MLX5_FW_UPDATE");
 }

 FUNC_6(VAR_9.img_fw_data, VAR_8.st_size);
close_fd:
 FUNC_0(VAR_11);
 return (VAR_12);
}
