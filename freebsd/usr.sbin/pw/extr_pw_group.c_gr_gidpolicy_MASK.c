
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct userconf {int min_gid; int max_gid; scalar_t__ reuse_gids; } ;
struct group {int gr_gid; } ;
struct bitmap {int dummy; } ;
typedef scalar_t__ intmax_t ;
typedef scalar_t__ gid_t ;
struct TYPE_2__ {scalar_t__ checkduplicate; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct group* FUNC_1 () ;
 struct group* FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 struct bitmap FUNC_4 (int) ;
 int FUNC_5 (struct bitmap*) ;
 int FUNC_6 (struct bitmap*) ;
 int FUNC_7 (struct bitmap*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct bitmap*) ;
 int FUNC_9 (struct bitmap*,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_10 (int ,char*,...) ;

__attribute__((used)) static gid_t
FUNC_11(struct userconf * VAR_3, intmax_t VAR_4)
{
 struct group *VAR_5;
 struct bitmap VAR_6;
 gid_t VAR_7 = (gid_t) - 1;




 if (VAR_4 > 0) {
  VAR_7 = (gid_t) VAR_4;

  if ((VAR_5 = FUNC_2(VAR_7)) != ((void*)0) && VAR_2.checkduplicate)
   FUNC_10(VAR_0, "gid `%ju' has already been allocated",
       (uintmax_t)VAR_5->gr_gid);
  return (VAR_7);
 }






 if (VAR_3->min_gid >= VAR_3->max_gid) {
  VAR_3->min_gid = 1000;
  VAR_3->max_gid = 32000;
 }
 VAR_6 = FUNC_4(VAR_3->max_gid - VAR_3->min_gid + 1);




 FUNC_3();
 while ((VAR_5 = FUNC_1()) != ((void*)0))
  if ((gid_t)VAR_5->gr_gid >= (gid_t)VAR_3->min_gid &&
      (gid_t)VAR_5->gr_gid <= (gid_t)VAR_3->max_gid)
   FUNC_9(&VAR_6, VAR_5->gr_gid - VAR_3->min_gid);
 FUNC_0();




 if (VAR_3->reuse_gids)
  VAR_7 = (gid_t) (FUNC_6(&VAR_6) + VAR_3->min_gid);
 else {
  VAR_7 = (gid_t) (FUNC_8(&VAR_6) + 1);
  if (!FUNC_7(&VAR_6, VAR_7))
   VAR_7 += VAR_3->min_gid;
  else
   VAR_7 = (gid_t) (FUNC_6(&VAR_6) + VAR_3->min_gid);
 }




 if (VAR_7 < VAR_3->min_gid || VAR_7 > VAR_3->max_gid)
  FUNC_10(VAR_1, "unable to allocate a new gid - range fully "
      "used");
 FUNC_5(&VAR_6);
 return (VAR_7);
}
