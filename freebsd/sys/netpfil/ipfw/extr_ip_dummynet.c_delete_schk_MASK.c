
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dn_schk {int dummy; } ;
struct TYPE_2__ {int schedhash; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,struct dn_schk*) ;
 int FUNC_1 (scalar_t__,int) ;
 TYPE_1__ VAR_4 ;
 struct dn_schk* FUNC_2 (int ,int,int ,int *) ;
 int FUNC_3 (struct dn_schk*,void*) ;

__attribute__((used)) static int
FUNC_4(int VAR_5)
{
 struct dn_schk *VAR_6;

 VAR_6 = FUNC_2(VAR_4.schedhash, VAR_5, VAR_0, ((void*)0));
 FUNC_0("%d %p", VAR_5, VAR_6);
 if (!VAR_6)
  return VAR_3;
 FUNC_1(VAR_5 + VAR_2, 1);

 FUNC_3(VAR_6, (void*)(uintptr_t)VAR_1);
 return 0;
}
