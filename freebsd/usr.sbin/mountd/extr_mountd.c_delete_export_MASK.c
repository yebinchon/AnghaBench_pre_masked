
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvfsconf {int vfc_flags; } ;
struct statfs {int f_flags; int f_mntonname; int f_mntfromname; int f_fstypename; } ;
struct iovec {void* iov_len; int iov_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,struct xvfsconf*) ;
 scalar_t__ FUNC_1 (struct iovec*,int,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,...) ;

__attribute__((used)) static void
FUNC_4(struct iovec *VAR_7, int VAR_8, struct statfs *VAR_9, char *VAR_10)
{
 struct xvfsconf VAR_11;

 if (FUNC_0(VAR_9->f_fstypename, &VAR_11) != 0) {
  FUNC_3(VAR_3, "getvfsbyname() failed for %s",
      VAR_9->f_fstypename);
  return;
 }





 if (!(VAR_9->f_flags & VAR_4))
  return;





 if (VAR_11.vfc_flags & VAR_5)
  return;

 VAR_7[1].iov_base = VAR_9->f_fstypename;
 VAR_7[1].iov_len = FUNC_2(VAR_9->f_fstypename) + 1;
 VAR_7[3].iov_base = VAR_9->f_mntonname;
 VAR_7[3].iov_len = FUNC_2(VAR_9->f_mntonname) + 1;
 VAR_7[5].iov_base = VAR_9->f_mntfromname;
 VAR_7[5].iov_len = FUNC_2(VAR_9->f_mntfromname) + 1;
 VAR_10[0] = '\0';





 if (FUNC_1(VAR_7, VAR_8, VAR_9->f_flags) < 0 && VAR_6 != VAR_0 &&
     VAR_6 != VAR_1 && VAR_6 != VAR_2) {
  FUNC_3(VAR_3,
      "can't delete exports for %s: %m %s",
      VAR_9->f_mntonname, VAR_10);
 }
}
