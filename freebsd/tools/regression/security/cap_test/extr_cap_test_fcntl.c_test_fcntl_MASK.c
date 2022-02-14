
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {char* member_0; int member_1; int f_fd; int f_name; } ;
typedef int cap_rights_t ;
typedef int all ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int (*) (int,int ,int ),int,int ,int ) ;
 int FUNC_1 (int (*) (int,int ,int ),int,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int ) ;

int
FUNC_10(void)
{
 int VAR_9 = VAR_5;
 cap_rights_t VAR_10 = VAR_1 | VAR_0;




 struct fd VAR_11[] = {
  { "file", FUNC_7("/etc/passwd", VAR_3) },
  { "socket", FUNC_9(VAR_6, VAR_8, 0) },
  { "SHM", FUNC_8(VAR_7, VAR_4, 0600) },
 };
 FUNC_3(VAR_11[0].f_fd);
 FUNC_3(VAR_11[1].f_fd);
 FUNC_3(VAR_11[2].f_fd);

 struct fd VAR_12[] = {
  { "file cap", FUNC_5(VAR_11[0].f_fd, VAR_10) },
  { "socket cap", FUNC_5(VAR_11[1].f_fd, VAR_10) },
  { "SHM cap", FUNC_5(VAR_11[2].f_fd, VAR_10) },
 };
 FUNC_3(VAR_12[0].f_fd);
 FUNC_3(VAR_12[1].f_fd);
 FUNC_3(VAR_12[2].f_fd);

 struct fd VAR_13[] = {
  VAR_11[0], VAR_12[0],
  VAR_11[1], VAR_12[1],
  VAR_11[2], VAR_12[2],
 };
 const size_t VAR_14 = sizeof(VAR_13) / sizeof(struct fd);

 FUNC_3(FUNC_4());




 for (size_t VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
 {
  struct fd VAR_16 = VAR_13[VAR_15];
  int VAR_17;

  FUNC_1(FUNC_6, VAR_16.f_fd, VAR_2, 0);
  FUNC_3(VAR_17 = FUNC_5(VAR_16.f_fd, VAR_1));
  if (FUNC_6(VAR_16.f_fd, VAR_2, 0) == -1)
   FUNC_2("Error calling fcntl('%s', F_GETFL)", VAR_16.f_name);
  else
   FUNC_0(FUNC_6, VAR_17, VAR_2, 0);
 }

 return (VAR_9);
}
