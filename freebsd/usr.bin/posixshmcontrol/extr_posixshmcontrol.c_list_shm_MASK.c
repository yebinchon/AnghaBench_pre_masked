
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char* uintmax_t ;
struct stat {int st_uid; int st_gid; } ;
struct TYPE_3__ {scalar_t__ kf_file_size; int kf_file_mode; } ;
struct TYPE_4__ {TYPE_1__ kf_file; } ;
struct kinfo_file {scalar_t__ kf_structsize; char* kf_path; TYPE_2__ kf_un; } ;
typedef int sizebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,struct stat*) ;
 int FUNC_3 (int,char**,char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int,scalar_t__,char*,int ,int ) ;
 char* VAR_3 ;
 char* FUNC_6 (size_t) ;
 size_t FUNC_7 (int*) ;
 int VAR_4 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (int*,size_t,char*,size_t*,int *,int ) ;
 int FUNC_12 (char*,int*,size_t*) ;
 int FUNC_13 () ;
 char* FUNC_14 (int,int ) ;
 int FUNC_15 (char*,...) ;

__attribute__((used)) static int
FUNC_16(int VAR_5, char **VAR_6)
{
 char *VAR_7, *VAR_8, VAR_9[8], VAR_10[10];
 const struct kinfo_file *VAR_11;
 struct stat VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16[3], VAR_17;
 size_t VAR_18, VAR_19;
 bool VAR_20, VAR_21;

 VAR_20 = 0;
 VAR_21 = 1;

 while ((VAR_13 = FUNC_3(VAR_5, VAR_6, "hn")) != -1) {
  switch (VAR_13) {
  case 'h':
   VAR_20 = 1;
   break;
  case 'n':
   VAR_21 = 0;
   break;
  default:
   FUNC_13();
   return (2);
  }
 }
 if (VAR_5 != VAR_4) {
  FUNC_13();
  return (2);
 }

 VAR_19 = FUNC_7(VAR_16);
 VAR_14 = FUNC_12(VAR_3, VAR_16, &VAR_19);
 if (VAR_14 == -1) {
  FUNC_15("cannot translate %s", VAR_3);
  return (1);
 }
 VAR_18 = 0;
 VAR_14 = FUNC_11(VAR_16, VAR_19, ((void*)0), &VAR_18, ((void*)0), 0);
 if (VAR_14 == -1) {
  FUNC_15("cannot get %s length", VAR_3);
  return (1);
 }
 VAR_18 = VAR_18 * 4 / 3;
 VAR_7 = FUNC_6(VAR_18);
 if (VAR_7 == ((void*)0)) {
  FUNC_15("malloc");
  return (1);
 }
 VAR_14 = FUNC_11(VAR_16, VAR_19, VAR_7, &VAR_18, ((void*)0), 0);
 if (VAR_14 != 0) {
  FUNC_15("reading %s", VAR_3);
  VAR_17 = 1;
  goto out;
 }
 VAR_17 = 0;
 FUNC_8("MODE    \tOWNER\tGROUP\tSIZE\tPATH\n");
 for (VAR_8 = VAR_7; VAR_8 < VAR_7 + VAR_18; VAR_8 += VAR_11->kf_structsize) {
  VAR_11 = (const struct kinfo_file *)(void *)VAR_8;
  if (VAR_11->kf_structsize == 0)
   break;
  VAR_15 = FUNC_10(VAR_11->kf_path, VAR_2, 0);
  if (VAR_15 == -1) {
   FUNC_15("open %s", VAR_11->kf_path);
   VAR_17 = 1;
   continue;
  }
  VAR_14 = FUNC_2(VAR_15, &VAR_12);
  FUNC_0(VAR_15);
  if (VAR_14 != 0) {
   FUNC_15("stat %s", VAR_11->kf_path);
   VAR_17 = 1;
   continue;
  }
  FUNC_9(VAR_11->kf_un.kf_file.kf_file_mode, VAR_10);
  FUNC_8("%s\t", VAR_10);
  if (VAR_21) {
   FUNC_8("%s\t%s\t", FUNC_14(VAR_12.st_uid, 0),
       FUNC_4(VAR_12.st_gid, 0));
  } else {
   FUNC_8("%d\t%d\t", VAR_12.st_uid, VAR_12.st_gid);
  }
  if (VAR_20) {
   FUNC_5(VAR_9, sizeof(VAR_9),
       VAR_11->kf_un.kf_file.kf_file_size, "", VAR_0,
       VAR_1);
   FUNC_8("%s\t", VAR_9);
  } else {
   FUNC_8("%jd\t",
       (uintmax_t)VAR_11->kf_un.kf_file.kf_file_size);
  }
  FUNC_8("%s\n", VAR_11->kf_path);
 }
out:
 FUNC_1(VAR_7);
 return (VAR_17);
}
