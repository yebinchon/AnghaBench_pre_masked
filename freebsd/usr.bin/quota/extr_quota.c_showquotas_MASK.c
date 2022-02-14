
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_long ;
typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ dqb_ihardlimit; scalar_t__ dqb_curinodes; scalar_t__ dqb_isoftlimit; scalar_t__ dqb_itime; scalar_t__ dqb_bhardlimit; scalar_t__ dqb_curblocks; scalar_t__ dqb_bsoftlimit; scalar_t__ dqb_btime; } ;
struct quotause {char* fsname; TYPE_1__ dqblk; struct quotause* next; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 struct quotause* FUNC_2 (int ,int) ;
 int FUNC_3 (int,int ,char const*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int,int ,struct quotause*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (scalar_t__*) ;
 char* FUNC_9 (scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_10(int VAR_4, u_long VAR_5, const char *VAR_6)
{
 struct quotause *VAR_7;
 struct quotause *VAR_8;
 const char *VAR_9, *VAR_10;
 const char *VAR_11;
 char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 int VAR_14 = 0, VAR_15 = 0;
 static time_t VAR_16;

 if (VAR_16 == 0)
  FUNC_8(&VAR_16);
 VAR_8 = FUNC_2(VAR_5, VAR_4);
 for (VAR_7 = VAR_8; VAR_7; VAR_7 = VAR_7->next) {
  VAR_9 = ((void*)0);
  if (VAR_7->dqblk.dqb_ihardlimit &&
      VAR_7->dqblk.dqb_curinodes >= VAR_7->dqblk.dqb_ihardlimit) {
   VAR_15++;
   VAR_9 = "File limit reached on";
  }
  else if (VAR_7->dqblk.dqb_isoftlimit &&
      VAR_7->dqblk.dqb_curinodes >= VAR_7->dqblk.dqb_isoftlimit) {
   VAR_15++;
   if (VAR_7->dqblk.dqb_itime > VAR_16)
    VAR_9 = "In file grace period on";
   else
    VAR_9 = "Over file quota on";
  }
  VAR_10 = ((void*)0);
  if (VAR_7->dqblk.dqb_bhardlimit &&
      VAR_7->dqblk.dqb_curblocks >= VAR_7->dqblk.dqb_bhardlimit) {
   VAR_15++;
   VAR_10 = "Block limit reached on";
  }
  else if (VAR_7->dqblk.dqb_bsoftlimit &&
      VAR_7->dqblk.dqb_curblocks >= VAR_7->dqblk.dqb_bsoftlimit) {
   VAR_15++;
   if (VAR_7->dqblk.dqb_btime > VAR_16)
    VAR_10 = "In block grace period on";
   else
    VAR_10 = "Over block quota on";
  }
  if (VAR_2) {
   FUNC_6(VAR_4, VAR_5, VAR_7);
   continue;
  }
  if (!VAR_3 &&
      VAR_7->dqblk.dqb_isoftlimit == 0 &&
      VAR_7->dqblk.dqb_ihardlimit == 0 &&
      VAR_7->dqblk.dqb_bsoftlimit == 0 &&
      VAR_7->dqblk.dqb_bhardlimit == 0)
   continue;
  if (VAR_1) {
   if ((VAR_9 != ((void*)0) || VAR_10 != ((void*)0)) &&
       VAR_14++ == 0)
    FUNC_3(VAR_4, VAR_5, VAR_6, "");
   if (VAR_9 != ((void*)0))
    FUNC_4("\t%s %s\n", VAR_9, VAR_7->fsname);
   if (VAR_10 != ((void*)0))
    FUNC_4("\t%s %s\n", VAR_10, VAR_7->fsname);
   continue;
  }
  if (!VAR_3 &&
      VAR_7->dqblk.dqb_curblocks == 0 &&
      VAR_7->dqblk.dqb_curinodes == 0)
   continue;
  if (VAR_14++ == 0)
   FUNC_3(VAR_4, VAR_5, VAR_6, "");
  VAR_11 = VAR_7->fsname;
  if (FUNC_7(VAR_7->fsname) > 15) {
   FUNC_4("%s\n", VAR_7->fsname);
   VAR_11 = "";
  }
  FUNC_4("%-15s", VAR_11);
  if (VAR_0) {
   FUNC_5(7, FUNC_0(VAR_7->dqblk.dqb_curblocks));
   FUNC_4("%c", (VAR_10 == ((void*)0)) ? ' ' : '*');
   FUNC_5(7, FUNC_0(VAR_7->dqblk.dqb_bsoftlimit));
   FUNC_5(7, FUNC_0(VAR_7->dqblk.dqb_bhardlimit));
  } else {
   FUNC_4(" %7ju%c %7ju %7ju",
       (uintmax_t)FUNC_0(VAR_7->dqblk.dqb_curblocks)
    / 1024,
       (VAR_10 == ((void*)0)) ? ' ' : '*',
       (uintmax_t)FUNC_0(VAR_7->dqblk.dqb_bsoftlimit)
    / 1024,
       (uintmax_t)FUNC_0(VAR_7->dqblk.dqb_bhardlimit)
    / 1024);
  }
  if (VAR_10 != ((void*)0))
   VAR_12 = FUNC_9(VAR_7->dqblk.dqb_btime);
  if (VAR_9 != ((void*)0))
   VAR_13 = FUNC_9(VAR_7->dqblk.dqb_itime);
  FUNC_4("%8s %6ju%c %6ju %6ju%8s\n"
   , (VAR_10 == ((void*)0)) ? "" : VAR_12
   , (uintmax_t)VAR_7->dqblk.dqb_curinodes
   , (VAR_9 == ((void*)0)) ? ' ' : '*'
   , (uintmax_t)VAR_7->dqblk.dqb_isoftlimit
   , (uintmax_t)VAR_7->dqblk.dqb_ihardlimit
   , (VAR_9 == ((void*)0)) ? "" : VAR_13
  );
  if (VAR_10 != ((void*)0))
   FUNC_1(VAR_12);
  if (VAR_9 != ((void*)0))
   FUNC_1(VAR_13);
 }
 if (!VAR_1 && !VAR_2 && VAR_14 == 0)
  FUNC_3(VAR_4, VAR_5, VAR_6, "none");
 return (VAR_15);
}
