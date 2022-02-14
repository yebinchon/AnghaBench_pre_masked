
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;

int
FUNC_6(int VAR_5, char **VAR_6)
{
    int VAR_7 = -1;
    int VAR_8;

    char *VAR_9 = FUNC_3(VAR_6[0], '/');
    VAR_2 = VAR_9 ? VAR_9 + 1 : VAR_6[0];

    VAR_4 = FUNC_1("TMPDIR") ? FUNC_1("TMPDIR") : VAR_4;

    while ((VAR_8 = FUNC_2(VAR_5, VAR_6, "ans:")) != -1) {
 switch (VAR_8) {
 case 'a':
     VAR_3 = ~0;
     break;
 case 'n':
     VAR_3 = 0;
     break;
 case 's':
     {
  int VAR_10 = FUNC_0(VAR_1);
  if (VAR_10 < 0 || VAR_10 >= VAR_0 * sizeof VAR_3) {
      FUNC_5(0, "Invalid slot number.");
      FUNC_4();
      goto out;
  }
  if (VAR_3 == ~0)
      VAR_3 = 0;
  VAR_3 |= 1 << VAR_10;
     }
     break;
 default:
     FUNC_4();
     goto out;
 }
    }

    VAR_7 = 0;
  out:
    return VAR_7;
}
