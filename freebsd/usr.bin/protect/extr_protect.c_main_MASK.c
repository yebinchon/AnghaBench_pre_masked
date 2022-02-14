
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int idtype_t ;
typedef int id_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*,char**) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 () ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int*) ;
 int FUNC_6 () ;

int
FUNC_7(int VAR_11, char *VAR_12[])
{
 idtype_t VAR_13;
 id_t VAR_14;
 int VAR_15, VAR_16;
 bool VAR_17, VAR_18, VAR_19;

 VAR_13 = VAR_7;
 VAR_14 = FUNC_3();
 VAR_16 = VAR_4;
 VAR_17 = VAR_18 = VAR_19 = 0;
 while ((VAR_15 = FUNC_2(VAR_11, VAR_12, "cdig:p:")) != -1)
  switch (VAR_15) {
  case 'c':
   VAR_16 = VAR_1;
   break;
  case 'd':
   VAR_17 = 1;
   break;
  case 'i':
   VAR_18 = 1;
   break;
  case 'g':
   VAR_13 = VAR_6;
   VAR_14 = FUNC_4(VAR_9);
   VAR_19 = 1;
   break;
  case 'p':
   VAR_13 = VAR_7;
   VAR_14 = FUNC_4(VAR_9);
   VAR_19 = 1;
   break;
  }
 VAR_11 -= VAR_10;
 VAR_12 += VAR_10;

 if ((VAR_19 && VAR_11 != 0) || (!VAR_19 && (VAR_11 == 0 || VAR_17)))
  FUNC_6();

 if (VAR_17)
  VAR_16 |= VAR_2;
 if (VAR_18)
  VAR_16 |= VAR_3;
 if (FUNC_5(VAR_13, VAR_14, VAR_5, &VAR_16) == -1)
  FUNC_0(1, "procctl");

 if (VAR_11 != 0) {
  VAR_8 = 0;
  FUNC_1(*VAR_12, VAR_12);
  FUNC_0(VAR_8 == VAR_0 ? 127 : 126, "%s", *VAR_12);
 }
 return (0);
}
