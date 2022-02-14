
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int,int,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, int VAR_1, int VAR_2, int VAR_3) {
 size_t VAR_4 = (FUNC_0(1) << VAR_0);
 size_t VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);

 size_t VAR_6 = VAR_4;
 size_t VAR_7 = VAR_6 / VAR_5;
 size_t VAR_8 = 0;
 bool VAR_9 = 0;
 while (!VAR_9) {
  VAR_8 = VAR_6;
  size_t VAR_10 = VAR_7;
  VAR_6 += VAR_4;
  VAR_7 = VAR_6 / VAR_5;
  if (VAR_8 == VAR_10 * VAR_5) {
   VAR_9 = 1;
  }
 }
 return (int)(VAR_8 / VAR_4);
}
