
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txseginfo {int dummy; } ;
struct ertt {int txsegi_q; } ;


 struct txseginfo* FUNC_0 (int *) ;
 struct txseginfo* FUNC_1 (struct txseginfo*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct txseginfo*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, int VAR_3, void *VAR_4)
{
 struct ertt *VAR_5;
 struct txseginfo *VAR_6, *VAR_7;

 VAR_5 = VAR_2;
 VAR_7 = FUNC_0(&VAR_5->txsegi_q);
 while (VAR_7 != ((void*)0)) {
  VAR_6 = FUNC_1(VAR_7, VAR_0);
  FUNC_2(VAR_1, VAR_7);
  VAR_7 = VAR_6;
 }
}
