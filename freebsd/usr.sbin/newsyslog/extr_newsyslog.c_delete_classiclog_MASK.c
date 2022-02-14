
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfile1 ;
typedef int file1 ;
struct TYPE_2__ {int suffix; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,int,char const*,char const*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,char*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_4, const char *VAR_5, int VAR_6)
{
 char VAR_7[VAR_1], VAR_8[VAR_1];
 int VAR_9;

 FUNC_0(VAR_7, sizeof(VAR_7), VAR_4, VAR_5,
     VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  (void) FUNC_2(VAR_8, sizeof(VAR_8), "%s%s", VAR_7,
      VAR_2[VAR_9].suffix);
  if (VAR_3)
   FUNC_1("\trm -f %s\n", VAR_8);
  else
   (void) FUNC_3(VAR_8);
 }
}
