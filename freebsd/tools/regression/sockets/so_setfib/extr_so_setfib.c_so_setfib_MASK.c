
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
typedef int i ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,char*,char*,int,...) ;
 int VAR_4 ;
 int FUNC_1 (int,int ,int ,int*,int) ;
 char* FUNC_2 (scalar_t__) ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3(int VAR_8, int VAR_9, u_int VAR_10, u_int VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_1(VAR_8, VAR_1, VAR_2, &VAR_9, sizeof(VAR_9));

 if (VAR_12 == -1 && (VAR_9 < 0 || VAR_9 > VAR_4))
  FUNC_0("ok %d %s_%s_%d\n", VAR_7, VAR_5[VAR_10].name,
      VAR_6[VAR_11].name, VAR_9);
 else if (VAR_12 != -1 && (VAR_9 < 0 || VAR_9 > VAR_4))
  FUNC_0("not ok %d %s_%s_%d # setsockopt(%d, SOL_SOCKET, "
      "SO_SETFIB, %d, ..) unexpectedly succeeded\n", VAR_7,
      VAR_5[VAR_10].name, VAR_6[VAR_11].name, VAR_9, VAR_8, VAR_9);
 else if (VAR_12 == 0)
  FUNC_0("ok %d %s_%s_%d\n", VAR_7, VAR_5[VAR_10].name,
      VAR_6[VAR_11].name, VAR_9);
 else if (VAR_3 != VAR_0)
  FUNC_0("not ok %d %s_%s_%d # setsockopt(%d, SOL_SOCKET, "
      "SO_SETFIB, %d, ..) unexpected error: %s\n", VAR_7,
      VAR_5[VAR_10].name, VAR_6[VAR_11].name, VAR_9, VAR_8, VAR_9,
      FUNC_2(VAR_3));
 else
  FUNC_0("not ok %d %s_%s_%d\n", VAR_7, VAR_5[VAR_10].name,
      VAR_6[VAR_11].name, VAR_9);


 VAR_7++;
}
