
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char) ;
 int FUNC_4 (char const*,int,char*) ;
 int FUNC_5 (char const*,int,char*) ;
 int FUNC_6 (scalar_t__) ;
 long FUNC_7 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_8, char *VAR_9)
{
 char *VAR_10;
 long VAR_11;
 size_t VAR_12;
 int VAR_13;


 if (VAR_9[0] != '<' || !FUNC_3(VAR_9[1])) {
  FUNC_2("Invalid PRI from %s\n", VAR_8);
  return;
 }
 for (VAR_12 = 2; VAR_12 <= 4; VAR_12++) {
  if (VAR_9[VAR_12] == '>')
   break;
  if (!FUNC_3(VAR_9[VAR_12])) {
   FUNC_2("Invalid PRI header from %s\n", VAR_8);
   return;
  }
 }
 if (VAR_9[VAR_12] != '>') {
  FUNC_2("Invalid PRI header from %s\n", VAR_8);
  return;
 }
 VAR_7 = 0;
 VAR_11 = FUNC_7(VAR_9 + 1, &VAR_10, 10);
 if (VAR_7 != 0 || *VAR_10 != VAR_9[VAR_12] || VAR_11 < 0 || VAR_11 >= VAR_1) {
  FUNC_2("Invalid PRI %ld from %s: %s\n",
      VAR_11, VAR_8, FUNC_6(VAR_7));
  return;
 }
 VAR_13 = VAR_11;
 if (VAR_13 &~ (VAR_3|VAR_5))
  VAR_13 = VAR_0;






 if ((VAR_13 & VAR_3) == VAR_4 && !VAR_2)
  VAR_13 = FUNC_0(VAR_6, FUNC_1(VAR_13));


 VAR_9 += VAR_12 + 1;
 if (VAR_9[0] == '1' && VAR_9[1] == ' ')
  FUNC_5(VAR_8, VAR_13, VAR_9 + 2);
 else
  FUNC_4(VAR_8, VAR_13, VAR_9);
}
