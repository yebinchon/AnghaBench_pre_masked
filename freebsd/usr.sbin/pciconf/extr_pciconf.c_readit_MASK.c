
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcisel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ) ;
 struct pcisel FUNC_2 (char const*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char) ;
 int FUNC_5 (int,struct pcisel*,long,int) ;
 long FUNC_6 (char const*,char**,int ) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2, const char *VAR_3, int VAR_4)
{
 long VAR_5;
 long VAR_6;
 long VAR_7;
 char *VAR_8;
 int VAR_9;
 int VAR_10;
 struct pcisel VAR_11;

 VAR_10 = FUNC_3(VAR_1, VAR_0, 0);
 if (VAR_10 < 0)
  FUNC_1(1, "%s", VAR_1);

 VAR_6 = VAR_5 = FUNC_6(VAR_3, &VAR_8, 0);
 if (VAR_8 && *VAR_8 == ':') {
  VAR_8++;
  VAR_6 = FUNC_6(VAR_8, (char **) 0, 0);
 }
 VAR_11 = FUNC_2(VAR_2);
 for (VAR_9 = 1, VAR_7 = VAR_5; VAR_7 <= VAR_6; VAR_9++, VAR_7 += VAR_4) {
  FUNC_5(VAR_10, &VAR_11, VAR_7, VAR_4);
  if (VAR_9 && !(VAR_9 % 8))
   FUNC_4(' ');
  FUNC_4(VAR_9 % (16/VAR_4) ? ' ' : '\n');
 }
 if (VAR_9 % (16/VAR_4) != 1)
  FUNC_4('\n');
 FUNC_0(VAR_10);
}
