
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct mount {int dummy; } ;
struct mac_lomac {int dummy; } ;
struct label {int dummy; } ;
struct devfs_dirent {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mac_lomac* FUNC_0 (struct label*) ;
 char* FUNC_1 (struct cdev*) ;
 int FUNC_2 (struct mac_lomac*,int,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct ucred *VAR_3, struct mount *VAR_4,
    struct cdev *VAR_5, struct devfs_dirent *VAR_6, struct label *VAR_7)
{
 struct mac_lomac *VAR_8;
 const char *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0(VAR_7);
 VAR_9 = FUNC_1(VAR_5);
 if (FUNC_3(VAR_9, "null") == 0 ||
     FUNC_3(VAR_9, "zero") == 0 ||
     FUNC_3(VAR_9, "random") == 0 ||
     FUNC_5(VAR_9, "fd/", FUNC_4("fd/")) == 0 ||
     FUNC_5(VAR_9, "ttyv", FUNC_4("ttyv")) == 0)
  VAR_10 = VAR_0;
 else if (VAR_2 &&
     (FUNC_5(VAR_9, "ttyp", FUNC_4("ttyp")) == 0 ||
     FUNC_5(VAR_9, "pts/", FUNC_4("pts/")) == 0 ||
     FUNC_5(VAR_9, "ptyp", FUNC_4("ptyp")) == 0))
  VAR_10 = VAR_0;
 else
  VAR_10 = VAR_1;
 FUNC_2(VAR_8, VAR_10, 0);
}
