
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union drbd_state {scalar_t__ role; scalar_t__ peer; scalar_t__ conn; scalar_t__ disk; scalar_t__ pdsk; } ;
typedef enum chg_state_flags { ____Placeholder_chg_state_flags } chg_state_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char*,char*,char*) ;

__attribute__((used)) static long FUNC_4(char *VAR_5, union drbd_state VAR_6, union drbd_state VAR_7,
          enum chg_state_flags VAR_8)
{
 char *VAR_9;
 VAR_9 = VAR_5;
 *VAR_9 = 0;

 if (VAR_7.role != VAR_6.role && VAR_8 & VAR_4)
  VAR_9 += FUNC_3(VAR_9, "role( %s -> %s ) ",
          FUNC_2(VAR_6.role),
          FUNC_2(VAR_7.role));
 if (VAR_7.peer != VAR_6.peer && VAR_8 & VAR_3)
  VAR_9 += FUNC_3(VAR_9, "peer( %s -> %s ) ",
          FUNC_2(VAR_6.peer),
          FUNC_2(VAR_7.peer));
 if (VAR_7.conn != VAR_6.conn && VAR_8 & VAR_0)
  VAR_9 += FUNC_3(VAR_9, "conn( %s -> %s ) ",
          FUNC_0(VAR_6.conn),
          FUNC_0(VAR_7.conn));
 if (VAR_7.disk != VAR_6.disk && VAR_8 & VAR_1)
  VAR_9 += FUNC_3(VAR_9, "disk( %s -> %s ) ",
          FUNC_1(VAR_6.disk),
          FUNC_1(VAR_7.disk));
 if (VAR_7.pdsk != VAR_6.pdsk && VAR_8 & VAR_2)
  VAR_9 += FUNC_3(VAR_9, "pdsk( %s -> %s ) ",
          FUNC_1(VAR_6.pdsk),
          FUNC_1(VAR_7.pdsk));

 return VAR_9 - VAR_5;
}
