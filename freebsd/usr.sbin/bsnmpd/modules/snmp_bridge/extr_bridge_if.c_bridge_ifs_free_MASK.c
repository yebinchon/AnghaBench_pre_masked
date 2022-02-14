
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_ifs {int dummy; } ;
struct bridge_if {int dummy; } ;


 struct bridge_if* FUNC_0 (struct bridge_ifs*) ;
 int FUNC_1 (struct bridge_ifs*,struct bridge_if*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct bridge_if*) ;

__attribute__((used)) static void
FUNC_3(struct bridge_ifs *VAR_1)
{
 struct bridge_if *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_1, VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
}
