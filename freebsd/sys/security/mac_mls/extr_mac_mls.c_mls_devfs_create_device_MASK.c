
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct mount {int dummy; } ;
struct mac_mls {int dummy; } ;
struct label {int dummy; } ;
struct devfs_dirent {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mac_mls* FUNC_0 (struct label*) ;
 char* FUNC_1 (struct cdev*) ;
 int FUNC_2 (struct mac_mls*,int,int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct ucred *VAR_4, struct mount *VAR_5,
    struct cdev *VAR_6, struct devfs_dirent *VAR_7, struct label *VAR_8)
{
 struct mac_mls *VAR_9;
 const char *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_0(VAR_8);
 VAR_10 = FUNC_1(VAR_6);
 if (FUNC_3(VAR_10, "null") == 0 ||
     FUNC_3(VAR_10, "zero") == 0 ||
     FUNC_3(VAR_10, "random") == 0 ||
     FUNC_5(VAR_10, "fd/", FUNC_4("fd/")) == 0)
  VAR_11 = VAR_0;
 else if (FUNC_3(VAR_10, "kmem") == 0 ||
     FUNC_3(VAR_10, "mem") == 0)
  VAR_11 = VAR_1;
 else if (VAR_3 &&
     (FUNC_5(VAR_10, "ttyp", FUNC_4("ttyp")) == 0 ||
     FUNC_5(VAR_10, "pts/", FUNC_4("pts/")) == 0 ||
     FUNC_5(VAR_10, "ptyp", FUNC_4("ptyp")) == 0))
  VAR_11 = VAR_0;
 else
  VAR_11 = VAR_2;
 FUNC_2(VAR_9, VAR_11, 0, ((void*)0));
}
