
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rwcount {long fd; } ;
typedef int BIO ;
 struct rwcount* FUNC_0 (int *) ;
 long FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static long
FUNC_3(BIO *VAR_0, int VAR_1, long VAR_2, void *VAR_3)
{
 struct rwcount *VAR_4 = FUNC_0(VAR_0);
 long VAR_5 = 0;
 switch (VAR_1) {
 case 128:
  VAR_5 = VAR_4->fd;
  break;
 case 132:
  VAR_5 = FUNC_1(VAR_0);
  break;
 case 130:
  FUNC_2(VAR_0, (int)VAR_2);
  break;
 case 131:
  VAR_5 = 0;
  break;
 case 129:
  VAR_5 = 0;
  break;
 case 134:
 case 133:
  VAR_5 = 1;
  break;
 }
 return VAR_5;
}
