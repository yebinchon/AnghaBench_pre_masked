
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_path ;
typedef int dummy ;
typedef int dir_path ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,char*,int ,int ) ;
 int FUNC_2 (char*,char*,int ,int ) ;
 int FUNC_3 (char*,char*,int ,int ) ;
 int FUNC_4 (char*,char*,int ,int ) ;
 int FUNC_5 (char*,char*,int ,int ,int ) ;
 int FUNC_6 (char*,char*,int ,int ) ;
 int FUNC_7 (char*,char*,int ,int ) ;
 int FUNC_8 (char*,char*,int ,int ) ;
 int FUNC_9 (char*,char*,int ,int ) ;
 int FUNC_10 (char*,char*,int ,int ) ;
 int FUNC_11 (char*,char*,int ,int ) ;
 int FUNC_12 (char*,char*,int ,int ) ;
 int FUNC_13 (char*,char*,int ,int ) ;
 int FUNC_14 (char*,char*,int,int ,int ) ;
 int FUNC_15 (char*,char*,int ,int ) ;
 int FUNC_16 (char*,char*,int,int ,int ) ;
 int FUNC_17 (char*,char*,int,int ,int ) ;
 int FUNC_18 (char*,char*,int ,int ) ;
 int FUNC_19 (char*,char*,int,int ,int ) ;
 int FUNC_20 (char*,int ,char*,int ,int ) ;
 int FUNC_21 (char*,char*,int,int ,int ) ;
 int FUNC_22 (char*,int ,char*,int ,int ) ;
 scalar_t__ FUNC_23 (char*,int ) ;
 int FUNC_24 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_25 (int,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_26 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_27 (char*) ;
 int FUNC_28 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_29 (char*) ;
 int FUNC_30 (char*,char*,int) ;
 scalar_t__ FUNC_31 (char*,int*,size_t*,int *,int ) ;
 int FUNC_32 (char*) ;
 int FUNC_33 (char*,...) ;
 int VAR_18 ;
 int VAR_19 ;

int
FUNC_34(void)
{
 char VAR_20[VAR_1], VAR_21[VAR_1];
 int VAR_22, VAR_23;
 size_t VAR_24;

 VAR_4 = 0;
 VAR_24 = sizeof(VAR_22);
 if (FUNC_31("vfs.aio", &VAR_22, &VAR_24, ((void*)0), 0) < 0) {
  if (VAR_9 == VAR_0)
   VAR_4 = 1;
 }

 FUNC_30(VAR_20, "/tmp/open-dir.XXXXXXXXXXX", sizeof(VAR_20));
 if (FUNC_27(VAR_20) == ((void*)0))
  FUNC_25(1, "mkdtemp");
 if (FUNC_23(VAR_20, VAR_2) < 0) {
  FUNC_33("chmod %s", VAR_20);
  (void)FUNC_29(VAR_20);
  FUNC_26(1);
 }
 FUNC_30(VAR_21, "/tmp/open-file.XXXXXXXXXXX", sizeof(VAR_21));
 VAR_23 = FUNC_28(VAR_21);
 if (VAR_23 < 0) {
  FUNC_33("mkstemp");
  (void)FUNC_29(VAR_20);
  FUNC_26(1);
 }
 FUNC_24(VAR_23);
 if (FUNC_23(VAR_21, VAR_3) < 0) {
  FUNC_33("chmod %s", VAR_21);
  (void)FUNC_32(VAR_21);
  (void)FUNC_29(VAR_20);
  FUNC_26(1);
 }
 FUNC_0(VAR_20, VAR_10, VAR_11);

 FUNC_1("check_dup_dir", VAR_20, VAR_7, VAR_8);
 FUNC_1("check_dup_file", VAR_21, VAR_10, VAR_11);

 FUNC_2("check_dup2_dir", VAR_20, VAR_7, VAR_8);
 FUNC_2("check_dup2_file", VAR_21, VAR_10,
     VAR_11);

 FUNC_3("check_fchdir", VAR_20, VAR_7, VAR_8);

 FUNC_4("check_fchflags_dir", VAR_20, VAR_7,
     VAR_8);
 FUNC_4("check_fchflags_file", VAR_21, VAR_10,
     VAR_11);

 FUNC_5("check_fchmod_dir", VAR_20, VAR_2, VAR_7,
     VAR_8);
 FUNC_5("check_fchmod_file", VAR_21, VAR_3, VAR_10,
     VAR_11);

 FUNC_6("check_fchown_dir", VAR_20, VAR_7,
     VAR_8);
 FUNC_6("check_fchown_file", VAR_21, VAR_10,
     VAR_11);

 FUNC_7("check_flock_dir", VAR_20, VAR_7, VAR_8);
 FUNC_7("check_flock_file", VAR_21, VAR_10,
     VAR_11);

 FUNC_8("check_fpathconf_dir", VAR_20, VAR_7,
     VAR_8);
 FUNC_8("check_fpathconf_file", VAR_21, VAR_10,
     VAR_11);

 FUNC_9("check_fstat_dir", VAR_20, VAR_7, VAR_8);
 FUNC_9("check_fstat_file", VAR_21, VAR_10,
     VAR_11);

 FUNC_10("check_fstatfs_dir", VAR_20, VAR_7,
     VAR_8);
 FUNC_10("check_fstatfs_file", VAR_21, VAR_10,
     VAR_11);

 FUNC_11("check_fsync_dir", VAR_20, VAR_7, VAR_8);
 FUNC_11("check_fsync_file", VAR_21, VAR_10,
     VAR_11);

 FUNC_12("check_ftruncate_dir", VAR_20, VAR_7,
     VAR_8);
 FUNC_12("check_ftruncate_file", VAR_21, VAR_10,
     VAR_11);

 FUNC_13("check_futimes_dir", VAR_20, VAR_7,
     VAR_8);
 FUNC_13("check_futimes_file", VAR_21, VAR_10,
     VAR_11);

 FUNC_15("check_lseek_dir", VAR_20, VAR_7, VAR_8);
 FUNC_15("check_lseek_file", VAR_21, VAR_10,
     VAR_11);

 FUNC_14("check_getdents_dir", VAR_20, 1, VAR_7,
     VAR_8);
 FUNC_14("check_getdents_file", VAR_21, 0, VAR_10,
     VAR_11);

 FUNC_21("check_sendfile_dir", VAR_20, 1, VAR_7,
     VAR_8);
 FUNC_21("check_sendfile_file", VAR_21, 0, VAR_10,
     VAR_11);

 FUNC_22("check_write_dir", VAR_18, VAR_20, VAR_7,
     VAR_8);
 FUNC_22("check_write_file", VAR_18, VAR_21, VAR_10,
     VAR_11);

 FUNC_22("check_writev_dir", VAR_19, VAR_20, VAR_7,
     VAR_8);
 FUNC_22("check_writev_file", VAR_19, VAR_21,
     VAR_10, VAR_11);

 FUNC_22("check_pwrite_dir", VAR_14, VAR_20, VAR_7,
     VAR_8);
 FUNC_22("check_pwrite_file", VAR_14, VAR_21,
     VAR_10, VAR_11);

 FUNC_22("check_pwritev_dir", VAR_15, VAR_20,
     VAR_7, VAR_8);
 FUNC_22("check_pwritev_file", VAR_15, VAR_21,
     VAR_10, VAR_11);

 if (VAR_4) {
  FUNC_22("check_aio_write_dir", VAR_6,
      VAR_20, VAR_7, VAR_8);
  FUNC_22("check_aio_write_file", VAR_6,
      VAR_21, VAR_10, VAR_11);
 }

 FUNC_20("check_read_dir", VAR_16, VAR_20, VAR_7,
     VAR_8);
 FUNC_20("check_read_file", VAR_16, VAR_21, VAR_10,
     VAR_11);

 FUNC_20("check_readv_dir", VAR_17, VAR_20, VAR_7,
     VAR_8);
 FUNC_20("check_readv_file", VAR_17, VAR_21,
     VAR_10, VAR_11);

 FUNC_20("check_pread_dir", VAR_12, VAR_20, VAR_7,
     VAR_8);
 FUNC_20("check_pread_file", VAR_12, VAR_21,
     VAR_10, VAR_11);

 FUNC_20("check_preadv_dir", VAR_13, VAR_20,
     VAR_7, VAR_8);
 FUNC_20("check_preadv_file", VAR_13, VAR_21,
     VAR_10, VAR_11);

 if (VAR_4) {
  FUNC_20("check_aio_read_dir", VAR_5, VAR_20,
      VAR_7, VAR_8);
  FUNC_20("check_aio_read_file", VAR_5,
      VAR_21, VAR_10, VAR_11);
 }

 FUNC_17("check_mmap_read_dir", VAR_20, 1, VAR_7,
     VAR_8);
 FUNC_17("check_mmap_read_file", VAR_21, 0, VAR_10,
     VAR_11);

 FUNC_18("check_mmap_write_dir", VAR_20, VAR_7,
     VAR_8);
 FUNC_18("check_mmap_write_file", VAR_21, VAR_10,
     VAR_11);

 FUNC_16("check_mmap_exec_dir", VAR_20, 1, VAR_7,
     VAR_8);
 FUNC_16("check_mmap_exec_file", VAR_21, 0, VAR_10,
     VAR_11);

 FUNC_19("check_mmap_write_private_dir", VAR_20, 1,
     VAR_7, VAR_8);
 FUNC_19("check_mmap_write_private_file", VAR_21,
     0, VAR_10, VAR_11);

 (void)FUNC_32(VAR_21);
 (void)FUNC_29(VAR_20);
 FUNC_26(0);
}
