
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct passwd {char* pw_name; } ;
typedef int hostname ;
struct TYPE_5__ {void* sa_family; } ;
struct TYPE_4__ {void* sa_family; } ;
struct TYPE_6__ {int r_tty; int r_name; int l_name; int id_num; TYPE_2__ ctl_addr; TYPE_1__ addr; int vers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 () ;
 struct passwd* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_3__ VAR_5 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char const*,int ) ;
 int FUNC_11 () ;

void
FUNC_12(int VAR_6, char *VAR_7[])
{
 char VAR_8[VAR_1];
 char *VAR_9, *VAR_10;
 const char *VAR_11, *VAR_12;
 const char *VAR_13;
 char *VAR_14;

 if (VAR_6 < 2 )
  FUNC_11();
 if (!FUNC_8(0))
  FUNC_0(1, "standard input must be a tty, not a pipe or a file");
 if ((VAR_10 = FUNC_3()) == ((void*)0)) {
  struct passwd *VAR_15;

  if ((VAR_15 = FUNC_4(FUNC_5())) == ((void*)0))
   FUNC_0(1, "you don't exist. Go away");
  VAR_10 = VAR_15->pw_name;
 }
 FUNC_2(VAR_8, sizeof (VAR_8));
 VAR_11 = VAR_8;

 VAR_14 = VAR_7[1] + FUNC_9(VAR_7[1], "@:!");
 if (*VAR_14 == '\0') {

  VAR_9 = VAR_7[1];
  VAR_11 = VAR_12 = "localhost";
 } else {
  if (*VAR_14++ == '@') {

   VAR_9 = VAR_7[1];
   VAR_12 = VAR_14;
  } else {

   VAR_9 = VAR_14;
   VAR_12 = VAR_7[1];
  }
  *--VAR_14 = '\0';
 }
 if (VAR_6 > 2)
  VAR_13 = VAR_7[2];
 else
  VAR_13 = "";
 FUNC_1(VAR_11, VAR_12);



 VAR_5.vers = VAR_3;
 VAR_5.addr.sa_family = FUNC_7(VAR_0);
 VAR_5.ctl_addr.sa_family = FUNC_7(VAR_0);
 VAR_5.id_num = FUNC_6(0);
 FUNC_10(VAR_5.l_name, VAR_10, VAR_2);
 FUNC_10(VAR_5.r_name, VAR_9, VAR_2);
 FUNC_10(VAR_5.r_tty, VAR_13, VAR_4);
}
