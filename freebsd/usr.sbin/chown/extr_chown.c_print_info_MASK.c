
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;
struct TYPE_5__ {char* fts_path; TYPE_1__* fts_statp; } ;
struct TYPE_4__ {scalar_t__ st_gid; scalar_t__ st_uid; } ;
typedef TYPE_2__ FTSENT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(const FTSENT *VAR_3, int VAR_4)
{

 FUNC_0("%s", VAR_3->fts_path);
 if (VAR_4 > 1) {
  if (VAR_1) {
   FUNC_0(": %ju:%ju -> %ju:%ju",
       (uintmax_t)VAR_3->fts_statp->st_uid,
       (uintmax_t)VAR_3->fts_statp->st_gid,
       (VAR_2 == (uid_t)-1) ?
       (uintmax_t)VAR_3->fts_statp->st_uid : (uintmax_t)VAR_2,
       (VAR_0 == (gid_t)-1) ?
       (uintmax_t)VAR_3->fts_statp->st_gid : (uintmax_t)VAR_0);
  } else {
   FUNC_0(": %ju -> %ju", (uintmax_t)VAR_3->fts_statp->st_gid,
       (VAR_0 == (gid_t)-1) ?
       (uintmax_t)VAR_3->fts_statp->st_gid : (uintmax_t)VAR_0);
  }
 }
 FUNC_0("\n");
}
