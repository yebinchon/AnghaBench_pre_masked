
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_ktableworkq {int dummy; } ;
struct pfr_ktable {int dummy; } ;


 struct pfr_ktable* FUNC_0 (struct pfr_ktableworkq*) ;
 struct pfr_ktable* FUNC_1 (struct pfr_ktable*,int ) ;
 int FUNC_2 (struct pfr_ktable*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct pfr_ktableworkq *VAR_1, int VAR_2)
{
 struct pfr_ktable *VAR_3, *VAR_4;

 for (VAR_3 = FUNC_0(VAR_1); VAR_3; VAR_3 = VAR_4) {
  VAR_4 = FUNC_1(VAR_3, VAR_0);
  FUNC_2(VAR_3, VAR_2);
 }
}
